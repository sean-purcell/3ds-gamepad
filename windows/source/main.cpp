#include <atomic>
#include <iostream>
#include <string>
#include <vector>

#include "device.h"
#include "frame.h"
#include "server.h"

std::atomic<bool> quit(false);

void sighandle(int) {
    quit.store(true);
}

void go(int argc, char** argv) {
    gamepad::Server server("0.0.0.0", 44813);
    gamepad::Device device;

    GamepadFrame frame = GamepadFrame_init_zero;

    while (!quit.load()) {
        auto data = server.receive(1024);

        auto new_frame = gamepad::parse_frame(data);
        if (new_frame.seqno < frame.seqno)
            continue;
        frame = new_frame;
        device.send_events(frame);
    }
}

int main(int argc, char** argv) {
    try {
        go(argc, argv);
    } catch (std::exception& e) {
        std::cerr << "Failed: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}
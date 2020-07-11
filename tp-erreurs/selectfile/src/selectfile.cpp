#include "MyWindow.hpp"

int main(int argc, char ** argv) {
    Gtk::Main kit(argc, argv);
    MyWindow window;
    kit.run(window);
    return 0;
}


#include "MyWindow.hpp"

#include <filesystem>
#include <iostream>

MyWindow::MyWindow() {
    // instantiate widgets
    auto ptrPaned = Gtk::make_managed<Gtk::HPaned>();
    auto ptrSelectButton = Gtk::make_managed<Gtk::Button>(" Select ");
    auto ptrQuitButton = Gtk::make_managed<Gtk::Button>(" Quit ");

    // connect signals
    ptrSelectButton->signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::select));
    ptrQuitButton->signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::quit));

    // add widgets in window
    add(*ptrPaned);
    ptrPaned->add1(*ptrSelectButton);
    ptrPaned->add2(*ptrQuitButton);
    show_all();
}

void MyWindow::quit() {
    Gtk::Main::quit();
}

void MyWindow::select() {
    // build & run a FileChooser dialog
    Gtk::FileChooserDialog dialog(*this, "select file...");
    dialog.add_button(Gtk::Stock::CANCEL, Gtk::RESPONSE_CANCEL);
    dialog.add_button(Gtk::Stock::OPEN, Gtk::RESPONSE_OK);
    int ret = dialog.run();

    // process result
    if (ret == Gtk::RESPONSE_OK) {
        const std::filesystem::path path(dialog.get_filename());
        const std::string basename(path.filename());
        std::cout << basename << std::endl;
    }
    else {
        std::cout << "cancelled" << std::endl;
    }
}


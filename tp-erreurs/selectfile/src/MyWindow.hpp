#pragma once

#include <gtkmm.h>

class MyWindow : public Gtk::Window {
    
    public:
        MyWindow();

    private:
        void quit();
        void select();
};


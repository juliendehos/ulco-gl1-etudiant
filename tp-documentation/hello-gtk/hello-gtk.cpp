#include <gtkmm.h>

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv);

  Gtk::Window window;
  window.set_default_size(200, 100);

  Gtk::Label label("hello gtk");
  window.add(label);

  window.show_all();

  return app->run(window);
}


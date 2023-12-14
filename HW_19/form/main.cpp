#include <QApplication>
#include "form.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Form window;

  window.resize(500, 300);
  window.setWindowTitle("Autorisation form:");
  window.show();

  return app.exec();
}

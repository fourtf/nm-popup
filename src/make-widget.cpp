#include "make-widget.hpp"

#include <QBoxLayout>

namespace ab {
  void addStretch(void *) { assert(false); }

  void addStretch(QBoxLayout *box) { box->addStretch(); }

  QObject *stretch() {
    static QObject obj;
    return &obj;
  }

  QObject *space() {
    static QObject obj;
    return &obj;
  }
} // namespace ab

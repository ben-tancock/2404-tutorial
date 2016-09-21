#ifndef LIB_CONTROL_H
#define LIB_CONTROL_H

#include "types.h"
#include "Library.h"
#include "View.h"

class View;

class LibControl
{
  public:
    LibControl();
    void launch();
    void addPatron();
  private:
    Library lib;
    View    view;
    void    initLib();
};

#endif


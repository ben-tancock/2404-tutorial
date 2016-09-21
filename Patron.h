#ifndef PATRON_H
#define PATRON_H

#include <string>
#include "Book.h"
#include "types.h"

class Patron
{
  public:
    Patron(string="", string="");
    string getFname();
    string getLname();
  private:
    string fname;
    string lname;
};

#endif


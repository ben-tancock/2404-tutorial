#include "Patron.h"

Patron::Patron(string fn, string ln) 
{ 
  fname = fn;
  lname = ln;
}

string Patron::getFname() { return fname; }
string Patron::getLname() { return lname; }


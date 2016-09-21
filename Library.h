#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "types.h"
#include "Book.h"
#include "Patron.h"

class Library
{
  public:
    Library();
    //int     addBook(Book*);
    int     addPatron(Patron*);
    //int     getNumBooks();
    int     getNumPatrons();
    //Book*   getBook(int);
    Patron* getPatron(int);
    int     findPatron(string, string, Patron**);
  private:
    //Book*   books[MAX_COLL_SIZE];
    Patron* patrons[MAX_COLL_SIZE];
    int     numBooks;
    int     numPatrons;
};

#endif


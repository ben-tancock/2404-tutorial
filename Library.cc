#include "Library.h"

Library::Library()
  : numBooks(0), numPatrons(0)
{ 
  for (int i=0; i<MAX_COLL_SIZE; ++i) {
    patrons[i] = 0;
    books[i]   = 0;
  }
}

int Library::getNumBooks()   { return numBooks;   }
int Library::getNumPatrons() { return numPatrons; }

Book* Library::getBook(int index) 
{ 
  if (index < 0 || index >= numBooks)
    return 0;
  return books[index]; 
}

Patron* Library::getPatron(int index) 
{ 
  if (index < 0 || index >= numPatrons)
    return 0;
  return patrons[index]; 
}

int Library::addBook(Book* book)
{
  if (numBooks >= MAX_COLL_SIZE - 1) {
    return C_NOK;
  }

  books[numBooks++] = book;

  return C_OK;
}

int Library::addPatron(Patron* patron)
{
  if (numPatrons >= MAX_COLL_SIZE - 1) {
    return C_NOK;
  }

  patrons[numPatrons++] = patron;

  return C_OK;
}

int Library::findPatron(string fn, string ln, Patron** patron)
{
  for (int i=0; i<numPatrons; ++i) {
    if (patrons[i]->getFname() == fn && patrons[i]->getLname() == ln) {
      *patron = patrons[i];
      return C_OK;
    }
  }
  *patron =  0;
  return C_NOK;
}


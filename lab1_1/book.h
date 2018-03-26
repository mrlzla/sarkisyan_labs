#ifndef BOOK_H
#define BOOK_H

#include "basictypes.h"

class Book
{
public:
    Book(const std::string name, const std::string author,
         const unsigned int publishing_year, const unsigned int pages_count);

public:
    unsigned int id;
    static unsigned int last_id;
    std::string name;
    std::string author;
    unsigned int publishing_year;
    unsigned int pages_count;
};
typedef std::shared_ptr<Book> BookPtr;
typedef std::vector<BookPtr> Books;


#endif // BOOK_H

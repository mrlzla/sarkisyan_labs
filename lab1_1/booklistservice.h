#ifndef BOOKLISTSERVICE_H
#define BOOKLISTSERVICE_H

#include "basictypes.h"
#include "book.h"
#include "repository.h"


class BookListService
{
public:
    BookListService();
    void AddBook(const BookPtr item);
    void RemoveBook(const BookPtr & item);
    BookPtr FindBookById(const unsigned int id);
    void SortBooksById();

private:
    std::shared_ptr< Repository<BookPtr> > book_repository;
};

#endif // BOOKLISTSERVICE_H

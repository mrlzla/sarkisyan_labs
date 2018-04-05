#ifndef BOOKLISTSERVICE_H
#define BOOKLISTSERVICE_H

#include "basictypes.h"
#include "book.h"
#include "irepository.h"


class BookListService
{
public:
    BookListService(IRepository<BookPtr> book_repository);
    void AddBook(const BookPtr item);
    void RemoveBook(const BookPtr & item);
    BookPtr FindBookById(const unsigned int id);
    void SortBooksById();

private:
    std::shared_ptr< IRepository<BookPtr> > book_repository;
};

#endif // BOOKLISTSERVICE_H

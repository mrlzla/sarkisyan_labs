#include "booklistservice.h"

BookListService::BookListService()
{
    book_repository.reset(new Repository<BookPtr>());
}

void BookListService::AddBook(const BookPtr item)
{
    book_repository->AddItem(item);
}
void BookListService::RemoveBook(const BookPtr & item)
{
    book_repository->RemoveItem (item);
}
BookPtr BookListService::FindBookById(const unsigned int id)
{
    return book_repository->FindItemById (id);
}
void BookListService::SortBooksById()
{
    return book_repository->SortItemsById ();
}

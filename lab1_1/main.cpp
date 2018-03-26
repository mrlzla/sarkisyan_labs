#include <iostream>
#include "booklistservice.h"

using namespace std;

void findBook(BookListService & repo, unsigned int id)
{
    BookPtr book2;
    if (book2 = repo.FindBookById(id))
    {
        std::cout << book2->name << std::endl;
    }
    else
    {
        std::cout << "There is no book with id " << id << std::endl;
    }
}

int main()
{
    BookPtr book;
    book.reset(new Book("Animal Farm", "George Oruell", 1945, 150));

    BookListService repo;

    repo.AddBook(book);
    repo.SortBooksById();
    findBook(repo, 1);
    repo.RemoveBook(book);
    findBook(repo, 1);
    return 0;
}

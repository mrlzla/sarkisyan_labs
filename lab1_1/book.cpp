#include "book.h"

unsigned int Book::last_id = 0;

Book::Book(const std::string name, const std::string author,
           const unsigned int publishing_year, const unsigned int pages_count):
    name(name), author(author), publishing_year(publishing_year), pages_count(pages_count)
{
    id = ++last_id;
}

#ifndef BOOK_H
#define BOOK_H

#include <string>
class Book
{
public:
    Book();
    ~Book();
    Book(std::string bookname, std::string bookAuthor, std::string bookId);

    std::string bookName();
    void setBookName(std::string newBookName);

    std::string bookAuthor();
    void setBookAuthor(std::string newBookAuthor);

    std::string bookId();
    void setBookId(std::string newBookId);

private:
    std::string m_bookName;
    std::string m_bookAuthor;
    std::string m_bookId;
};

#endif // BOOK_H

#ifndef BOOK_H
#define BOOK_H

#include <string>
class Book
{
public:
    Book();
    ~Book();
    Book(std::string bookname, std::string bookAuthor, std::string bookId);

    std::string getBookName();
    void setBookName(std::string newBookName);

    std::string getBookAuthor();
    void setBookAuthor(std::string newBookAuthor);

    std::string getBookId();
    void setBookId(std::string newBookId);

private:
    std::string m_bookName;
    std::string m_bookAuthor;
    std::string m_bookId;
};

#endif // BOOK_H

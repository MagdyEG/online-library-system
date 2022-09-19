#include "book.h"
#include <iostream>
#include <string>


int book::count = 0;

book::book()
{
    title = "";
    isbn = "";
    count++;
    id = count;
    category = "";
    averageRating = 0.0;
    numRates = 0;
    sumRates = 0.0;
    user author;
}

book::book(string t, string is, string ca)
{
    title = t;
    isbn = is;
    category = ca;
    count++;
    id = count;
    averageRating = 0.0;
    numRates = 0;
    sumRates = 0.0;
    user author;
}

void book::setTitle(string t)
{
    title = t;
}

string user::getTitle() const
{
    return title;
}

void book::setIsbn(string is)
{
    isbn = is;
}

string user::getIsbn() const
{
    return isbn;
}

/*void book::setId(int i)
{
    id = i;
}*/

int user::getId() const
{
    return id;
}

void book::setCategory(string ca)
{
    category = ca;
}

string user::getCategory() const
{
    return category;
}

void book::setAuthor(const User &user)
{
    author = user;
}

string book::getAuthor() const
{
    return author;
}

double book::getAverageRating() const
{
    return averageRating;
}

void book::rateBook(double rating)
{
    numRates++;
    sumRates += rating;
    averageRating = sumRates / numRates;
}

bool book::operator== (const Book& book1)
{
    if (title != book.title || isbn != book.isbn || id != book.id || category != book.category || averageRating != book.averageRating || author != book.author)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void book::Display()
{
    cout << "*********************************" << endl;
    cout << "Title:" << title << endl;
    cout << "Isbn:" << isbn << endl;
    cout << "ID:" << id << endl;
    cout << "Category:" << category << endl;
    cout << "AverageRating:" << averageRating << endl;
    if (book.auther.getName() != "")
    {
        cout << "Author:" << author << endl;
    }
    cout << "*********************************" << endl;
}






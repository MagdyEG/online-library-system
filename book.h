#ifndef BOOK_H
#define BOOK_H
#include "user.h"
#include <iostream>
#include <string>


class book
{
    private:
        string title;
        string isbn;
        int id;
        string category;
        double averageRating;
        int numRates;
        double sumRates;
        user author;
    public:
        static int count;
        Book();
        Book(string , string , string );
        void setTitle(string );
        string getTitle() const ;
        void setIsbn(string );
        string getIsbn() const;
        //void setId(int);
        int getId() const;
        void setCategory(string );
        string getCategory()const;
        void setAuthor(const user & );
        user getAuthor() const;
        void rateBook(double );
        double getAverageRating () const;
        bool operator==(const book&);
        void Display();
};

#endif

#ifndef USERLIST_H
#define USERLIST_H
#include "book.h"
#include <string>



class userlist
{
   private:
         user* users;
         int capacity;
         int usersCount;
    public:
         userlist();
         userlist(int );
         void addUser(user &);
         user* searchUser(int );
         void deleteUser(int );
         void Display();

};

#endif

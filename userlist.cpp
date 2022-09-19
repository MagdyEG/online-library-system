#include "userlist.h"
#include "book.h"
#include "user.h"
#include <string>


userlist::userlist()
{
    capacity = 0;
    usersCount = 0;
}

userlist::userlist(int ca)
{
    capacity = ca;
    users = new users[capacity];
    usersCount = 0;
}

void userlist::addUser(const user & user1)
{
    if (usersCount < capacity)
    {
        users[usersCount] = user;
        usersCount++;
    }
    else
    {
        cout << "full size" << endl;
    }
}

User* userlist::searchUser(int id)
{
    for(int i = 0; i < usersCount; i++)
    {
        if(users[i].getId() == id)
        {
            return &users[i]
        }
    }
    return nullptr;
}

void userlist::deleteUser(int id)
{
    for(int i = 0; i < usersCount; i++)
    {
        if(users[i].getId() == id)
        {
            while(i < usersCount-1)
            {
                users[i] = users[i+1];
                i++;
            }
        }
        usersCount--;
        capacity--;
        break;
    }
}

void userlist::Display()
{
    for(int i = 0; i < usersCount; i++)
    {
        cout << users[i];
    }

}






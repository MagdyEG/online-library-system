#include "user.h"
#include <iostream>
#include <string>

int user::count = 100000;

user::user()
{
    name = "";
    age = 0;
    password = "";
    email = "";
    count++;
    id = count;
}

user::user(string n, int a, string p, string e)
{
    name = n;
    age = a;
    password = p;
    email = e;
    count++;
    id = count;
}

void user::setName(string n)
{
    name = n;
}

string user::getName() const
{
    return name;
}

void user::setPassword(string p)
{
    password = p;
}

string user::getPassword() const
{
    return password;
}

void user::setEmail(string e)
{
    email = e;
}

string user::getEmail() const
{
    return email;
}

void user::setAge(int a)
{
    age = a;
}

int user::getAge() const
{
    return age;
}

/*void user::setId(int i)
{
    id = i;
}*/

int user::getAge() const
{
    return id;
}

bool user::operator== (const user& user1)
{
    if (name != uers.name || email != uaer.email || age != user.age || id != user.id || password != user.password)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void user::Display()
{
    cout << "*********************************" << endl;
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
    cout << "ID:" << id << endl;
    cout << "Email:" << email << endl;
    cout << "*********************************" << endl;
}


#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

class user
{
    private:
           string name;
           int age;
           int id;
           string password;
           string email;
    public:
          static int count;
          User();
          User(string , int , string , string);
          void setName(string);
          string getName() const;
          void setPassword(string);
          string getPassword()const;
          void setEmail(string);
          string getEmail()const ;
          void setAge(int);
          int getAge()const;
         // void setId(int);
          int getId()const;
          bool operator== (const user& user1);
          void Display();
};

#endif

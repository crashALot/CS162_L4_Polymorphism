/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The person.hpp file contains the associated data and
*               prototype information required for person.cpp
*********************************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person
{
private:
    
    std::string name;
    int age;

public:

    Person();
    Person(std::string, int);
    virtual void do_work();
    virtual double getScore();
    virtual void setScore(double);
    void setName(std::string);
    void setAge(int);
    virtual void print();
    std::string getName();
    int getAge();
    ~Person();
    
};

#endif
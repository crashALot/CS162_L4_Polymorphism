/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The instructor.hpp file contains the associated data and
*               prototype information required for instructor.cpp
*********************************************************************/
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "person.hpp"
#include <string>

class Instructor : public Person
{
private:

    double rating;

public:

    Instructor();
    Instructor(std::string, int, double);
    virtual void do_work();
    void setScore(double);
    virtual void print();
    double getScore();
    ~Instructor();
    
};

#endif
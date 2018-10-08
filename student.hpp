/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The student.hpp file contains the associated data and
*               prototype information required for student.cpp
*********************************************************************/
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "person.hpp"
#include <string>

class Student : public Person
{
private:

    double gpa;

public:

    Student();
    Student(std::string, int, double);
    virtual void do_work();
    void setScore(double);
    virtual void print();
    double getScore();
    ~Student();
    
};

#endif
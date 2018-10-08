/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The student.cpp file contains the necessary methods and
*               interfaces used to create Student class objects. The
*               Student class is a derived class with Person base class
*********************************************************************/
#include "student.hpp"
#include <iostream>

/********************************************************************* 
** Description: Student::Student()
*               Default Student class constructor
*********************************************************************/
Student::Student()
{
    gpa=0.0;
}

/********************************************************************* 
** Description: Student::Student(std::string nameIn, int ageIn, double gpaIn)
*               Student class constructor. User supplied arguments
*               passed as arguments
*********************************************************************/
Student::Student(std::string nameIn, int ageIn, double gpaIn)
{
    setAge(ageIn);
    setName(nameIn);
    gpa=gpaIn;    
}

/********************************************************************* 
** Description: void Student::do_work()
*               Outputs the user selected student to consol and 
*               calculates random number of hours worked towards
*               homework.
*********************************************************************/
void Student::do_work()
{
    std::cout << this->getName() << " did ";
    Person::do_work();
    std::cout << " hours of homework." << std::endl << std::endl;
}

/********************************************************************* 
** Description: void Student::print()
*               Outputs the Student class gpa data member to consol
*********************************************************************/
void Student::print()
{
    std::cout << gpa << std::endl;
}

/********************************************************************* 
** Description: Set and Get functions
*               Interfaces for editing and retrieving specific Student
*               class object information
*********************************************************************/
void Student::setScore(double gpaIn)
{
    gpa=gpaIn;
}

double Student::getScore()
{
    std::cout << "  GPA:      " << gpa ;
    return gpa;
}

/********************************************************************* 
** Description: Student::~Student()
*               Student class destructor
*********************************************************************/
Student::~Student()
{
    
}
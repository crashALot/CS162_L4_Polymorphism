/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The instructor.cpp file contains the necessary methods and
*               interfaces used to create Instructor class objects. The
*               Instructor class is a derived class with Person base class
*********************************************************************/
#include "instructor.hpp"
#include <iostream>

/********************************************************************* 
** Description: Instructor::Instructor()
*               Default Instructor class constructor
*********************************************************************/
Instructor::Instructor()
{
    rating=0.0;
}

/********************************************************************* 
** Description: Instructor::Instructor(std::string nameIn, int ageIn, double ratingIn)
*               Instructor class constructor. User supplied arguments
*               passed as arguments
*********************************************************************/
Instructor::Instructor(std::string nameIn, int ageIn, double ratingIn)
{
    setAge(ageIn);
    setName(nameIn);
    rating=ratingIn;
}

/********************************************************************* 
** Description: void Instructor::do_work()
*               Outputs the user selected instructor to consol and 
*               calculates random number of hours worked towards
*               grading.
*********************************************************************/
void Instructor::do_work()
{
    std::cout << this->getName() << " graded papers for ";
    Person::do_work();
    std::cout << " hours." << std::endl << std::endl;
}

/********************************************************************* 
** Description: void Instructor::print()
*               Outputs the Instructor class rating data member to consol
*********************************************************************/
void Instructor::print()
{
    std::cout << rating << std::endl;
}

/********************************************************************* 
** Description: Get and Set functions
*               Interfaces for editing and retrieving specific Instructor
*               class object information
*********************************************************************/
void Instructor::setScore(double ratingIn)
{
   rating=ratingIn;
}

double Instructor::getScore()
{
    std::cout << "  Rating:   " << rating ;
    return rating;
}

/********************************************************************* 
** Description: Instructor::~Instructor()
*               Instructor class destructor
*********************************************************************/
Instructor::~Instructor()
{
    
}
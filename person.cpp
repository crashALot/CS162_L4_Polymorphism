/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The person.cpp file contains the associated interfaces
*               and methods needed to create Person, Student, and 
*               Instructor class objects. Person is a base class with 
*               polymomrphic functionality.
*********************************************************************/
#include "person.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

/********************************************************************* 
** Description: Person::Person()
*               Default Person class constructor.
*********************************************************************/
Person::Person()
{
    name="NoName";
    age=-1;
}

/********************************************************************* 
** Description: Person::Person(std::string nameIn, int ageIn)
*               Person class constructor. Arguments are user specific
*               input
*********************************************************************/
Person::Person(std::string nameIn, int ageIn)
{
    name=nameIn;
    age=ageIn;
}

/********************************************************************* 
** Description: void Person::print()
*               Virtual function. Acts as an pathway to Instructor and
*               Student class objects. 
*********************************************************************/
void Person::print()
{
    std::cout << "Default message" << std::endl;
}

/********************************************************************* 
** Description: Get and Set functions
*               Interfaces for editing and retrieving specific person
*               class object information
*********************************************************************/
void Person::setScore(double scoreIn)
{
    
}

void Person::setName(std::string nameIn)
{
    name=nameIn;
}

double Person::getScore()
{
    return 0.0;
}

void Person::setAge(int ageIn)
{
    age=ageIn;
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

/********************************************************************* 
** Description: void Person::do_work()
*               Virtual function. When called from derived functions
*               will produce and output a random number between 0 and
*               8. Otherwise acts as an intersection to Instructor or 
*               Student class functions
*********************************************************************/
void Person::do_work()
{
    double hours; 
    hours=(((static_cast<double>(rand()))/(static_cast<double>(RAND_MAX)))*static_cast<double>(8));
    std::cout << std::setw(3) << std::setprecision(3) << hours;
}

/********************************************************************* 
** Description: Person::~Person()
*               Person class destructor
*********************************************************************/
Person::~Person()
{
    
}
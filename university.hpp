/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The university.hpp file contains the associated data
*               and prototypes needed to support the university.cpp
*               file.
*********************************************************************/
#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include "person.hpp"
#include "student.hpp"
#include "instructor.hpp"
#include "building.hpp"
#include <string>
#include <vector>

class University
{
private:

    std::string name;
    Building* buildings[3];
    Person* people[4];

public:

    University();
    void printPeople();
    void printBuildings();
    void setName(std::string);
    std::string getName();
    Building* getBuildings(int);
    Person* getPeople(int);
    void setBuildings(int, std::string, std::string, int);
    void setStudent(int, std::string, int, double);
    void setInstructor(int, std::string, int, double);
    
    ~University();
    
};

#endif
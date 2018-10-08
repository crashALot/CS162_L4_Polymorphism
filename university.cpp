/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The university.cpp file contains the methods and 
*               functions required to coordinate between people, 
*               buildings, and menu interfaces. Several output functions
*               can be found here in addition to interfaces to create
*               or edit objects
*********************************************************************/
#include "university.hpp"
#include <string>
#include <iostream>
#include <iomanip>

/********************************************************************* 
** Description: University::University()
*               University default constructor
*********************************************************************/
University::University()
{
    name="Oregon State University";
    *people=NULL;
    *buildings=NULL;
}

/********************************************************************* 
** Description: void University::printPeople()
*               When called prints all saves persons to consol
*********************************************************************/
void University::printPeople()
{
    people[0]=new Student("Bob", 25, 3.6);
    people[1]=new Instructor("Amanda", 34, 4.2);
    people[2]=new Student("Frank", 21, 2.4);
    people[3]=new Instructor("Michaelangelo", 76, 4.9);    
        
    for (int i=0; i<4; i++)
    {
        std::cout << "  Name:     " << people[i]->getName() << std::endl;
        std::cout << "  Age:      " << people[i]->getAge() << std::endl;
        people[i]->getScore();
        std::cout << std::endl << std::endl;
    }
        std::cout << std::endl;
  
}

/********************************************************************* 
** Description: void University::printBuildings()
*               When called, prints all saved buildings to consol
*********************************************************************/
void University::printBuildings()
{
    buildings[0]=new Building("A good building", "8675309 Crazy Lane", 1000);
    buildings[1]=new Building("A bad building", "321 Electric Avenue", 9999);
    buildings[2]=new Building("Another building!", "102 Pennsylvania Avenue", 6666);
    
    for (int i=0; i<3; i++)
    {
        std::cout << "  Name:     " << buildings[i]->getName() << std::endl;
        std::cout << "  Address:  " << buildings[i]->getAddress() << std::endl;
        std::cout << "  Size:     "<< buildings[i]->getSize() << std::endl;
        std::cout << std::endl;
    }
    
}

/********************************************************************* 
** Description: Set and Get functions
*               Associated functions that allow for access to 
*               University, Building, and People class objects.
*********************************************************************/
void University::setName(std::string newName)
{
    name=newName;
}    

Building* University::getBuildings(int buildingNumber)
{
    return buildings[buildingNumber];
}

Person* University::getPeople(int personNumber)
{
    return people[personNumber];
}

// If the user wishes to edit a building they'll need to index the entry appropriately
void University::setBuildings(int index, std::string nameIn, std::string addressIn, int sizeIn)
{
    buildings[index]->setAddress(addressIn);
    buildings[index]->setName(addressIn);
    buildings[index]->setSize(sizeIn);
}

// If the user wishes to edit a student they'll need to index the entry appropriately
void University::setStudent(int index, std::string nameIn, int ageIn, double gpaIn)
{
    people[index]->setName(nameIn);
    people[index]->setAge(ageIn);
    people[index]->setScore(gpaIn);
}

// If the user wishes to edit an instructor they'll need to index the entry appropriately
void University::setInstructor(int index, std::string nameIn, int ageIn, double ratingIn)
{
    people[index]->setName(nameIn);
    people[index]->setAge(ageIn);
    people[index]->setScore(ratingIn);
}

std::string University::getName()
{
    return name;
}

/********************************************************************* 
** Description: University::~University()
*               University class destructor.
*********************************************************************/
University::~University()
{
}
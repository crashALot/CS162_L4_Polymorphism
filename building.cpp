/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The building.cpp file contains methods and interfaces
*               needed to create, edit, and interact with building 
*               class objects.
*********************************************************************/
#include "building.hpp"
#include <string>

/********************************************************************* 
** Description: Building::Building()
*               Building class default constructor
*********************************************************************/
Building::Building()
{
    name="Blank";
    address="123 Dry Road";
    size=-1;
}

/********************************************************************* 
** Description: Building::Building(std::string nameIn, std::string addressIn, int sizeIn)
*               Building class default constructor with user supplied
*               arguments
*********************************************************************/
Building::Building(std::string nameIn, std::string addressIn, int sizeIn)
{
    name= nameIn;
    address= addressIn;
    size= sizeIn;
}

/********************************************************************* 
** Description: Get and Set functions
*               Used to edit Building class data
*********************************************************************/
std::string Building::getName()
{
    return name;
}

std::string Building::getAddress()
{
    return address;
}

int Building::getSize()
{
   return size; 
}

void Building::setAddress(std::string addressIn)
{
    address=addressIn;
}

void Building::setName(std::string nameIn)
{
    name=nameIn;
}

void Building::setSize(int sizeIn)
{
    size=sizeIn;
}

/********************************************************************* 
** Description: Building::~Building()
*               Building class destructor
*********************************************************************/
Building::~Building()
{

}
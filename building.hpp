/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The building.hpp file contains the associated data
*               and interfaces required for use with building.cpp
*********************************************************************/
#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>

class Building
{
private:
    
    std::string name, address;
    int size;

public:

    Building();
    Building(std::string, std::string, int);
    std::string getName();
    std::string getAddress();
    int getSize();
    void setName(std::string);
    void setAddress(std::string);
    void setSize(int);
    ~Building();
    
};

#endif
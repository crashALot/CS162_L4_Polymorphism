/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The osuMenu.hpp file contains the associated data and
*               prototype information required for osuMenu.cpp
*********************************************************************/
#ifndef OSUMENU_HPP
#define OSUMENU_HPP
#include "osuValidation.hpp"
#include "university.hpp"

void osuMainMenu(University*);
void printBuildingMenu(University*);
void printPeopleMenu(University*);
void workMenu(University*);
void exitMenu();

#endif
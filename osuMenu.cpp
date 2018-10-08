/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The osuMenu.cpp file contains the functions required
*               to create and output user interface. Each menu pertains
*               to a particular choice the user makes although all
*               menus cycle back to the mainMenu
*********************************************************************/
#include "osuMenu.hpp"
#include <iostream>
#include <iomanip>

/********************************************************************* 
** Description: void osuMainMenu()
*               Main interface with the user. Displays the 4 required
*               selections a user can make.
*********************************************************************/
void osuMainMenu(University* universityPtr)
{
    int userSelection; 
    std::cout << "*********** Welcome to the OSU Information System ***********" << std::endl << std::endl;
    
    std::cout << "      Please select from one of the options below:" << std::endl;
    std::cout << "          1. Print all building information" << std::endl;
    std::cout << "           2. Print all personnel information" << std::endl;
    std::cout << "            3. Choose someone to do work" << std::endl;
    std::cout << "             4. Exit the program" << std::endl << std::endl;
    userSelection=mainMenuValidate();
    
    switch (userSelection)
    {
        case 1:
        printBuildingMenu(universityPtr);
        break;
        
        case 2:
        printPeopleMenu(universityPtr);
        break;
        
        case 3:
        workMenu(universityPtr);
        break;
        
        case 4:
        exitMenu();
        break;
    }
}

/********************************************************************* 
** Description: void printBuildingMenu()
*               Tells the user their in the print building
*               meu. Calls the appropriate print building
*               function.
*********************************************************************/
void printBuildingMenu(University* universityPtr)
{  
    std::cout << "*********** You've accessed the print Building menu ***********" << std::endl << std::endl;
    std::cout << "  Printed below is the information for all Buildings saved:" << std::endl << std::endl;
    universityPtr->printBuildings();
    osuMainMenu(universityPtr);
}

/********************************************************************* 
** Description: void printPeopleMenu()
*               Tells user their currently residing in the print people
*               menu. Calls the appropriate print people function.
*********************************************************************/
void printPeopleMenu(University* universityPtr)
{
 
    
    std::cout << "************ You've accessed the print People menu ************" << std::endl << std::endl;
    std::cout << "  Printed below is the information for all People saved:" << std::endl << std::endl;
    universityPtr->printPeople();
    osuMainMenu(universityPtr);
}

/********************************************************************* 
** Description: void workMenu()
*               Hard coded selection of people a user can select to 
*               do work.S
*********************************************************************/
void workMenu(University* universityPtr)
{
    int userSelection;
    
    std::cout << "***** You've accessed the make some poor soul do work menu *****" << std::endl << std::endl;
    std::cout << "  Please select from the list below who'd you like to do work:" << std::endl << std::endl;
    std::cout << "          1. " << universityPtr->getPeople(0)->getName() << std::endl;
    std::cout << "           2. " << universityPtr->getPeople(1)->getName() << std::endl;
    std::cout << "            3. " << universityPtr->getPeople(2)->getName() << std::endl;
    std::cout << "             4. " << universityPtr->getPeople(3)->getName() << std::endl << std::endl;
    userSelection=mainMenuValidate()-1;
    universityPtr->getPeople(userSelection)->do_work();
    osuMainMenu(universityPtr);
}

/********************************************************************* 
** Description: void exitMenu()
*               Exit message left to the user upon quitting the 
*               program
*********************************************************************/
void exitMenu()
{
    std::cout << std::endl << "************ Thank you for playing! See you again soon! ************" << std::endl;
}
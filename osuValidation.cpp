/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: The osuValidation.cpp file contains the necessary 
*               input validation for the osuMenu files.
*********************************************************************/
#include "osuValidation.hpp"
#include <iostream>
#include <string>

/********************************************************************* 
** Description: int mainMenuValidate()
*               Acts as a barrier to incorrect user inputs. Prompts
*               the user for new input if entered incorrectly
*********************************************************************/
int mainMenuValidate()
{
    int go=1, length=0;
    std::string userIn;
    do
    {
        // http://www.cplusplus.com/forum/beginner/2624/
        // How to identify the Enter key when pressed alone 
        std::getline(std::cin, userIn);
        length=userIn.length();
        if (userIn[0]==' ' || length>1 || (userIn[0]-'0')>4 || (userIn[0]-'0')<1)
        {
            std::cout << "Please re-enter your choice as an integer less than 5 but greater than 0:" << std::endl;
        }
        else
        {
            // Work cited: https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
            go=0; // Signal variable exits while loop
            return((int)userIn[0]-'0'); // Converts char to int via ASCII code math
        }
    }
    while (go);
    return 0;
}
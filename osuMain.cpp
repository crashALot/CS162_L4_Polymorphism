/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        07/24/18
** Description: This program is asimple information system for Oregon 
*               State University. 
*********************************************************************/
#include <iostream>
#include "osuMenu.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    University* universityPtr = new University();  
    srand(time(NULL));
    osuMainMenu(universityPtr);
    delete universityPtr;
    universityPtr=NULL;
	return 0;
}

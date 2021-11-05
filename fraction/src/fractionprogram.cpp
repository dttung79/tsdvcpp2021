#include "fractionprogram.h"

void FractionProgram::run() 
{
    bool testing = true;
    while (testing)
    {
        printMenu();
        int choice = getChoice();
        doTask(choice);
        //if (choice == EXIT) testing = false;
        testing = choice != EXIT;
    }
    
}

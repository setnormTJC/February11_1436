// BeginningTopic5-loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

int main()
{
    std::cout << "Enter ...something (q to quit):\n";


    std::string response;

    std::getline(std::cin, response); 

    int loopCount = 0; 

    while (response != "q" && loopCount < 5)
    {
        //this is called the "loop body" (or the body of the loop)
        std::cout << "You entered: " << response << "\n";
        std::cout << "Enter another thing: \n";
        std::getline(std::cin, response);

        loopCount = loopCount + 1; 
    }

    if (loopCount >= 5)
    {
        std::cout << "You exceeded the maximum number of loop iterations allowed\n";
    }

    else
    {
        std::cout << "You MUST have entered 'q'";
        std::cout << "-that's the only way this ELSE statement statement could get executed\n";
    }

}


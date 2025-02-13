// BeginningTopic5-loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 

#include<Windows.h>


void demoLoopUntilPressQuit()
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

void demoFinalCountdown()
{
    //loop until 0 ... ("final countdown.wav")
    int countdownCounter = 5; 

    while (countdownCounter > 0)
    {
        std::cout << countdownCounter << " ...";
        countdownCounter = countdownCounter - 1; //this is the "long" way to do this ...
        Sleep(500);
    }
    
    system("finalCountdown.wav");
}

void demoPowersOf2()
{
    int powerOf2 = 2; 

    while (powerOf2 <= 1024)
    {
        std::cout << powerOf2 << "\n";
        powerOf2 = powerOf2 * 2; 
    }
}

void demoLoopUntilBreak()
{
    system("stopItAll.wav"); //Lights, Arkells "Human Being" 
}

void playHiLoGame()
{
    int correctNumber = 12; 

    int usersGuess; 

    std::cout << "Guess the number ... (number is between 0 and 100)\n";
    std::cin >> usersGuess; 

    while (usersGuess != correctNumber)
    {
        if (usersGuess > correctNumber)
        {
            std::cout << "Too high - guess again\n";
        }

        else if (usersGuess < correctNumber)
        {
            std::cout << "Too LOW - guess again\n";
        }

        else
        {
            std::cout << "CORRECT!\n";
        }

        std::cin >> usersGuess;
    }

    //else
    //{
    //    std::cout << "That WAS correct - huzzah!\n";
    //}
}



int main()
{
    playHiLoGame(); 
    //demoPowersOf2(); 
    //demoLoopUntilPressQuit(); 
    //demoFinalCountdown(); 

}


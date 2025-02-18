// BeginningTopic5-loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random>
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

void demoPowersOf2() //a function like f(x) = x^2 
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
    std::random_device randomSeed; //like apple seeds? 
    std::mt19937 randomNumberGenerator(randomSeed()); //what is this madness? 

    int correctNumber = randomNumberGenerator() % 100; //make this randomly-generated (for funsies) 

    std::cout << "Are you a cheater?\n";
    std::string cheater; 
    std::getline(std::cin, cheater);
    if (cheater == "yes")
    {
        std::cout << "The correct number is " << correctNumber << "\n";
    }

    int usersGuess; 

    std::cout << "Guess the number ... (number is between 0 and 100)\n";
    std::cin >> usersGuess; 

    int numberOfGuesses = 0; 

    while ( (usersGuess != correctNumber) 
        &&
        (numberOfGuesses < 8))
    {
        numberOfGuesses = numberOfGuesses + 1; 

        if (usersGuess > correctNumber)
        {
            std::cout << "Too high - guess again\n";
        }

        else if (usersGuess < correctNumber)
        {
            std::cout << "Too LOW - guess again\n";
        }

        std::cin >> usersGuess;
    } //end while loop (the close brace) 

    if (usersGuess == correctNumber)
    {
        std::cout << "Winnah, winnah, chicken dinnah!\n";
    }

    else
    {
        std::cout << "Too many guesses - correct number was: " << correctNumber << "\n";
    }



    //else
    //{
    //    std::cout << "That WAS correct - huzzah!\n";
    //}
}

void demoRandomNumberGeneration()
{
    std::random_device randomSeed; //like apple seeds? 
    std::mt19937 randomNumberGenerator(randomSeed()); //what is this madness? 
    //19,937 is a PRIME number (not Amazon Prime) -> and primes are "special" 
    //MT - Mersenne Twister ->Mersenne is a mathematician

    std::cout.imbue(std::locale(""));
    std::cout << "Is this a random number? " << randomNumberGenerator() % 100 << "\n";
    std::cout << "Is this a random number? " << randomNumberGenerator() % 100 << "\n";
    std::cout << "Is this a random number? " << randomNumberGenerator() % 100 << "\n";
    std::cout << "Is this a random number? " << randomNumberGenerator() % 100 << "\n";
    std::cout << "Is this a random number? " << randomNumberGenerator() % 100 << "\n";
}

/*this prints all of the numbers betwixt 0 and 9'999 (inclusive)*/ //[1, 2] _> (1, 2]
void demoForLoop()
{
    for (int i = 0; i < 10'000; ++i)
    {
        std::cout << "i is (am): " << i << "\n";
    }
}

void demoPrintingASCIICharacters()
{
    for (char currentLetter = '!'; currentLetter < 'z'; ++currentLetter)
    {
        //this is the BODY of the loop 
        std::cout << currentLetter; 
    }

    std::cout << "\n";
}

int main()
{
    demoPrintingASCIICharacters(); 

    //demoForLoop(); 

    //demoRandomNumberGeneration(); 

    //playHiLoGame(); 
    //demoPowersOf2(); 
    //demoLoopUntilPressQuit(); 
    //demoFinalCountdown(); 
    

}


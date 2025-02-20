// BeginningTopic5-loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <locale>
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



void demoPrintingUnicodeCharacters()
{
    system("chcp 65001");
    std::locale::global(std::locale("")); // Set locale for proper Unicode handling

    for (char32_t currentChar = 0x0000; currentChar <= 0x10FFFF; ++currentChar)
    {
        //if (currentChar < 0xD800 || currentChar > 0xDFFF) // Skip surrogate pairs
        //{
            std::wcout << static_cast<wchar_t>(currentChar) << ' ';
        //}
    }

    std::wcout << std::endl;
}

void demoNestedLoop_withMultiplicationTable()
{

    //making a multiplication table:
    constexpr int NUMBER_OF_ROWS = 13; 
    constexpr int NUMBER_OF_COLS = 14;

    for (int rowCounter = 1; rowCounter <= NUMBER_OF_ROWS; ++rowCounter)
    {
        for (int columnCounter = 1; columnCounter <= NUMBER_OF_COLS; ++columnCounter)
        {
            std::cout << std::left << std::setw(4) << rowCounter * columnCounter; 
        }
        std::cout << "\n"; 
    }

}

void demoNestedLoop_With3LetterBrutePasswordCrack()
{
    std::string correctPassword = ""; //the length of this is 0
    while (correctPassword.length() != 3)
    {
        std::cout << "enter a password with no more than 3 letters, and only lowercase a - z allowed: \n";
        std::getline(std::cin, correctPassword);
        
    }

    

    std::string possiblePassword = "111"; //empty string 

    int loopCounter = 0; 
    for (char firstLetter = 'a'; firstLetter <= 'z'; ++firstLetter)
    {
        for (char secondLetter = 'a'; secondLetter <= 'z'; ++secondLetter)
        {
            for (char thirdLetter = 'a'; thirdLetter <= 'z'; ++thirdLetter)
            {
                //std::cout << firstLetter << secondLetter << thirdLetter << "\n";
                possiblePassword[0] = firstLetter; 
                possiblePassword[1] = secondLetter; 
                possiblePassword[2] = thirdLetter; //this is ARRAY notation 
                                                    //(the square brackets are called the "index operator"
                if (possiblePassword == correctPassword)
                {
                    std::cout << "Found the correct password!\n";
                    std::cout << "In this many guesses: " << loopCounter << "\n";
                    system("pause"); 
                }

                loopCounter++; 
            } //end innermost loop 
        } //end middle loop
    } //end outer loop 

    std::cout << "The number of passwords we tried (using \"Brute force\" is: " << loopCounter << "\n";
}

int main()
{
    demoNestedLoop_With3LetterBrutePasswordCrack(); 
    //demoNestedLoop_withMultiplicationTable(); 

    //demoPrintingUnicodeCharacters(); 
    //demoPrintingASCIICharacters(); 

    //demoForLoop(); 

    //demoRandomNumberGeneration(); 

    //playHiLoGame(); 
    //demoPowersOf2(); 
    //demoLoopUntilPressQuit(); 
    //demoFinalCountdown(); 
    

}


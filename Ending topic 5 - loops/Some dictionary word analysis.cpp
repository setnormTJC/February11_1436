// Ending topic 5 - loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include <string>


void demoSimpleFileReadingUsingLoop()
{
	std::ifstream fin{ "input.txt" };

	if (!fin.is_open())
	{
		std::cout << "Not able to locate that file\n";
		return; 
	}

	int lineCount = 0;
	while (!fin.eof())
	{
		std::string currentLine;
		std::getline(fin, currentLine);
		lineCount++;

		std::cout << "line number : " << lineCount << " contains: " << currentLine << "\n";
	}


	//the DUMB way to read multiple lines from an input file: 
	//std::getline(fin, currentLine);
	//std::cout << "SECOND line: " << currentLine << "\n";

	//std::getline(fin, currentLine);
	//std::cout << "THIRD line: " << currentLine << "\n";


	fin.close(); //"best practice" 
}


void demoReadingA25KDictionaryFile()
{
	std::ifstream fin{ R"(C:\Users\Work\Downloads\popularWords.txt)" }; //this is an ABSOLUTE filepath

	if (!fin.is_open())
	{
		std::cout << "FNFE\n";
		return;// -1234;
	}

	while (!fin.eof())
	{
		std::string currentWord;
		std::getline(fin, currentWord);

		/*print all words in that dictionary that begin with z and have more than 7 letters*/
		if (currentWord[0] == 'z' && currentWord.length() > 7)
		{
			std::cout << currentWord << "\n";
		}
	}
}
int main()
{

}

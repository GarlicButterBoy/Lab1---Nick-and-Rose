// Lab1 - Nick and Rose.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctime>
#include <iostream>

#include "WorkTicket.h"

using namespace std;

/// <summary>
///Turns a Char array into a string
/// </summary>
/// <param name="a"></param>
/// <param name="size"></param>
/// <returns>A string</returns>
string ArrayToString(char* a , int size )
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		temp += a[i];
	}
	return temp;
}

/// <summary>
/// Generates the ticket number (arbitrarily between 100 and 199) for the new ticket
/// </summary>
/// <returns>An Int</returns>
int GenerateTicketNumber()
{
	int randNum;
	do
	{
		randNum = rand();
	} while (100 < randNum || 199 > randNum); //do loop generates a number until it lands between 100 and 199 (pedantic)

	return  randNum;
}

/// <summary>
/// Generate the random string of characters for the Client Identification Number
/// </summary>
/// <returns>A String</returns>
string GenerateClientID()
{
	srand(time(0)); //using a seed allows for "not-so-true-but-basically" random generation

	//array of valid characters to choose from
	char valid[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVabcdefghijklmnopqrtuvwxyz";
	char rand_array[6];
	string output;

	for (int i = 0; i < 6; i++)
	{
		rand_array[i] = valid[rand() % 63];				//rand_array (our 6 char alphanumeric string)
	}													//valid[rand() % 63] generates a random character from the list
	output = ArrayToString(rand_array, 6);			//63 is the total length of the valid[] array.
	return output;										//from: https://www.codespeedy.com/generate-random-alphanumeric-string-in-cpp/
}

//;WorkTicket ReadWorkTicketInfo()
//{

//}

int main()
{

	cout << "STARTING\n";
	int numTest;
	string test = GenerateClientID();
	numTest = GenerateTicketNumber();
	cout << endl << test << endl << numTest;

}

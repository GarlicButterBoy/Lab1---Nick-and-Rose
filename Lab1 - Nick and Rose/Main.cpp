// Lab1 - Nick and Rose.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <ctime>
#include <iostream>
#include <sstream>
#include "MyConsoleInput.h"
#include "WorkTicket.h"

using namespace std;

const int ARRAY_SIZE = 3;

/// <summary>
///Turns a Char array into a string
/// </summary>
/// <param name="a"></param>
/// <param name="size"></param>
/// <returns>A string</returns>
string ArrayToString(char* a, int size)
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		temp += a[i];
	}
	return temp;
}

///<summary>
///Generates the ticket number (arbitrarily between 100 and 199) for the new ticket
///</summary>
///<returns>An Int</returns>
int GenerateTicketNumber()
{
	char valid[] = "0123456789";
	char num_array[10];
	string output;

	for (int i = 0; i < 10; i++)
	{
		num_array[i] = valid[rand() % 10];
	}
	output = ArrayToString(num_array, 10);

	int ticketNumber = stoi(output);

	return ticketNumber;



	//int randNum;
	//do
	//{
	//	randNum = rand();
	//} while (100 < randNum || 199 > randNum); //do loop generates a number until it lands between 100 and 199 (pedantic)

	//return  randNum;
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

/// <summary>
/// converts user date input to a string
/// </summary>
/// <param name="day"></param>
/// <param name="month"></param>
/// <param name="year"></param>
/// <returns></returns>
string DateToString(int day, int month, int year)
{
	stringstream dateStr;

	dateStr << day << "/" << month << "/" << year;

	return dateStr.str();
}

/// <summary>
/// Asks for user inputs, then generates a WorkTicket
/// </summary>
/// <returns></returns>
WorkTicket ReadWorkTicketInfo()
{
	int day, month, year;
	int ticketNumber;
	string ticketDate, ticketID, ticketDescription;
	//bool isValid = false;

	//Asks the user for the day of the month
	cout << "Please enter the day: ";
	day = ConsoleInput::ReadInteger(1, 31);

	//Asks the user for the month of the year
	cout << endl << "Month: ";
	month = ConsoleInput::ReadInteger(1, 12);

	//Asks the user for the year
	cout << endl << "Year: ";
	year = ConsoleInput::ReadInteger(2000, 2099);
	DateToString(day, month, year);

	//Gets the ticket description
	cout << "What is your reason for creating the ticket?\n\n";
	getline(cin, ticketDescription);

	ticketNumber = GenerateTicketNumber();
	ticketID = GenerateClientID();



	return WorkTicket(ticketNumber, ticketDate, ticketID, ticketDescription);
}

/// <summary>
/// This builds the array for the WorkTickets
/// </summary>
/// <param name="tickets"></param>
void BuildTicketArray(WorkTicket tickets[])
{
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		cout << "===============================================" << endl << endl;
		tickets[count] = ReadWorkTicketInfo();
	}
}

/// <summary>
/// Outputs the WorkTicket to the Screen
/// </summary>
/// <param name="tickets"></param>
void DisplayTicketArray(WorkTicket tickets[])
{
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		cout << tickets[count].ToString() << endl;
	}
}


/// <summary>
/// Main Function = This is Where the Program Is!
/// </summary>
/// <returns></returns>
int main()
{
	WorkTicket tickets[ARRAY_SIZE];

	BuildTicketArray(tickets);
	DisplayTicketArray(tickets);
}

/*
 * @FileName: WorkTicket.cpp
 * @Author  : Nick Sturch-Flint and Rose Nguyen
 * @Date    : September 20, 2020
 *
 */

#include "WorkTicket.h"
#include <iostream>

#include "MyConsoleInput.h"


WorkTicket::WorkTicket(int ticketNumber, string ticketDate, string ticketID, string ticketDescription)
{
	myTicketNumber = ticketNumber;
	myDate = ticketDate;
	myID = ticketID;
	myDescription = ticketDescription;
}

WorkTicket::~WorkTicket()
=default;

/// <summary>
/// Retrieves WorkTicket TicketNumber
/// </summary>
/// <returns></returns>
int WorkTicket::GetTicketNumber()
{
	return myTicketNumber;
}

/// <summary>
/// Retrieves WorkTicket Date
/// </summary>
/// <returns></returns>
string WorkTicket::GetTicketDate()
{
	return myDate;
}

/// <summary>
/// Retrieves WorkTicker Identification Number
/// </summary>
/// <returns></returns>
string WorkTicket::GetID()
{
	return myID;
}

/// <summary>
/// Retrieves WorkTicket Description
/// </summary>
/// <returns></returns>
string WorkTicket::GetDescription()
{
	return myDescription;
}


void WorkTicket::SetTicketNumber(int ticketNumber)
{

}

void WorkTicket::SetTicketDate(int day, int month, int year)
{
	int myDay, myMonth, myYear;
	int dayInput, monthInput, yearInput;

	//Asks the user for the day of the month, then assigns it to myDay
	cout << "Day: ";
	dayInput = ConsoleInput::ReadInteger(1, 31);
	myDay = dayInput;

	//Asks the user for the month of the year, then assigns it to myMonth
	cout << endl << "Month: ";
	monthInput = ConsoleInput::ReadInteger(1, 12);
	myMonth = monthInput;

	//Asks the user for the year, then assigns it to myYear
	cout << endl << "Year: ";
	yearInput = ConsoleInput::ReadInteger(2000, 2099);
	myYear = yearInput;
}

void WorkTicket::SetID(string clientID)
{

}

void WorkTicket::SetDescription(string description)
{
	getline(cin, description);
}

//string WorkTicket::ToString()
//{

//}

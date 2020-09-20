/*
 * @FileName: WorkTicket.cpp
 * @Author  : Nick Sturch-Flint and Rose Nguyen
 * @Date    : September 20, 2020
 *
 */

#include "WorkTicket.h"
#include <iostream>


WorkTicket::WorkTicket(int ticketNumber, string ticketDate, string ticketID, string ticketDescription)
{
	myTicketNumber = ticketNumber;
	my
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

}

void WorkTicket::SetID(string clientID)
{

}

void WorkTicket::SetDescription(string description)
{

}

string WorkTicket::ToString()
{

}

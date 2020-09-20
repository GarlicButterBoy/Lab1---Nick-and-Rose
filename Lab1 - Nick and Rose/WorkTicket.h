/*
 * @FileName: WorkTicket.h
 * @Author  : Nick Sturch-Flint and Rose Nguyen
 * @Date    : September 20, 2020
 *
 */

#pragma once
#ifndef __WORKTICKET__
#define __WORKTICKET__
#include <string>

using namespace std;

class WorkTicket
{
public:

	//Constructors
	WorkTicket(int ticketNumber = 0, string ticketDate = "", string ticketID = "", string ticketDescription = "");

	//Destructor
	~WorkTicket();

	//Accessors (Getters): Queries the Object
	int GetTicketNumber();
	string GetTicketDate();
	string GetID();
	string GetDescription();

	//Mutators (Setters): Changes the Object
	void SetTicketNumber(int ticketNumber);
	void SetTicketDate(int day, int month, int year);
	void SetID(string clientID);
	void SetDescription(string description);

	//Methods (Functions)
	string ToString();

private:
	int myTicketNumber;
	string myDate;
	string myID;
	string myDescription;
};

#endif
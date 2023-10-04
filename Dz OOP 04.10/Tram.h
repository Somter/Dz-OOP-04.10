#pragma once
#include "Transport.h"

class Tram: public Transport	
{
private:
	string name;
	int size;	
	int EmptyWight;	
	int Capacity;	
	int Voltage;	
	string TypeOfCurrent;
public:
	Tram() = default;		
	Tram(string n, int si, int e, int c, int v, string t, string brn, string tf, int s);	
	void Show() const;	
};


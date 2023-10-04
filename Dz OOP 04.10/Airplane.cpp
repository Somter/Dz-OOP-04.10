#include "Airplane.h"

Airplane::Airplane(string n, double wi, double he, double max, string brn, string tf, int s) : Transport(brn, tf, s)	
{
	name = n;
	Wingspan = wi;
	Height = he;
	MaxTakeoffWeight = max;	
}

void Airplane::Show() const
{
	cout << "Transport: " << name << endl;		
	cout << "Wingspan: " << Wingspan << endl;			
	cout << "Heoght: " << Wingspan << endl;		
	cout << "MaxTakeoffWeight: " << MaxTakeoffWeight << endl;		
	Transport::Show();		
}


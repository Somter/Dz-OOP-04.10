#include "Tram.h"

Tram::Tram(string n, int si, int e, int c, int v, string t, string brn, string tf, int s): Transport(brn, tf, s)		
{
	name = n;	
	size = si;	
	EmptyWight = e;	
	Capacity = c;		
	Voltage = v;		
	TypeOfCurrent = t;		
}

void Tram::Show() const
{
	cout << "name: " << name << endl;
	cout << "Size: " << size << endl;
	cout << "EmptyWight: " << EmptyWight << endl;
	cout << "Capacity: " << Capacity << endl;	
	cout << "Voltage: " << Voltage << endl;	
	cout << "TypeOfCurrent: " << TypeOfCurrent << endl;	
	Transport::Show();	
}

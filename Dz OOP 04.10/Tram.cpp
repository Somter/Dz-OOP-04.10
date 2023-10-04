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
string Tram::GetName() const {
	return name;
}

int Tram::GetSize() const {
	return size;
}

int Tram::GetEmptyWight() const {
	return EmptyWight;
}

int Tram::GetCapacity() const {
	return Capacity;
}

int Tram::GetVoltage() const {
	return Voltage;
}

string Tram::GetTypeOfCurrent() const {
	return TypeOfCurrent;
}

void Tram::SetName(string n) {
	name = n;
}

void Tram::SetSize(int si) {
	size = si;
}

void Tram::SetEmptyWight(int e) {
	EmptyWight = e;
}

void Tram::SetCapacity(int c) {
	Capacity = c;
}

void Tram::SetVoltage(int v) {
	Voltage = v;
}

void Tram::SetTypeOfCurrent(string t) {
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

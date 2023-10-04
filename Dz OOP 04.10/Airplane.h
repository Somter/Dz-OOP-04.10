#pragma once
#include "Transport.h"

class Airplane: public Transport	
{	
private:
	string name;	
	double Wingspan;	
	double Height;	
	double Weight;
	double MaxTakeoffWeight;	
public:
	Airplane() = default;	
	Airplane(string n, double wi, double he, double max, string brn, string tf, int s);
	void Show() const;		
};


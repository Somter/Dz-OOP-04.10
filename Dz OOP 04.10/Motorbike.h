#pragma once
#include "Transport.h"

class Motorbike: public Transport	
{
private:
	string name;	
	string color;		
	double weight;	
public:
	Motorbike() = default;	
	Motorbike(string n, string c, int weight, string brn, string tf, int s);	
	void Show() const;		
};


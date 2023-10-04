#pragma once
#include "Transport.h"
class Vessel : public Transport	
{
private:
	string name;	
	int SpecificCargoCapacity;		
	int NumberandHatches;	
	double NumberandSizeHatches;	
public:
	Vessel() = default;			
	Vessel(string n, int scc, int nh, double ns, string brn, string tf, int s);
	void Show() const;	
};


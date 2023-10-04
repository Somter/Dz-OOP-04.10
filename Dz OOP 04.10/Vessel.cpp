#include "Vessel.h"

Vessel::Vessel(string n, int scc, int nh, double ns, string brn, string tf, int s): Transport(brn, tf, s)
{
	name = n;	
	SpecificCargoCapacity = scc;	
	NumberandHatches = nh;	
	NumberandSizeHatches = ns;		
}
	
void Vessel::Show() const	
{
	cout << "Transport: " << name << endl;	
	cout << "Specific cargo capacity: " << SpecificCargoCapacity << " tone" << endl;
	cout << "Number and hatches: " << NumberandHatches << endl;	
	cout << "Number and Size Hatches: " << NumberandSizeHatches << " feet" << endl;
	Transport::Show();	
}
	
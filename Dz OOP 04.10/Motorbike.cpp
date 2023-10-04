#include "Motorbike.h"

Motorbike::Motorbike(string n, string c, int w, string brn, string tf, int s): Transport(brn, tf, s)	
{
	name =  n;
	color = c;	
	weight = w;	
}

void Motorbike::Show() const
{
	cout << "Name: " << name << endl;		
	cout << "color: " << color << endl;		
	cout << "Weight: " << weight << endl;			
	Transport::Show();	
}

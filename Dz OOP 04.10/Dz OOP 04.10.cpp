// Dz OOP 04.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Vessel.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorbike.h"

using namespace std;

int main() {
    Transport* ptr = nullptr;
    int choice;
    cout << "1 - Car\n";
    cout << "2 - Vessel\n";
    cout << "3 - airplane\n";
    cout << "4 - Tram\n";
    cout << "5 - Motorbike\n";
    cout << "Your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        ptr = new Car("Car", "Tesla", "Petrol", 225);
        break;
    case 2:
        ptr = new Vessel("Vessel", 10000, 30, 1.132, "RMS Queen Mary 2", "diesel", 43); 
        break;  
    case 3:
        ptr = new Airplane("Airplane", 27.8, 10.3, 42500, "SSJ-95", "kerosene fractions", 900); 
        break;
    case 4:
        ptr = new Tram("Tram", 21355, 25, 41, 210, "D.C", "Odeski trmavai", "electricity", 120);
        break;  
    case 5:
        ptr = new Motorbike("Motorbike", "black", 140, "Harley-Davidson Fat Bob 114", "Petrol", 160);   
        break;  
    }
    ptr->Show();        

    delete ptr; 

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

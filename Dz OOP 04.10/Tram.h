#pragma once
#include "Transport.h"

class Tram : public Transport {
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
    string GetName() const;
    int GetSize() const;
    int GetEmptyWight() const;
    int GetCapacity() const;
    int GetVoltage() const;
    string GetTypeOfCurrent() const;

    void SetName(string n);
    void SetSize(int si);
    void SetEmptyWight(int e);
    void SetCapacity(int c);
    void SetVoltage(int v);
    void SetTypeOfCurrent(string t);

    void Show() const;
};

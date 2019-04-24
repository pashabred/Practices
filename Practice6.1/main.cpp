#include <iostream>
#include "Property.h"

using namespace std;

int main() {
    double worth;
    Property *pr[7];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the cost for apartment " << i + 1 << ": ";
        cin >> worth;
        pr[i] = new Apartment(worth);
        cout << "Tax will be " << pr[i]->payment() << "$" << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the cost for car " << i + 1 << ": ";
        cin >> worth;
        pr[i + 3] = new Car(worth);
        cout << "Tax will be " << pr[i + 3]->payment() << "$" << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the cost for country house " << i + 1 << ": ";
        cin >> worth;
        pr[i + 5] = new CountryHouse(worth);
        cout << "Tax will be " << pr[i + 5]->payment() << "$" << endl;
    }
    for (int i = 0; i < 7; i++)
        delete pr[i];
    return 0;
}

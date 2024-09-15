#include <iostream>
using namespace std;
//----------------------------MULTILEVEL INHERITANCE--------------------------
//------Base class------
class planets
{
public:
    string saturn, jupiter;

    void gas()
    {
        cout << "The planet which are gas giants: " << endl;
        cout << "1. ";
        cin >> saturn;
        cout << "2. ";
        cin >> jupiter;
    }
};
//------Derrived Class------
class Life1 : public planets
{
public:
    string earth;
    void life()
    {

        cout << " Planet with life: " << endl;
        cin >> earth;
    }
};
//------Derrived class-------
class Heat : public Life1
{
public:
    string star;
    void sun()
    {
        cout << "Star at the centre of our solar system: " << endl;
        cin >> star;
    }

    void display()
    {
        cout << saturn << " & " << jupiter << " are gas giants." << endl;

        cout << earth << " is the planet with life." << endl;
        cout << star << " is the home of comets" << endl;
    }
};
int main()
{
    Heat d;//object declaration
    d.life();
    d.sun();
    d.gas();
    d.display();
}
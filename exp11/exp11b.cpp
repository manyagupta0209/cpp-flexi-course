#include <iostream>
#include <string>
using namespace std;
//----creating a  class named Car----
class Car
{
    //----by default access specifier is public----
public:
    //----attributes of class----
    string producer;
    string model;
    int year;
    //---function to take input of car details from user----
    void userInput()
    {
        cout << "Enter car producer: " << endl;
        getline(cin, producer);
        cout << "Enter car model: " << endl;
        getline(cin, model);
        cout << "Enter car manufacturing year: " << endl;
        cin >> year;
    }
    //----function to display the output----
    void displayInfo()
    {
        cout << "Car Details: " << producer << " " << model << " " << "(" << year << ")" << endl;
    }
};
//-----MAIN PROGRAM----
int main()
{
    //----object creation----
    Car myCar;
    //----object accessing the attributes of class----
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
#include <iostream>
using namespace std;
//----creating a  class named Car----
class Car
{
    //----by default access specifier is public----
public:
    //----attributes of class----
    string producer = "Tata Motors";
    string model = "SUV 500";
    int year = 2016;
};
//-----MAIN PROGRAM----
int main()
{
    //----Create an instance (object) of the Car class----
    Car myCar;
    //----onject can access the value using the (.) symbol and attribute name----
    cout << "Car details: " << myCar.producer << " " << myCar.model << "(" << myCar.year << ")" << endl;
    return 0;
}
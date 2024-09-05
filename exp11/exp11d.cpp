#include <iostream>
using namespace std;
//----creating a  class named Band----
class Rectangle
{
    //----access specifier is  private----
private:
    double length;
    double width;
    //----access specifier is public----
public:
    //----function to get the dimensions----
    void setDimensions(double len, double wid)
    {
        length = len;
        width = wid;
    }
    //----function to calculate the area----
    double calculateArea()
    {
        return (length * width);
    }
};
int main()
{
    //----object creation----
    Rectangle rect;
    //----object accessing the attribute----
    rect.setDimensions(5.0, 3.0);
    //----displaying the area of rectangle----
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
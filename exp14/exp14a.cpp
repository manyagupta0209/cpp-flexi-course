#include <iostream>
#include <string>
using namespace std;
//----------------SINGLE INHERITANCE----------------
//-----Parent Class------
class Bakery
{
    //-----access mode-----
protected:
    string coffee;
    //-----access mode-----
public:
    void muffins()
    {
        cout << "2 red velevet muffins" << endl;
    }
    char beverages(string coff)
    {
        coffee = coff;
        cout << "One " << coffee << " coffee" << endl;
    }
};
//---------INHERITANCE---------
//-------Derrived Class--------
class Menu : public Bakery
{
    //-----access mode-----
public:
    void order()
    {
        cout << "Customer: \"I would like to order\"" << endl;
    }
};
int main()
{
    //-----object of the derrived class-----
    Menu m;
    m.order();
    m.beverages("hot");
    m.muffins();
    return 0;
}
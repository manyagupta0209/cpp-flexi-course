#include <iostream>
using namespace std;
//----creating a  class named Band----
class Band
{
    //----by default access specifier is public----
public:
    //----attributes of class----
    string title = "Muse";
    string genre = "Rock";
    string country = "England";
    int year = 1994;
    //----function to display band information----
    void displayInfo()
    {
        cout << "Band details:- " << endl;
        cout << "Title: " << title << endl;
        cout << "Genre: " << genre << endl;
        cout << "Origin: " << country << endl;
        cout << "Established: " << year << endl;
    }
};
//-----MAIN PROGRAM----
int main()
{
    //----object creation----
    Band myBand;
    //----object accessing the attributes of class----
    myBand.displayInfo();
    return 0;
}
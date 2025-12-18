#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[30];
    float cost;

    ofstream outf("item.txt");

    cout << "Enter the item name: ";
    cin >> name;

    cout << "Enter cost: ";
    cin >> cost;

    outf << name << endl;
    outf << cost << endl;
    outf.close();

    ifstream inf("item.txt");
    inf >> name;
    inf >> cost;

    cout << "\nItem name: " << name;
    cout << "\nItem cost: " << cost;

    inf.close();
    return 0;
}

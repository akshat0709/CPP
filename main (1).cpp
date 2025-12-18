#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    char line[50];

    fout.open("country");
    fout << "usa\n";
    fout << "uk\n";
    fout << "india\n";
    fout.close();

    fout.open("capital");
    fout << "dc\n";
    fout << "london\n";
    fout << "new delhi\n";
    fout.close();

    fin.open("country");
    while (fin.getline(line, 50))
    {
        cout << line << endl;
    }
    fin.close();

    fin.open("capital");
    while (fin.getline(line, 50))
    {
        cout << line << endl;
    }
    fin.close();

    return 0;
}

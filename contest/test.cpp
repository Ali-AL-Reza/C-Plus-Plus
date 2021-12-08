#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr1 = "53";
    string mystr2 = "3.142";
    string mystr3 = "31477 with char";


    int strint1 = stoi(mystr1);
    int strint2 = stoi(mystr2);
    int strint3 = stoi(mystr3);

    cout << "stoi(\"" << mystr1 << "\") is " << strint1 << '\n';
    cout << "stoi(\"" << mystr2 << "\") is " << strint2 << '\n';
    cout << "stoi(\"" << mystr3 << "\") is " << strint3 << '\n';

}

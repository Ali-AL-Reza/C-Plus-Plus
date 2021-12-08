#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
bool compareTwoStu(student a ,student b)
{
         if(a.marks==b.marks)return a.roll<b.roll;
         return a.marks<b.marks;
}
int main()
{
         int n;
         cin>>n;
         student s[n];
    cout << "Enter information of students: " << endl;
    // storing information
    for(int i = 0; i < n; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter marks: ";
        cin >> s[i].marks;
        cout << endl;
    }
    cout << "Displaying Information: " << endl;
    // Displaying information
    for(int i = 0; i < n; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
    sort(s,s+n,compareTwoStu);
    ///after sorting
    for(int i = 0; i < n; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}



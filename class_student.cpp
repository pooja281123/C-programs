#include <iostream>
#include <string>
using namespace std;

class student
{
    int rollno;
    string name;
    float marks_1;
    float marks_2;
    float marks_3;
    float total;
    float percent;

public:
void acceptDetails()
{
    cout << "Enter RollNo : ";
    cin >> rollno;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Marks 1 : ";
    cin >> marks_1;
    cout << "Enter Marks 2 : ";
    cin >> marks_2;
    cout << "Enter marks 3 : ";
    cin >> marks_3;
}
void calcResult()
{
    total = marks_1 + marks_2 + marks_3;
    percent = ( total / 300 ) * 100;
}
void displayInfo()
{
    cout << "RollNo is " <<rollno<<endl;
    cout << "Name is " <<name<<endl;
    cout << "Marks 1 is " <<marks_1<<endl;
    cout << "Marks 2 is " <<marks_2<<endl;
    cout << "Marks 3 is " <<marks_3<<endl;
    cout << "Total is " <<total<<endl;
    cout << "Percentage is " <<percent<<endl;
}
};
int main()
{
    student s1;
    s1.acceptDetails();
    s1.calcResult();
    s1.displayInfo();

    return 0;
}
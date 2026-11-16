#include <iostream>
#include <string>
using namespace std;
class car
{
    int modelno;
    string color;
    string brand;
    float speed;
    public:
    void driving()
    {
        cout << "I'm Driving."<<endl;
    }
    void getdata()
    {
        cout << "Enter The ModelNo: ";
        cin >> modelno;
        cout << "Enter The Color: ";
        cin >> color;
        cout << "Enter The Brand: ";
        cin >> brand;
        cout << "Enter The Speed: ";
        cin >> speed;
    }
    void display()
    {
        cout << "ModelNo is: "<<modelno<<endl;
        cout << "Color is: "<<color<<endl;
        cout << "Brand is: "<<brand<<endl;
        cout << "Speed is: "<<speed<<endl;
    }
};
int main()
{
    car c1;
    c1.driving();
    c1.getdata();
    c1.display();

return 0;
}
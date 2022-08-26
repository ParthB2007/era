#include <iostream>
#include <string>

using namespace std;

class house {

    public:

    void info(){

        int num,num1;
        string name;

        cout<<"Enter your House number : ";
        cin >> num;

        cout << "Enter your street number : ";
        cin >> num1;

        cout << "Enter House owner name : ";
        cin >> name;

        cout << "Your House Number : "<<num<<endl<<"Your street Number : "<<num1<<endl<<"Your House owner name : "<<name;
    }


};

int main(int argc, char const *argv[])
{
    house h_info;

    h_info.info();
    return 0;
}

#include <iostream>

using namespace std;


class parth{

    private :

    int a=5,b=6;

    public :
    int add(){


        return a+b;
    }

};



int main(int argc, char const *argv[])
{
    parth obj;
    
    cout << "The sum is : "<< obj.add();

    
   

    return 0;
}

#include<iostream>
#include <string.h>

using namespace std;

class employee{
	
	int car_id;
	string car_name[100];
	string car_color[100];
	int car_model;
	int car_release;

	
	public:
		void add(){
			cout<<"Car id : ";
			cin>>car_id;
			cin>>car_id;
			cin>>car_id;
			cin>>car_id;
			
			cout<<endl<<endl;
			
			cout<<"car name : ";
			cin>> car_name[100];
			cin>> car_name[100];
			cin>> car_name[100];
			cin>> car_name[100];
			
			cout<<endl<<endl;
			
			cout<<"car color : ";
			cin>>car_color[100];
			cin>>car_color[100];
			cin>>car_color[100];
			cin>>car_color[100];
			
			cout<<endl<<endl;
		
			cout<<"car model : ";
			cin>>car_model;
			cin>>car_model;
			cin>>car_model;
			cin>>car_model;
			
			cout<<endl<<endl;
			
			cout<<"car release : ";
			cin>>car_release;
			cin>>car_release;
			cin>>car_release;
			cin>>car_release;
			
			cout<<endl<<endl;
			
			cout<<"car id"<<car_id<<endl;
			cout<<"car id"<<car_id<<endl;
			cout<<"car id"<<car_id<<endl;
			cout<<"car id"<<car_id<<endl;
			
			cout<<endl<<endl;
			
			cout<<"car name "<<car_name<<endl;
			cout<<"car name "<<car_name<<endl;
			cout<<"car name "<<car_name<<endl;
			cout<<"car name "<<car_name<<endl;
			
			cout<<endl<<endl;
			
			cout<<"car color "<<car_color<<endl;
			cout<<"car color "<<car_color<<endl;
			cout<<"car color "<<car_color<<endl;
			cout<<"car color "<<car_color<<endl;
			
			cout<<endl<<endl;
			
			cout<<"car model "<<car_model<<endl;
			cout<<"car model "<<car_model<<endl;
			cout<<"car model "<<car_model<<endl;
			cout<<"car model "<<car_model<<endl;
			
			cout<<endl<<endl;
			
			cout<<"car release "<<car_release<<endl;
			cout<<"car release "<<car_release<<endl;
			cout<<"car release "<<car_release<<endl;
			cout<<"car release "<<car_release<<endl;
		}
};

main(){
	
	employee mod;
	mod.add();
}
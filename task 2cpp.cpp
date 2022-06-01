#include<iostream>
#include<cstring>
using namespace std;

int main()
{ 
     char address[100];
     char copy[100];
     
     cout<<"enetr your full address:"<<endl;
     cin.getline(address,100);
	 
	 strcpy(copy,address);
	
	
	cout<<"your full address is : "<<copy<<endl;
	return 0;
}

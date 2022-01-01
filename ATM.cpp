#include <iostream>
using namespace std;

class user
  {
  	public:
  		
   int id;
   
   string name;
   
   string bank;
  	
  };

class acount
  {
  	public:
  		
    int shomare_hesab;
	
	int mojodi;
	
	int pass;  
   
  };



int main()
{
  	
 user info;
 
 info.id=1;
 
 info.name="ali";
 
 info.bank="melat";
 
 
 acount bank;
 
 bank.shomare_hesab=123456;
 
 bank.mojodi=200;
 
 bank.pass=1234;
	
cout<<"please enter passcode :"<<endl;	

int x;
	
cin>>x;	
 
if(x==bank.pass)
{ 
  cout<<bank.shomare_hesab<<endl<<bank.mojodi<<endl<<info.id<<endl<<info.name<<endl<<info.bank<<endl;

}else
{
	cout<<"incorect";
}
    return 0;
} 
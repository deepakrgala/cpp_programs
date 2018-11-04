#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class GoogleAccount{
	protected:
		string FirstName;
		string LastName;
		string DateOfBirth;
		int Age;
	
	public:
		void set_GoogleAccount(string fn, string ln, string dob, int a)
		{
			FirstName=fn;
			LastName=ln;
			DateOfBirth=dob;
			Age=a;
		}
		
		void Display_GoogleAccount()
		{
			cout<<"First Name: "<<FirstName<<endl;
			cout<<"Last Name: "<<LastName<<endl;
			cout<<"Date of Birth: "<<DateOfBirth<<endl;
			cout<<"Age: "<<Age<<endl;
		}
};

class GooglePlus:public GoogleAccount{
	protected:
		string Hobbies;
		
	public:
		void set_GooglePlus(string h)
		{
			Hobbies=h;
		}
		
		void Display_GooglePlus()
		{
			cout<<"Hobbies are "<<Hobbies<<endl;
		}
};


int main(int argc, char** argv) {
	GooglePlus obj;
	obj.set_GoogleAccount("Deepak", "Gala", "11/04/1983", 32);
	obj.Display_GoogleAccount();
	obj.set_GooglePlus("Hiking, Programming, Teaching");
	obj.Display_GooglePlus();
	
	system("PAUSE");	
	return 0;
}

#include<cstdlib>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int _n1=0, _n2=0;
	
	cout<<"Enter the values of n1 and n2: ";
	cin>>_n1>>_n2;
	
	cout<<"Before swapping: _n1 = "<<_n1<<" _n2 = "<<_n2<<endl;
	
	int temp;		//Declaration allowed here
	temp=_n1;
	_n1=_n2;
	_n2=temp;
	
	cout<<"After swapping: _n1 = "<<_n1<<" _n2 = "<<_n2<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

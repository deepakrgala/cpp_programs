/* Functions can be overloaded based on number of arguments & type of the arguments*/

#include <iostream>
#include<cstdlib>

using namespace std;

void fun(int *p1, int *p2)
{
	int temp=0;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

void fun(char *p1, char *p2)
{
	char temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void fun(float *p1, float *p2)
{
	float temp=0;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}


int main(int argc, char** argv) {
	
	int n1=10, n2=20;
	float n3=30.30f, n4=40.40f;
	char ch1='A', ch2='B';

	cout<<"Before swapping n1 = "<<n1<<" and n2 = "<<n2<<endl;
	fun(&n1, &n2);
	cout<<"After swapping n1 = "<<n1<<" and n2 = "<<n2<<endl;
	
	cout<<"Before swapping n3 = "<<n3<<" and n4 = "<<n4<<endl;
	fun(&n3, &n4);
	cout<<"After swapping n3 = "<<n3<<" and n4 = "<<n4<<endl;
	
	cout<<"Before swapping ch1 = "<<ch1<<" and ch2 = "<<ch2<<endl;
	fun(&ch1, &ch2);
	cout<<"After swapping ch1 = "<<ch1<<" and ch2 = "<<ch2<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

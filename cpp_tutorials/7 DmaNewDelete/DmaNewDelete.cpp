/* 
T *p = new T; -- Allocation for single variable
T *p = new T(10); -- Allocation for single variable along with variable initialization
T *p = new T[5]; -- Allocation for array of size 5

delete p; --- Deallocation for the single variable
delete []p; -- Deallocation for array allocation
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int *_arg1 = new int;
    int *_arg2 = new int;
    int *array = new int[5];
    int i=0;
    
    if(_arg1 != NULL && _arg2 != NULL)
    {
       *_arg1 = 10;
       *_arg2 = 20;
    }
    if(array != NULL)
    {
       for(i=0;i<5;i++)
       {
         array[i] = i*2;
       }
    }
	
	cout<<"_arg1 = "<<*_arg1<<endl;
	cout<<"_arg2 = "<<*_arg2<<endl;
	cout<<"array = ";
	for(i=0; i<5; i++)
	cout<<array[i]<<" ";
	cout<<endl;
    
    if((_arg1 != NULL) || (_arg2 != NULL) || (array != NULL))
    {
       delete _arg1;
       delete _arg2;
       delete [] array;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}


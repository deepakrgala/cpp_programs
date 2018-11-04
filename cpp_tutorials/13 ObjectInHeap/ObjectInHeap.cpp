/* by default the object is created in stack memory
	Creating the object in heap
*/
#include <cstdlib>
#include <iostream>
using namespace std;

class arthimatic
{
  public:
    int _arg1;
    int _arg2;
  
  void set_data(int v1, int v2)
  {
    _arg1 = v1;
    _arg2 = v2;
  }
  void arthimatic_operations()
  {
    cout<<"Arthimatic Calculator\n";
    cout<<"(_arg1+_arg2)"<<(_arg1+_arg2)<<endl;
    cout<<"(_arg1-_arg2)"<<(_arg1-_arg2)<<endl;
    cout<<"(_arg1*_arg2)"<<(_arg1*_arg2)<<endl;
    cout<<"(_arg1%_arg2)"<<(_arg1%_arg2)<<endl;
  }
};
int main(int argc, char *argv[])
{
    arthimatic *ptr = new arthimatic; //It will create the ananymous object in heap & its address stored
    ptr->set_data(10, 20);          //in pointer
    ptr->arthimatic_operations();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



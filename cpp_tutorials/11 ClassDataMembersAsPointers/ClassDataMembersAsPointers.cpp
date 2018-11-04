
#include <cstdlib>
#include <iostream>
using namespace std;

class arthimatic
{
public:
    int *_arg1;
    int *_arg2;
    void set_data(int v1, int v2);
    void arthimatic_operations();
    void cleanMemory();
};

void arthimatic:: set_data(int v1, int v2)
{
     _arg1 = new int;
     _arg2 = new int;
     if(_arg1 != NULL && _arg2 != NULL)
     {
       *_arg1 = v1;
       *_arg2 = v2;
     }
}
void arthimatic ::arthimatic_operations()
{
    cout<<"Arthimatic Calculator\n";
    cout<<"(_arg1+_arg2)"<<(*_arg1+*_arg2)<<endl;
    cout<<"(_arg1-_arg2)"<<(*_arg1-*_arg2)<<endl;
    cout<<"(_arg1*_arg2)"<<(*_arg1* *_arg2)<<endl;
    cout<<"(_arg1%_arg2)"<<(*_arg1% *_arg2)<<endl;
}

void arthimatic :: cleanMemory()
{
    if(_arg1 != NULL || _arg2 != NULL)
     {
        delete _arg1;
        delete _arg2;
     } 
}
int main(int argc, char *argv[])
{
  arthimatic obj;
  obj.set_data(10, 20);
  obj.arthimatic_operations();
  obj.cleanMemory();
  system("PAUSE");
  return 0;
}


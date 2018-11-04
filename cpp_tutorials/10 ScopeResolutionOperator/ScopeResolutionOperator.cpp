/*
The functions can be implemented outside of the class as well using scope resolution operator

ret_type class_name :: fun_name(arg-list){}
*/

#include <cstdlib>
#include <iostream>
using namespace std;

class arthimatic
{
public:
    int _arg1;
    int _arg2;
    void set_data(int v1, int v2);
    void arthimatic_operations();
};

void arthimatic:: set_data(int v1, int v2)
{
    _arg1 = v1;
    _arg2 = v2;
}
void arthimatic ::arthimatic_operations()
{
    cout<<"Arthimatic Calculator\n";
    cout<<"(_arg1+_arg2)"<<(_arg1+_arg2)<<endl;
    cout<<"(_arg1-_arg2)"<<(_arg1-_arg2)<<endl;
    cout<<"(_arg1*_arg2)"<<(_arg1*_arg2)<<endl;
    cout<<"(_arg1%_arg2)"<<(_arg1%_arg2)<<endl;
}
  
int main(int argc, char *argv[])
{
    arthimatic obj;
    arthimatic *ptr = NULL;
    ptr = &obj;
    ptr->set_data(10, 20);
    ptr->arthimatic_operations();
    system("PAUSE");
    return EXIT_SUCCESS;
}


/* 
There are 2 access specifiers
   Public: Any data/function declared with public keyword indicates can be accessed by any outside function including 
           main function

   protected: Any data/function declared with protected keyword indicates can be only accessed by derived class & friend function
              No other function can access this data

   private: Any data/function declared with private keyword indicates can be only accessed by friend function
            no other function can access this data

In case of class if we don't specify the access specifier then by default it will be private

In case of structure if we don't specify the access specifier then by default it will be public

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
    arthimatic obj;
    obj.set_data(10, 20);
    obj.arthimatic_operations();
    system("PAUSE");
    return EXIT_SUCCESS;
}


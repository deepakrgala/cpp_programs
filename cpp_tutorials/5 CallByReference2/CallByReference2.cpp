#include <cstdlib>
#include <iostream>
void fun(int &p1, int &p2) //int &p1 = _n1, int &p2 = _n2
{
  int temp=0;
  temp = p1;
  p1 = p2;
  p2 = temp;
}

void fun(float &p1, float &p2)
{
  float temp=0.0;
  temp = p1;
  p1 = p2;
  p2 = temp;
}

void fun(double &p1, double &p2)
{
  double temp=0.0f;
  temp = p1;
  p1 = p2;
  p2 = temp;
}

void fun(char &p1, char &p2)
{
  char temp=0;
  temp = p1;
  p1 = p2;
  p2 = temp;
}

int main(int argc, char *argv[])
{
    int _n1 = 6, _n2 = 7;
    float _n3 = 4.0f, _n4 = 3.0f;
    double _n5 = 3.0, _n6 = 2.0;
    char _n7 = 'A', _n8 = 'B';    
   
    std::cout<<"Before swapping\n";
    std::cout<<"_n1:"<<_n1<<" _n2:"<<_n2<<std::endl;
    std::cout<<"_n3:"<<_n3<<" _n4:"<<_n4<<std::endl;
    std::cout<<"_n5:"<<_n5<<" _n6:"<<_n6<<std::endl;
    std::cout<<"_n7:"<<_n7<<" _n8:"<<_n8<<std::endl;
    
    fun(_n1, _n2);
    fun(_n3, _n4);
    fun(_n5, _n6);
    fun(_n7, _n8);
  
    std::cout<<"After swapping\n";
    std::cout<<"_n1:"<<_n1<<" _n2:"<<_n2<<std::endl;
    std::cout<<"_n3:"<<_n3<<" _n4:"<<_n4<<std::endl;
    std::cout<<"_n5:"<<_n5<<" _n6:"<<_n6<<std::endl;
    std::cout<<"_n7:"<<_n7<<" _n8:"<<_n8<<std::endl;
  
    system("PAUSE");
    return EXIT_SUCCESS;
}


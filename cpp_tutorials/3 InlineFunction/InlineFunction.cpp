#include <cstdlib>
#include <iostream>
inline void fun(int *p1, int *p2)
{
   std::cout<<"p1: "<<*p1<<" p2: "<<*p2<<std::endl;
}

inline void fun(int *p1, int *p2, int *p3)
{
  std::cout<<"p1: "<<*p1<<" p2: "<<*p2<<" p3: "<<*p3<<std::endl;
}

inline void fun(int *p1, int *p2, int *p3, int *p4)
{
  std::cout<<"p1: "<<*p1<<" p2: "<<*p2<<" p3: "<<*p3<<" p4: "<<*p4<<std::endl;
}

int main(int argc, char *argv[])
{
    int v1=10, v2=30, v3=40, v4=50;
    fun(&v1, &v2);
    fun(&v1, &v2, &v3);
    fun(&v1, &v2, &v3, &v4); 
    system("PAUSE");
    return EXIT_SUCCESS;
}


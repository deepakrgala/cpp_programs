/* Rules for default arguments:

1. All the arguments can be default
2. Always default arguments must be terminal elements can't be either first or middle
3. First few arguments can be non-default
4. If function contains already default arguments but still if user passes the values
   then passed values takes the higher priority & gets used in function and override the default values
*/

#include <cstdlib>
#include <iostream>
using namespace std;

float calculate_area(float rad, float PI=3.14f)
{
   return(PI*rad*rad);
}

float avg(int _n1=10, int _n2=20, int _n3=30)
{
   return(((float)_n1+_n2+_n3)/3);
}

/* 
float avg(int _n1=10, int _n2=20, int _n3) 		//NOT OK, DEFAULT ARGUMENTS MUST BE TERMINAL
{
   return(((float)_n1+_n2+_n3)/3);
}

float avg(int _n1, int _n2=20, int _n3=10)		//First few arguments can be non-default
{
   return(((float)_n1+_n2+_n3)/3);
}


*/

int main(int argc, char *argv[])
{
    float rad = 2.1f;
    int _n3=30;
    cout<<"area: "<< calculate_area(rad)<<endl;
    cout<<"avg: "<<avg(_n3)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}


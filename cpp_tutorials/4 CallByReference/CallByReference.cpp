/* Once reference is created both referee & reference point to same address
If we modify either of them both gets affected */


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int var=10;
    int &ref = var;
    
    cout<<"var: "<<var<<" "<<"ref: "<<ref<<endl;
    
    ref++;
    cout<<"var: "<<var<<" "<<"ref: "<<ref<<endl;
    
    var--;
    cout<<"var: "<<var<<" "<<"ref: "<<ref<<endl;
    
    ref=10;
    cout<<"var: "<<var<<" "<<"ref: "<<ref<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}


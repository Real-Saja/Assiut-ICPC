#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    float x,integral,fractional;
    cin>>x;

    fractional=modf(x,&integral);
    
    if(fractional==0) cout<<"int"<<" "<<integral;
    else cout<<"float"<<" "<<integral<<" "<<fractional;

return 0;
}
#include<iostream>

using namespace std;

int main()
{
    
int C;
cin >> C;

for(int i=2;C>0;++i)
{   
    bool isPrime=true;
    for(int j=2;j<i;++j)
    {
        if(i % j==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime)
    {   
        --C;
        cout << i<< "/n";
    }
}

return 0;

}
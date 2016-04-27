#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    int acc = 0;

// handle the first number separately
    cin >> acc;
    int minVal = acc;
    int maxVal = acc;

// then process the rest of the input 
    for(int i = 1; i < N; ++i)
{
    int a;
    cin >> a;
    acc += a;
    if(a < minVal)
    {
        minVal = a;
    }
    if(a > maxVal)
    {
        maxVal = a;
    }
}
cout << "Mean: " << (double)acc/N << "\n";
cout << "Max: " << maxVal << "\n";
cout << "Min: " << minVal << "\n";
cout << "Range: " << (maxVal - minVal) << "\n";

return 0;

}
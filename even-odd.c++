#include <iostream>
using namespace std;

int main()
{
 
    int n, number, even = 0, odd = 0;
    cout << "Enter Numbers: " << "\n";
    cin >> n;
    for (int i = 0; i < n; i++) {
    cin >> number;
        if (number % 2 == 0)
        even++;
        else
        odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd;
 
}
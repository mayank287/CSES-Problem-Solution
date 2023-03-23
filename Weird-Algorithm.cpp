#include <iostream>
using namespace std;
#define lln long long int
 
 
void solve(lln n)
{
    cout << n << " ";
    while(n > 1)
    {
        if(n % 2 != 0)
        {
           n = n * 3 + 1;
        }
        else{
            n = n / 2;
        }
        cout << n << " ";
    }
    
 
}
 
int main()
{
    
     lln n;
    cin >> n;
    solve(n);
    return 0;
}

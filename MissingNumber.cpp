#include <iostream>
using namespace std;
#define lln long long int
 
int main()
{
   lln  n;
   cin >> n;
   lln arr[n];
   for(int i = 0; i < n - 1; i++)
   {
       cin >> arr[i];
   }
   
   lln totalSum = (n * (n + 1)) / 2;
   lln sum = 0;
   for(int i = 0; i < n - 1; i++)
   {
       sum += arr[i];
   }
   
 
  cout << totalSum - sum << '\n'; 
 
    return 0;
}

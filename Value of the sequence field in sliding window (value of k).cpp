#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    int n=1;
    cout << "Enter the value of k:";
    cin >> k;
    for(int i=0; i<k; i++)
    {
          n=2*n;
    }
    int A[n];
    for(int i=0; i<n; i++)
    {
         A[i] = i;
    }
    cout<<"The chain will be " ;
    for(int i=0; i<n; i++)
    {

         for(int j=0; j<n; j++)
         {
              cout << A[j] << " ";
         }
    }
    cout << endl;
    int l = n-1;
    cout << "Maximum window length will be " << l << endl;
    return 0;
}

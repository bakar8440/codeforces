#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum;
    cin>>n;
    sum=0;
        if(n%2 == 0){
            sum = n/2;
        }
        else{
            sum=-((n+1)/2);
        }
    cout<<sum<<endl;
    return 0;
}
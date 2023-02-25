#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }

    int ans = 0;


    for(int i=0;i<n;i++)
    {
        ans = max(ans,v[i]);
    }

    cout<<"the altitude is  : "<<(ans)<<endl;

    return 0;

}
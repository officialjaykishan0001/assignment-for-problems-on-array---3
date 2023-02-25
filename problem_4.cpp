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

    for(int i=0;i<n;i++)
    {
        v[i] += v[i-1];
    }

    int count  = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(i==0 && v[j]%2!=0)
            {
                count ++;
            }

            else if((v[j]-v[i-1] && i!=0 )%2!=0)
            {
                count ++;
            }
        }
    }

    cout<<"the number of the sequence is : "<<(count)<<endl;

    return 0;
}
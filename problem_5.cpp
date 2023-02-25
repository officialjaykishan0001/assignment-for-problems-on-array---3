#include<iostream>
#include<vector > 
using namespace std;

int main()
{
    int n;
    cout<<"entet the size of the array : ";
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

   int left_pass[n];
   int right_pass[n];

   int running_product = 1;

    //left pass;

    for(int i=0;i<n;i++)
    {
        left_pass[i] = running_product;
        running_product *= v[i];
    }

    //right pass
    running_product = 1;

    for(int i=(n-1);i>=0;i--)
    {
        right_pass[i]=running_product;
        running_product *= v[i];
    }

    vector <int> result (n);

    for(int i=0;i<n;i++)
    {
        result[i] = left_pass [i]* right_pass[i];
    }

     cout<<endl;
     for(int i=0;i<n;i++){

        cout<<result[i]<<" ";
     }
    return 0;
}
//jai jai jai bajarangbali..

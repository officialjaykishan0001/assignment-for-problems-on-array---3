//problem  : given an arr containing 0 and 1 only .find the length of sequence which containing equal
// number of o's and 1's .

#include<iostream>
#include<vector > 
using namespace std;

int solution(vector <int> v,int n)
{
    int left_ptr = 0;
    int right_ptr = (n-1);
    int count = 0;

    while(left_ptr<=right_ptr)
    {
        if(v[left_ptr]==0 && v[right_ptr]==1 || v[left_ptr]==1 && v[right_ptr]==0)
        {
            count ++;
            left_ptr++;
            right_ptr --;
        }

        else{
            right_ptr --;
        }
    }

    return 2*count;
}

int  main()
{
    int n;
    cout<<"enter the size of the vector array : ";
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans = solution(v,n);

    cout<<"the number of sequence are : "<<(ans)<<endl;
    return 0;
}
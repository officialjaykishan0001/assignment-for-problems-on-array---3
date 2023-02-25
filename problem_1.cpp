//solution in the form of cpp program .

#include<iostream>//directive and libray of c++ language.
#include<vector> 
using namespace std;

int findSum(vector <int> &v,int &l,int &r)
{   
    int sum = 0;
    for(int i=l;i<=r;i++)
    {
        sum += v[i];
    }
    return sum;
}

void error()
{
    cout<<endl;
    cout<<"    ERROR .."<<endl;
    cout<<"warning L is not less than 0 and R is not greater than (n-1) "<<endl;
    cout<<"re-input .."<<endl;
}


int main()//starting the main function.

{

    int n;
    cout<<"enter the size of the vector array : ";
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    //taking the value of L and R.
    int L,R;
    cout<<"enter the value of L and R respectively : ";
    cin>>L>>R;
    
     if(R>(n-1) || L<0)
     {
        error();
        return 0;
         
     }
    //calling the function.
    int ans = findSum(v,L,R);

    // giving the output of the answer.
    cout<<"the sum between the L and R is : "<<ans<<endl;

    return 0;

}
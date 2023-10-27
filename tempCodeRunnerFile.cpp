#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       int count=0;
        for(int j=1;j<=i;j++)
        {
            char ch='A'+ count;
            cout<<ch;

        }
        count++;
    }
    return 0;
}
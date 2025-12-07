#include <iostream>
using namespace std;
int main(){


    //Problem X. Two intervals   (  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X )

    long long l1, r1, l2, r2;
    long long start ,end;
    cin>>l1>>r1>>l2>>r2;
    if(l1>=l2)
    {
        start=l1;
    }else{
        start=l2;
    }
    if(r1<=r2){
        end=r1;
    }else{
        end=r2;
    }
    if(start<=end)
       cout<<start<<" "<<end;
    else
       cout<<-1;




    return 0;
}
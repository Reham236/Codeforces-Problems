#include<iostream>
#include <bitset>
#include <string>
using namespace std;
int main() {
//  // Problem D Ali Baba Puzzle
//     long double a ,b ,c ,d;
//     cin>>a>>b>>c>>d;
//     if((a+b-c==d)||
//        (a+b*c==d)||
//        (a-b+c==d)||
//        (a-b*c==d)||
//        (a*b+c==d)||
//        (a*b-c==d)){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//  // Problem E  Interval Sweep
// unsigned a,b;
// cin>>a>>b;
// if(a==0 || b==0){
//     cout<<"NO"<<endl;
// }
// else if (a == b !=0 || a-b == 1||b-a == 1)
//     cout<<"YES"<<endl;
// else
//     cout<<"NO"<<endl;
//  // Problem F  Adding Bits   (https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F)
//  unsigned int num1 ,num2;
//    cin>>num1>>num2;

// unsigned int result = num1^num2;
//  cout<<result<<endl;

// Problem G. Katryoshka  (https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G)
long long  n; //Eyes
long long  m; //Mouths
long long k; //Bodies
long long result =0 ;
cin>>n>>m>>k;
if(n==0||k==0){
    cout<<0 ;
}else if(m==0){
    if(n/2 <k){
        cout<<n/2 ;
    }else{
        cout<<k ;
    }
}else if(m <= n && m <= k){
   
       result += m; 
       n -= m;
       k -= m;
    if(n/2 <k){
       cout<<result + n/2 ;
    }else{
        cout<<result + k ;
    }
}else if(n <= m && n <= k){
   
       result += n; 
       m -= n;
       k -= n;
       cout<<result ;
}else if( k <= m && k <= n){
       
       result += k; 
       n -= k;
       m -= k;
       cout<<result ;
}
    return 0;
}
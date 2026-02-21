#include<iostream>
#include <vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <cctype>
using namespace std;
int main(){

  // // Problem I. Smallest Pair    (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I)
  //  int T ;
  // cin>>T;
 

  // while(T>0){
  //    int N ;
  //    cin>>N;
  //      vector<int> arr( N );
  //   for (int i = 0; i < N; i++)
  //   {
  //       cin>>arr[i];
  //   }
    
  //   int i=0;
  //   int j=1;
  //   int smallestVal=arr[i]+arr[j]+(j+1)-(i+1);
  //   for (; i < j; i++)
  //   { j=i+1;
  //      for (; j < N; j++)
  //      { int curVal=arr[i]+arr[j]+(j+1)-(i+1);
       
  //       if(curVal < smallestVal ){
  //         smallestVal=curVal;
  //       }
  //      }
       
  //   }
   
  // cout <<smallestVal<<endl;
  //   T--;
  // } 




  // Problem L. Max Subarray (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L)
//   int T ;
//   cin>>T;
//   while (T>0)
//   { int N;
//     cin>>N;
//     vector<int> arr(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     for (int i = 0; i < N; i++)
//     {
//       int j=i+1;
//       cout<<max(arr[i],arr[j])<<" ";
       
//     }
//  for (int i = 0; i < N-2; i++)
//     {
     
//       int maximum=max(arr[i],arr[i+1]);
//       cout<<max(maximum,arr[i+2])<<" ";
       
//     }
// cout<<endl;
//     T--;
//   }
  

// //Problem N. Check Code  (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N)
// int A ,B;
// cin>>A>>B;
// string s;
// cin >>s;
// if(s.size()!= A+B+1 || s[A]!='-'){
//     cout<<"No";
//     return 0;
// }
 
// for(int i=0;i<A;i++){
   
//      if(!isdigit(s[i])){ 
//         cout<<"No";
//        return 0;
//       }
//  } 
//  for(int i=A+1;i<A+B+1;i++){
   
//      if(!isdigit(s[i])){ 
//         cout<<"No";
//        return 0;
//       }
//  }
//  cout<<"Yes";  

// Problem P. Minimize Number (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P)
int N;
cin>>N;
vector<int> nums(N);
for (int i = 0; i < N; i++)
{
    cin>>nums[i];
}
int i=0;
int counter=0;
while(i<N){
  
  if(i==N-1){
    counter++;
  }
  if (nums[i]%2==0)
  {
    nums[i]/=2;
  i=(i+1)%N;
    continue;
  }else{
    
    break;
  }
  
  
}
cout<<counter; 
 return 0;
}
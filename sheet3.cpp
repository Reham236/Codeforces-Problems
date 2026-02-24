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

// // Problem P. Minimize Number (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P)
// int N;
// cin>>N;
// vector<int> nums(N);
// for (int i = 0; i < N; i++)
// {
//     cin>>nums[i];
// }
// int i=0;
// int counter=0;
// while(i<N){
  
//   if(i==N-1){
//     counter++;
//   }
//   if (nums[i]%2==0)
//   {
//     nums[i]/=2;
//   i=(i+1)%N;
//     continue;
//   }else{
    
//     break;
//   }
  
  
// }
// cout<<counter; 


// // Problem R. Permutation with arrays (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R)
// int N;
// cin >> N;
// vector<int> arrayA(N);
// for (int i = 0; i < N; i++) {
//     cin >> arrayA[i];
// }
// vector<int> arrayB(N);
// for (int i = 0; i < N; i++) {
//     cin >> arrayB[i];
// }

// sort(arrayA.begin(), arrayA.end());
// sort(arrayB.begin(), arrayB.end());

// if (arrayA == arrayB) {
//     cout << "yes";
// } else {
//     cout << "no";
// }

// // Poblem S. Search In Matrix (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S)


// int N, M,X;
// cin >> N >> M;
// vector<vector<int>> matrix(N, vector<int>(M));
// for (int i = 0; i < N; i++) {
//     for (int j = 0; j < M; j++) {
//         cin >> matrix[i][j];
//     }
// }
// cin >> X;
// bool found = false;
// for (int i = 0; i < N; i++) {
//     for (int j = 0; j < M; j++) {
//         if (matrix[i][j] == X) {
//             found = true;
//             break;
//         }
//     }
//     if (found) {
//         break;
//     }
// }
// if (found) {
//     cout << "will not take number";
// } else {
//     cout << "will take number";
// }

// Problem T. Matrix (https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T)
int N;
cin >> N;
vector<vector<int>> A(N, vector<int>(N));
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cin >> A[i][j];
    }
}
int PrimaryDiagonalSum = 0;
int SecondaryDiagonalSum = 0;
for(int i=0;i<N;i++){
    PrimaryDiagonalSum += A[i][i];
    SecondaryDiagonalSum += A[i][N-1-i];
}
if(PrimaryDiagonalSum- SecondaryDiagonalSum<0 ){
    cout<<-1*(PrimaryDiagonalSum- SecondaryDiagonalSum);

}
else{
 cout<<PrimaryDiagonalSum- SecondaryDiagonalSum;
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
  // // Problem M. Lucky Numbers        (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)
  //     int A=0, B=0;
  //     int count=0;
  //     cin>>A>>B;
  //     for(int i=A;i<=B;i++){
  //       int temp=i;
  //       while(temp!=0){
  //         if(temp%10!=4 && temp%10!=7){
  //           break;
  //         }
  //         temp/=10;
  //       }
  //       if(temp==0){
  //         cout<<i<<' ';
  //          count++;
  //       }
  //     }
  //     if(count==0){
  //       cout<<-1;
  //     }
  // // Problem X. Convert To Decimal 2 (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X)

  //  int T ,N=0;

  //  int counter=0;
  //  cin>>T;
  //  while (T>0)
  //  {   int decimalVal=1;
  //   cin>>N;
  //    while(N>0){
       
  //      if(N%2==1) {
  //       counter++;
  //      }
  //      N=N/2;
  //    }
   
  // for (counter;counter>0;counter--){
  //       decimalVal*=2;
  // }
  // cout<<decimalVal-1<<endl;
  //   T--;
    
  //  }
      


     // Problem Y. Easy Fibonacci    (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y)
     int f=0 ,s=1,res=0,N;
      cin>>N;
      if(N==1){
        cout<<f;
        return 0;
      }
      cout<<f<<' '<<s<<' ';
      for(int i=0;i<N-2;i++){
         res=f+s;
       cout<<res<<' ';
       f=s;s=res;
      
      }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
  // Problem M. Lucky Numbers        (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)
      int A=0, B=0;
      int count=0;
      cin>>A>>B;
      for(int i=A;i<=B;i++){
        int temp=i;
        while(temp!=0){
          if(temp%10!=4 && temp%10!=7){
            break;
          }
          temp/=10;
        }
        if(temp==0){
          cout<<i<<' ';
           count++;
        }
      }
      if(count==0){
        cout<<-1;
      }
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
   

    return 0;
}
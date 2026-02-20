#include<iostream>
#include <vector>
using namespace std;
int main(){
   int T ;
  
  cin>>T;
 

  while(T>0){
     int N ;
     cin>>N;
       vector<int> arr( N );
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    
    int i=0;
    int j=1;
    int smallestVal=arr[i]+arr[j]+(j+1)-(i+1);
    for (; i < j; i++)
    { j=i+1;
       for (; j < N; j++)
       { int curVal=arr[i]+arr[j]+(j+1)-(i+1);
       
        if(curVal < smallestVal ){
          smallestVal=curVal;
        }
       }
       
    }
   
  cout <<smallestVal<<endl;
    T--;
  } 
}
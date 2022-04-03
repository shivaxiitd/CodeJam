#include <iostream>
using namespace std;

int main() {
  int t=0;

  cin>>t;

  int token=0;
  while(token<t){
   

    int r=0,c=0;
    cin>>r>>c;
cout<<"Case #"<<token+1<<":"<<endl;
    int rowtoken=0;
    int coltoken=0;

    while(rowtoken<r){
      if(rowtoken==0){
        int runtwice=0;
        
        while(runtwice<2){
          cout<<"..";

          coltoken=1;
          while(coltoken<c){
            if(runtwice==0){
              cout<<"+-";
            }
            else{
              cout<<"|.";
            }
        
        
          coltoken++;
        }
          if(runtwice==0){
              cout<<"+"<<endl;
            }
            else{
              cout<<"|"<<endl;
            }
          runtwice++;
        }

          
      }

      else{
        int runtwice=0;
        
        while(runtwice<2){

          coltoken=0;
          while(coltoken<c){
            if(runtwice==0){
              cout<<"+-";
            }
            else{
              cout<<"|.";
            }
        
        
          coltoken++;
        }
          if(runtwice==0){
              cout<<"+"<<endl;
            }
            else{
              cout<<"|"<<endl;
            }
          runtwice++;
        }
        
        
        
      }
      
      rowtoken++;
    }

    int lastrow=0;
    while(lastrow<c){
      cout<<"+-";
      lastrow++;
    }
    cout<<"+"<<endl;

    token++;
  }
}
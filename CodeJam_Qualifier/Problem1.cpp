#include <iostream>
using namespace std;

int min(int arr[]){
  int min=10000000;
  for (int i=0;i<3;i++){
    if (arr[i]<min){
      min=arr[i];
    }
  }
  return min;
}

int main(){
  int test_cases=0;
  cin>>test_cases;

  int counter=0;
  while(counter<test_cases){
    int answerarray[4] = {0,0,0,0};
    int c[3];
    int y[3];
    int m[3];
    int k[3];

    for(int i =0;i<3;i++){
      c[i]=y[i]=m[i]=k[i]=0;    
    
    }

    for(int j=0;j<3;j++){
      cin>>c[j]>>m[j]>>y[j]>>k[j];
    }

    cout<<"Case #"<<counter+1<<":"<<endl;

    int cmin=min(c);
    int ymin=min(y);
    int mmin=min(m);
    int kmin=min(k);

    if(cmin+kmin+mmin+ymin<1000000){
      cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        int colorarray[4] = {cmin,mmin,ymin,kmin};
        int sum=0;
        int count =0;
        while(sum<=1000000 && count <4){
             
             if(sum+colorarray[count]>=1000000){
                 answerarray[count]=1000000-sum;
                 break;
             }
             else{
                 answerarray[count]=colorarray[count];
                 sum+=colorarray[count];
             }
             
             count++; 
            }
     }

    cout<<answerarray[0]<<" "<<answerarray[1]<<" "<<answerarray[2]<<" "<<answerarray[3]<<endl;
    counter++;
    }

    
  }


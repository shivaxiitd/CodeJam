#include <iostream>
using namespace std;

void countsort(int arr[], int n){
  int k = arr[0];

  for (int i=0;i<n;i++){
    k=max(k,arr[i]);
  }

  int count[k+1];

  for(int i=0;i<=k;i++){
    count[i]=0;
  }
  
  for(int i=0;i<n;i++){
    count[arr[i]]++;
  }

  for (int i=1;i<=k;i++){
    count[i]+=count[i-1];
  }

  int answer[n];

  for (int i=n-1;i>=0;i--){
    answer[--count[arr[i]]]=arr[i];
  }

  for(int i=0;i<n;i++){
    arr[i]=answer[i];
  }
}

int main() {
  int testcases=0;
  cin>>testcases;

  for (int counter=0;counter<testcases;counter++){
    int n=0;
    cin>>n;
    int d[n];
    
    for(int i=0;i<n;i++){
      d[i]=0;
      cin>>d[i];
    }
    
    countsort(d,n);

    for(int checkingfor=n;checkingfor>0;checkingfor--){
      int isPossible=1;
      int testcheck=checkingfor;

      for (int token=n-1;token>=0;token--){
        if(testcheck>d[token]){
          isPossible=0;
          break;
        }
        else{
          testcheck--;
        }
        }
      if(isPossible ==1){
        cout<<"Case #"<<counter+1<<": "<<checkingfor<<endl;
        break;
      }
    }
  }
  }
#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,2,-13,4,5};
  int maxi=INT_MIN;
   int smax=INT_MIN;
  for(int i=0;i<v.size();i++){
    if(v[i]>maxi){
        smax=maxi;
        maxi=v[i];

    }
    else if(v[i]>smax && v[i]<maxi){
        smax=v[i];
    }
   

  }
   cout<<"maxi: "<<maxi<<" smax: "<<smax<<endl;

    return 0;
}
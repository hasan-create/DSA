#include<iostream>
#include<vector>
#include<utility>
using namespace  std;
 int main(){
    vector<int> v={1,2,3,4,5,6};
    int start=0;
    int end=v.size()-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
 }


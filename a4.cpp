#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;
int linearsearch(vector<int> v,int target){
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
vector<int> v={1,2,3,4,5};
int target=3;
int ans=linearsearch(v,target);
if(ans==-1){
    cout<<"Element not found in the vector"<<endl;
}
else{
    cout<<"Element found at index: "<<ans<<endl;
}}
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v1;
vector<int>v2;
vector<int>v3;
int i,j;
int n=v1.size();
int m=v2.size();
n=0;m=0;
cin>>n>>m;
while(i<n && j<m){
    if(v1[i]<v2[j])
    {
        v3.push_back(v1[i]);
        i++;
    }
    else{
        v3.push_back(v2[j]);
        j++;
    }
   
}
cout<<v3;


return 0;}
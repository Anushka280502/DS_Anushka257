#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;int value;
bool binary_search(v.begin(),v.end(),value);
while(true)
{
    cin>>value;
    if(value==-1){
        break;
    }
    v.push_back(value);

if(binary_search(v.begin,v.end(),value)){
    cout<<"element found";
else
   cout<<"element not found";
}
}
}
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(1);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(4);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(7);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(8);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(4);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i=0;i<v.size();i++)
    cout << v[i]<<" ";
    cout << endl;

    for(int i=0;i<v.size();i++)
    cout << v.at(i) << " ";
    cout<<endl;

    for(auto value:v)  //int will be not used 
    cout <<value<<" ";
    cout<<endl; 

    v.pop_back();            //to remove last element
    for(auto value:v) 
    cout<<value<<" ";
    cout<<endl;

    cout<<"Front:"<<v.front()<<" "<<endl<<"last value:"<<v.back()<<endl;

    v.insert(v.begin(),2);     //to insert 2 in beginning
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    v.insert(v.begin()+2,10);  //insert 10 at 2nd place
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    cout <<"size of vector: " << v.size() << endl;
    cout <<"capacity of vector: " << v.capacity() << endl;

    
    v.insert(v.begin()+4,3,11);   //3 copies of 11 at 4th place
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    v.erase(v.begin());                //to erase first element
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    
    v.erase(v.begin(),v.begin()+3);    //+3 will erase 3 and +2 will erase 2 i.e.last one is excluded
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    //vector initialisation

    vector<int>v1={2,3,5,8};   //prints the elements of vector
       for(auto value:v1)
    cout<<value<<" ";
    cout<<endl;

    vector<int>v2(3,5);    //prints same number i.e.5 three times
    for(auto value:v2)
    cout<<value<<" ";
    cout<<endl;

    //Iterator

    vector<int>::iterator itr;
    for(auto itr=v.begin(); itr!=v.end();itr++)
    cout<<*(itr)<<" ";
    cout<<endl;

    vector<int>::reverse_iterator rit;              //for reverse
    for(auto rit=v.rbegin();rit!=v.rend();++rit)
    cout<<*(rit)<<" ";
    cout<<endl;

    
}
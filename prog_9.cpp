#include<bits/stdc++.h>
using namespace std;

struct Teacher {
    
    string name;
    string subject;
    int year;
    
};


int main(){
    int n;
    cin>>n;
    Teacher obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].name;
        cin>>obj[i].subject;
        cin>>obj[i].year;
    }
    string name;
    int maxi=INT_MAX;
    for(int i=0;i<n;i++){
        if(obj[i].year>maxi){
            maxi=obj[i].year;
            name=obj[i].name;
        }
    }
    cout<<name;
    return 0;
}

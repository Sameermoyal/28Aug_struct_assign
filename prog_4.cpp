#include<bits/stdc++.h>
using namespace std;

struct Book {
    
    string name;
    string author;
    int price;
    
};


int main(){
    int n;
    cin>>n;
    Book obj[n];
    for(int i=0;i<n;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter id";
        cin>>obj[i].author;
        cout<<"enter salary";
        cin>>obj[i].price;
    }
    string name = "jungli";
    
    
    for(int i=0;i<n;i++){
        if(name==obj[i].name){
            break;
        }
    }
    
    
    return 0;
}

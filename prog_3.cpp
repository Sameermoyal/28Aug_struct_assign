#include<bits/stdc++.h>
using namespace std;

struct Employee {
    
    string name;
    int id;
    int salary;
    
};


int main(){
    int n;
    cin>>n;
    Employee obj[n];
    for(int i=0;i<5;i++){
        cout<<"enter name"<<endl;
        cin>>obj[i].name;
        cout<<"enter id";
        cin>>obj[i].id;
        cout<<"enter salary";
        cin>>obj[i].salary;
    }
    int salary = 0;
    string name;
    int id;
    for(int i=0;i<n;i++){
        if(salary<obj[i].salary){
            salary=obj[i].salary;
            name = obj[i].name;
            id = obj[i].id;
        }
    }
    cout<<name<<" "<<salary<<" "<<id;
    
    return 0;
}

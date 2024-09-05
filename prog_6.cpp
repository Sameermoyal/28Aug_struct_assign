#include<bits/stdc++.h>
using namespace std;

struct Library {
    
    string title;
    int id;
    int quantity;
    void borrow(){
        quantity--;
    }
    void retu(){
        quantity++;
    }
};


int main(){
    Library obj;
    cin>>obj.title;
    cout<<obj.title<<endl;
    cin>>obj.id;
    cout<<obj.id<<endl;
    cin>>obj.quantity;
    cout<<obj.quantity<<endl;
    obj.borrow();
    cout<<obj.quantity<<endl;
    obj.retu();
    cout<<obj.quantity;
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct Classroom {
    
    string classname;
    string teachername;
    int students;
    
};


int main(){
    int n;
    cin>>n;
    Classroom obj[n];
    for(int i=0;i<n;i++){
        cin>>obj[i].classname;
        cin>>obj[i].teachername;
        cin>>obj[i].students;
    }
    int ans =0;
    for(int i=0;i<n;i++){
        ans+=obj[i].students;
    }
    cout<<ans;
    return 0;
}

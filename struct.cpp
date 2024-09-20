#include<bits/stdc++.h>
using namespace std;
struct name{
    int a;
    string c;
};
int main()
{
    int n ; cin >>n;
    name names[n];
    for(int i=0;i<n;i++){
        cin >> names[i].a >>names[i].c;
    }
    for(int i=0;i<n;i++){
        cout << names[i].a <<" " <<names[i].c;
    }
    
}
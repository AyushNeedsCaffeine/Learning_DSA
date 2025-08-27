#include<bits/stdc++.h>
using namespace std;

void greet(string name){
    cout<<"Hey! Good Morning "<<name<<"\n";
}

int main(){

string name;
getline(cin, name);
greet(name);

return 0;

}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, string> phonebook; 
    map <string,string>::iterator it;
    int n;
    cin>>n;
    string number;
    string name;
    
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>number;
        phonebook[name]=number;
    }

    // cout<<"Printing map values: "<<endl;
    // for(it=phonebook.begin();it!=phonebook.end();++it){
    //     cout<<"key: "<<it->first<<endl<<"value:"<<it->second<<endl<<endl;
    // }

    string query;
    while(cin>>query){
        it=phonebook.find(query);

        if(it!=phonebook.end()){
            cout<<it->first<<"="<<it->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}

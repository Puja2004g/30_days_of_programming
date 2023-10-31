#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try{
        int convert_to_int = stoi(S);
        cout<<convert_to_int;
    }
    catch(invalid_argument &e){
        cout<<"Bad String";
    }

    return 0;
}

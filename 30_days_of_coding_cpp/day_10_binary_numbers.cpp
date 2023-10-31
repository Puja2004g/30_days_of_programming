#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    // string n_temp;
    // getline(cin, n_temp);
    int n;
    cin>>n;

    // int n = stoi(ltrim(rtrim(n_temp)));
    //  int n = stoi(n_temp);
    
    vector<int> binary_value;
    
    int i=0, m;
    while(n>0){
        m=n%2;
        binary_value.push_back(m);
        n=n/2;
        i++;
    }
    
    int num_one = 0;
    int max_consecutive = 0;
    for (int i = 0; i < binary_value.size(); i++) {
        if (binary_value[i] == 1) {
            num_one++;
            if (num_one > max_consecutive) {
                max_consecutive = num_one;
            }
        } else {
            num_one = 0; // Reset the count of consecutive 1's
        }
    }

    cout << max_consecutive;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int a;
    double b;
    string c;
    
    cin>>a>>b;
    cin.ignore();
    getline(cin, c);
    
    int int_sum=a+i;
    double double_sum=d+b;
    string s_sum=s.append(c);
    
    cout<<int_sum<<endl<<fixed<<setprecision(1)<<double_sum<<endl<<s_sum;
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
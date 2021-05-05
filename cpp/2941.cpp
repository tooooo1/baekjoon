#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> v = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int a;
    string input;
    cin >> input;
    
    for (int i =0; i<8; i++) {
        a = input.find(v[i]);
        for (; a != string::npos; a = input.find(v[i])) {
            input.replace(a, v[i].length(),"@");
        }
    }

    cout << input.length();
}
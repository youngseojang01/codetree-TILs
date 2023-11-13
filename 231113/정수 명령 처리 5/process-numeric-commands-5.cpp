#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;

    for (int i=0; i<n; i++){
        string cmd;
        cin >> cmd;
        if (cmd == "push_back"){
            int a; cin >> a;
            vec.push_back(a);
        }
        else if (cmd == "pop_back"){
            vec.pop_back();
        }
        else if (cmd == "size"){
            cout << vec.size() << "\n";
        }
        else if (cmd == "get"){
            int k; cin >> k;
            cout << vec[k-1] << "\n";
        }
    }
    return 0;
}
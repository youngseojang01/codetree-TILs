#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n; cin >> n;
    queue<int> q;
    while (n--){
        string s;
        int num;
        cin >> s;
        if (s=="push"){
            cin >> num;
            q.push(num);
        }
        else if (s=="front"){
            cout << q.front() << "\n";
        }
        else if (s=="pop"){
            int frnt = q.front();
            q.pop();
            cout << frnt << "\n";
        }
        else if (s=="empty"){
            cout << q.empty() << "\n";
        }
        else if (s=="size"){
            cout << q.size() << "\n";
        }
    }
    return 0;
}
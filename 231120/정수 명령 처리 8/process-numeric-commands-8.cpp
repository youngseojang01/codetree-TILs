#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> l;
    for (int i=0; i<n; i++){
        string str; int num;
        cin >> str;
        if (str=="push_front"){
            cin >> num;
            l.push_front(num);
        }
        else if (str == "push_back"){
            cin >> num;
            l.push_back(num);
        }
        else if (str == "pop_front"){
            num = l.front();
            l.pop_front();
            cout << num << "\n";
        }
        else if (str == "pop_back"){
            num = l.back();
            l.pop_back();
            cout << num << "\n";
        }
        else if (str == "size"){
            cout << l.size() << "\n";
        }
        else if (str == "empty"){
            cout << l.empty() << "\n";
        }
        else if (str == "front"){
            cout << l.front() << "\n";
        }
        else if (str == "back"){
            cout << l.back() << "\n";
        }
    }
    return 0;
}
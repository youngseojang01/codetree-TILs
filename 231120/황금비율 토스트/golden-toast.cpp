#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    list<char> l;
    char c;
    for (int i=0; i<n; i++){
        cin >> c;
        l.push_back(c);
    }

    list<char>::iterator it = l.end(); // 빵들의 맨 뒤
    char recipe;
    char s;
    for(int i=0; i<m; i++) {
        cin >> recipe;
        if (recipe == 'L'){
            if (it==l.begin()) continue;
            it--;
        }
        else if (recipe == 'R'){
            if (it==l.end()) continue;
            it++;
        }
        else if (recipe == 'D'){
            if (it==l.end()) continue;
            it=l.erase(it);
        }
        else if (recipe == 'P'){
            cin >> s;
            l.insert(it, s);
        }
    }

    for(list<char>::iterator iter=l.begin(); iter!=l.end(); iter++){
        cout << *iter;
    }
    return 0;
}
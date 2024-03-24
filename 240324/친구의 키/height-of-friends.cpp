#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int n, m;
vector<vector<int>> friends;

vector<bool> visited;
stack<int> order;
void dfs(int here){
    visited[here] = true;
    for (int there=0; there<friends.size(); there++) {
        if (friends[here][there] && !visited[there]) dfs(there);
    }

    order.push(here);
}
void topological() {
    int n = friends.size();
    visited = vector<bool>(n, false);
    
    for (int i=0; i<n; i++){
        if (!visited[i]) dfs(i);
    }
}
void print() {
    for (int i=0; i<n; i++){
        cout << order.top() + 1 << " ";
        order.pop();
    }
    cout << "\n";
}

int main() {
    cin >> n >> m;

    visited = vector<bool>(n, false);
    friends = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i=0; i<m; i++){
        int from, to;
        cin >> from >> to;
        friends[from - 1][to - 1] = 1;
    }
    topological();
    print();

    return 0;
}
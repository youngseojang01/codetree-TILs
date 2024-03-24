#include <iostream>
#include <vector>
#include <stack>

#define MAX 100000
using namespace std;

int n, m;
vector<int> edges[MAX + 1]; // 인접 리스트
vector<vector<int>> friends;

bool visited[MAX + 1];
stack<int> order;

void dfs(int here){
    visited[here] = true;

    for (int i=0; i<edges[here].size(); i++){
        int there = edges[here][i];
        if (!visited[there]) dfs(there);
    }

    order.push(here);
}

void print() {
    for (int i=0; i<n; i++){
        cout << order.top() << " ";
        order.pop();
    }
    cout << "\n";
}

int main() {
    cin >> n >> m;

    for (int i=1; i<=m; i++){
        int from, to;
        cin >> from >> to;
        edges[from].push_back(to);
    }

    // 위상 정렬 dfs
    for (int i=1; i<=n; i++){
        if (!visited[i]) dfs(i);
    }

    print();

    return 0;
}
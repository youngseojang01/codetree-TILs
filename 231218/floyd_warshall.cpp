#include <iostream>
using namespace std;
#define MAX 100000

int main() {
  int graph[6][6];

  cout << "input: \n";
  for (int i=0; i<6; i++) {
    for (int j = 0; j < 6; j++) {
      if (i == j)
        graph[i][j] = 0;
      else 
        graph[i][j] = MAX;
      int num;
      cin >> num;
      if (num != 0) graph[i][j] = num;
    }
  }


  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      for (int k = 0; k < 6; k++) {
        if (graph[j][k] > graph[j][i] + graph[i][k]) {
          graph[j][k] = graph[j][i] + graph[i][k];
        }
      }
    }
  }

  cout << "output: \n";
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cout << graph[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}

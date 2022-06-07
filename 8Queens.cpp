#include <iostream>
#include <vector>
using namespace std;
char arr[2] = {'.', '*'};
// i take lazy aproach, I place a queen randomly and start to black out all squares next to it (diag and left/right)
void rec( vector<string> &vec, vector<pair<int, int>> queens) {
  if (queens.size() == 8) {
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        // look for set
        cout << arr[std::find(queens.begin(), queens.end(), make_pair(i, j)) != queens.end()];
      }
      cout << endl;
    }
    cout << endl;
  }
  if (queens.size() == 8 || vec.empty()) {
    // done(completed task)
    return;
  }
  // case two: if case one doesn't work, begin testing EVERY possible value for success
  for (int i = (queens.empty() ? -1 : queens.back().first) + 1; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (vec[i][j] != '*') {
        // allow pass
        bool fine = true;
        for (auto &q: queens) {
          // if(not fine) --> keep on going testing
          fine &= !(make_pair(i, j) == q || i == q.first || j == q.second || abs(i - q.first) == abs(q.second - j));
        }
        if (fine) {
          // if(everything works) --> recurse the function and begin the recursion that calls back all the original things
          queens.emplace_back(i, j);
          rec(vec, queens);
          queens.pop_back();
        }
      }
    }
  }
}
int main() {
  // literally what I did in the first part but with a string/char vector
  vector<string> vec(8);
  // case specific size
  vec.assign(8, "........");
  rec(vec, {});
}
// i could have done this with arr[x] but i cant make a function to pop back

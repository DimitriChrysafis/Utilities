#include <iostream>
#include <string>
using namespace std;
string encrypt(string input, int key) {
  assert (key >= 0);
  assert (key <= 25);
  string out;
  for (unsigned char c : input) {
    if (c <= 'z' and c >= 'a') {
      c += key;
      if (c > 'z') {
        c = 'a' + (c - 'z' - 1);
      }
    }
    if (c <= 'Z' and c >= 'A') {
      c += key;
      if (c > 'Z') {
        c = 'A' + (c - 'Z' - 1);
      }
    }
    out.push_back(c);
  }
  return out;
}

double letterScore(char ch) {
  if (ch == 'A' || ch == 'a') {
    return .0684;
  }
  if (ch == 'B' || ch == 'b') {
    return .0139;
  }
  if (ch == 'C' || ch == 'c') {
    return .0146;
  }
  if (ch == 'D' || ch == 'd') {
    return .0456;
  }
  if (ch == 'E' || ch == 'e') {
    return .1267;
  }
  if (ch == 'F' || ch == 'f') {
    return .0234;
  }
  if (ch == 'G' || ch == 'g') {
    return .0180;
  }
  if (ch == 'H' || ch == 'h') {
    return .0701;
  }
  if (ch == 'I' || ch == 'i') {
    return .0640;
  }
  if (ch == 'J' || ch == 'j') {
    return .0033;
  }
  if (ch == 'K' || ch == 'k') {
    return .0093;
  }
  if (ch == 'L' || ch == 'l') {
    return .0450;
  }
  if (ch == 'M' || ch == 'm') {
    return .0305;
  }
  if (ch == 'N' || ch == 'n') {
    return .0631;
  }
  if (ch == 'O' || ch == 'o') {
    return .0852;
  }
  if (ch == 'P' || ch == 'p') {
    return .0136;
  }
  if (ch == 'Q' || ch == 'q') {
    return .0004;
  }
  if (ch == 'R' || ch == 'r') {
    return .0534;
  }
  if (ch == 'S' || ch == 's') {
    return .0659;
  }
  if (ch == 'T' || ch == 't') {
    return .0850;
  }
  if (ch == 'U' || ch == 'u') {
    return .0325;
  }
  if (ch == 'V' || ch == 'v') {
    return .0084;
  }
  if (ch == 'W' || ch == 'w') {
    return .0271;
  }
  if (ch == 'X' || ch == 'x') {
    return .0007;
  }
  if (ch == 'Y' || ch == 'y') {
    return .0315;
  }
  if (ch == 'Z' || ch == 'z') {
    return .0004;
  }
  return 0.0;
}
double sentenceScore(string x) {
  double c = 0;
  for (int i = 0; i < x.length(); i++) {
    c += letterScore(x[i]);
  }
  return c;
}
string decrypt(string input) {
  double bestChoice = -1;
  string bestOutput;
  for(int i = 0; i < 26; i++){
    string temp = encrypt(input, i);
    double score = sentenceScore(temp);
    if (score > bestChoice){
      bestChoice = score;
      bestOutput = temp;
    }
  }
  return bestOutput;
}
int32_t main() {
  cout << "decrypt(1) or encrypt(2)?" << endl;
  int x;
  cin >> x;
  if (x == 2) {
    string s;
    cout << "input string" << endl;
    getline(cin >> ws, s);
    int key;
    cout << "input key" << endl;
    cin >> key;
    cout << encrypt(s, key);
  } else {
    string s;
    cout << "input string" << endl;
    getline(cin >> ws, s);
    cout << decrypt(s);
  }
}


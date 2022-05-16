#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class TicTacToe{
protected :

  string special[3][3];

public :
  string getrowcol(int r, int c) { return special[r][c]; }

  void getinfo() {
    cout << "Enter which box do you want to do (enter Row and Column numbers)" << endl;
  }

  void display() {
    for (int i = 0; i < 3; ++i) {
      for (int p = 0; p < 3; ++p) {
        cout << "   ";
        if (special[i][p] != "X" && special[i][p] != "O") {
          cout << "-";
        } else {
          cout << special[i][p];
        }
        cout << "   ";
      }
      cout << endl;
    }

  }
  bool check1(string a){
    int p;
    int gm;
    int inc = 0;

    for (gm = 0; gm < 3; ++gm) {
      inc = 0;
      for (p = 0; p < 3; ++p) {
        if (special[gm][p] == a) {
          inc++;
        }
      }
      if (inc == 3) {
        return 1;
      }
    }

    inc = 0;

    for (gm = 0; gm < 3; ++gm) {
      inc = 0;
      for (p = 0; p < 3; ++p) {
        if (special[p][gm] == a) {
          inc++;
        }
      }
      if (inc == 3) {
        return 1;
      }
    }

    inc = 0;

    for (gm = 0, p = 0; p < 3 and gm < 3; ++p, ++gm) {
      if (special[p][gm] == a) {
        inc++;
      }
    }
    if (inc == 3) {
      return 1;
    }

    inc = 0;
    for (gm = 2, p = 0; p < 3 && gm > 0; ++p, --gm) {
      if (special[gm][p] == a) {
        inc++;
      }
    }
    if (inc == 3) {
      return 1;
    } else {
      return 0;
    }

  }
  bool checkforplace(int r, int c)
  {
    if (special[r][c] == "X" || special[r][c] == "O") {
      return 0;
    } else {
      return 1;
    }
  }
};

class oneplayer : public TicTacToe {
protected:
  string playerLetter;
  string computerLetter;
public :
  string getPlayerLetter() {
  return playerLetter;
}
  string getComputerLetter() {
  return computerLetter;
}
  void choose(){
    string a;
    cout << "Which letter do you want to play with ?(enter ""X"" or ""O"")" << endl;
    cin >> a;
    while (a != "X" && a != "O") {
      cout << "invalid input please enter X or O" << endl;
      cin >> a;

    }
    playerLetter = a;
    if (a == "X") {
      computerLetter = "O";
    } else {
      computerLetter = "X";
    }
  }

  void enternumber(int r, int c) {
    r -= 1;
    c -= 1;

    if (checkforplace(r, c)) {
      special[r][c] = playerLetter;
    } else {
      cout << "invalid entry place is taken please try again" << endl;
    }
  }
  void playcomputer() {
    while (1) {
      int r = rand() % 3;
      int c = rand() % 3;
      if (checkforplace(r, c)) {
        special[r][c] = computerLetter;
        break;
      }
    }
  }
};

class twoPlayer : public TicTacToe {
protected:
  string player1;
  string player2;
public:
  string GetPlayerOneFactor() {
    return player1;
  }
  string getPlayerTwoCharacter() {
    return player2;
  }
  void choose(){
    string a;
    cout << "Player1 which letter do you want to start with ?(enter ""X"" or ""O"")" << endl;
    cin >> a;
    while (a != "X" && a != "O") {
      cout << "fake input please enter X or O" << endl;
      cin >> a;
    }
    player1 = a;
    if (a == "X") {
      player2 = "O";
    } else {
      player2 = "X";
    }
    cout << "Player2 got the " << getPlayerTwoCharacter() << " letter" << endl;
  }
  void enternumber(string pl, int ran, int walk) {
    ran -= 1;
    walk -= 1;

    if (checkforplace(ran, walk)) {
      special[ran][walk] = pl;
    } else {
      cout << "nah dude pick a real number that ones invalid idk why" << endl;
    }
  }

};

int main() {
  int p;

  cout <<"≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥"  << endl;
  cout << "Enter 1 to play against computer " << endl << "Enter 2 to play with another player" << endl;
  cout << "≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥≥" << endl;
  cin >> p;

  if (p == 1) {
    int temp1, tmp2;
    oneplayer ba;
    ba.choose();
    ba.display();
    while (1) {
      ba.getinfo();
      cin >> temp1 >> tmp2;
      ba.enternumber(temp1, tmp2);
      ba.display();
      if (ba.check1(ba.getPlayerLetter())) {
        cout << "Player " << ba.getPlayerLetter() << " has won niiiiiice" << endl;
        break;
      }
      cout << "computer makes its move!" << endl;
      ba.playcomputer();
      ba.display();
      if (ba.check1(ba.getComputerLetter())) {
        cout << "Player " << ba.getComputerLetter() << " has won niiiiiice" << endl;
        break;
      }
    }
  }

  if (p == 2) {
    int im1, im2;
    twoPlayer t3mp;
    t3mp.choose();
    t3mp.display();
    cout << "Player1 starts the game " << endl << endl;
    while (1) {
      cout << "Player one turn" << endl;
      t3mp.getinfo();
      cin >> im1 >> im2;
      t3mp.enternumber(t3mp.GetPlayerOneFactor(), im1, im2);
      t3mp.display();
      if (t3mp.check1(t3mp.GetPlayerOneFactor())) {
        cout << "Player " << t3mp.GetPlayerOneFactor() << " has won nice job bro" << endl;
        break;
      }
      cout << "Player Two's Turn" << endl;
      t3mp.getinfo();
      cin >> im1;
      cin >> im2;
      t3mp.enternumber(t3mp.getPlayerTwoCharacter(), im1, im2);
      t3mp.display();
      if (t3mp.check1(t3mp.getPlayerTwoCharacter())) {
        cout << "Player " << t3mp.getPlayerTwoCharacter() << " has won nicr job bro" << endl;
        break;
      }
    }
  }
}

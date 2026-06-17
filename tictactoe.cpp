#include <bits/stdc++.h>
using namespace std;
int a[3][3];
bool makeMove(int r, int c, int val){
  if(!(r >= 0 && c >= 0 && r < 3 && c < 3))  return true;
  a[r][c] = val;
  return false;
}
void display(){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout << a[i][j] << '\t';
    }
    cout << "\n\n";
  }
}
int main(){
  cout << "Welcome to my TicTacToe Game :)" << '\n';
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      a[i][j] = -1;
    }
  }
  display();
  cout << "Lets Play!!!" << '\n';
  int ch = 0;
  for(int i = 0; i < 9; i++){
    cout << "Make your move Player:\t" << !ch << '\n';
    int r, c;
    cin >> r >> c;
    if(makeMove(r - 1, c - 1, !ch)){
      cout << "Invalid Move!!! \nPlease Make Your Move Again" << '\n';
      i--;
      continue;
    }
    ch = !ch;
    display();
  }

}

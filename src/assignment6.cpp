/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jose Malave
 */
//ex06

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void Add(int x, int y);
void Subtract(int x, int y);
void checker(int x, int y);

int main() {
  int a, b;

  cin >> a >> b;
  Add(a, b);
  Subtract(a, b);
  checker(a,b);

  return 0;
}

void Add(int x, int y)
{
  cout << x + y << "\n";
}

void Subtract(int x, int y)
{
  cout << x - y << "\n";
}

void checker(int x, int y)
{
  if(x>y){
    cout << x << " is greater than" << y << "\n";
  }
  else if(x == y){
    cout << x << " is equal to" << y << "\n";
  }
  else{
    cout << y << " is greater than" << x << "\n";
  }
}
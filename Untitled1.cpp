 #include <iostream>
using namespace std;

int main() {
  int myAge;
  int votingAge;
  
  cout<<"how old are you?";
  cin >> myAge;
  
  cout << "qual a idade minima para votar?";
  cin >>votingAge;

  if (myAge >= votingAge) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }
  return 0;
}


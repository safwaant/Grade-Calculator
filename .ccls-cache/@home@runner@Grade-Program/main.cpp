#include <iostream>
#include <fstream>;
using namespace std;

static const double HW_WEIGHT = 0.35;
static const double MIDTERM_WEIGHT = 0.30;
static const double FINAL_WEIGHT = 0.35;

int main() {
  cout << "Enter Your Assignment: ";
  double assignTotal(0.0);
  int nums(0);  
  string temp("");  
  while(getline(cin, temp)){
    assignTotal += stod(temp); 
    ++nums;  
  }
  double assignAvg(assignTotal / (30 * nums));
  cout << "Enter your Midterm Score: ";
  double midtermScore(0.0);  
  cin >> midtermScore;
  cout <<   
}
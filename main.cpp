#include <iostream>
#include <sstream>
using namespace std;

static const double HW_WEIGHT = 0.35;
static const double MIDTERM_WEIGHT = 0.30;
static const double FINAL_WEIGHT = 0.35;

int main() {
  cout << "Enter Your Assignment: ";

  double assignTotal(0.0);
  int nums(0);  
  string temp(""); 
  getline(cin, temp);
  stringstream str(temp);   
  while(str >> temp){
    assignTotal += stod(temp); 
    ++nums;  
  } 

  double hwAvg((assignTotal / (30 * nums)) * 100);
  cout << "Enter your Midterm Score: ";
  double midtermScore(0.0);  
  cin >> midtermScore;
  cout << "Enter your Final score: ";
  double finalScore(0.0);
  cin >> finalScore;
  double weightedAvg = ((HW_WEIGHT * hwAvg)
    + (MIDTERM_WEIGHT * midtermScore) 
    + (FINAL_WEIGHT * finalScore)) 
    / (HW_WEIGHT + MIDTERM_WEIGHT + FINAL_WEIGHT); 

  cout << "-----------------------------\n" 
  << "Your course avg: " 
  << weightedAvg 
  << endl 
  << "-----------------------------" 
  << endl;  
}
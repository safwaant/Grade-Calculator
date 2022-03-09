#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

static const double HW_WEIGHT = 0.35;
static const double MIDTERM_WEIGHT = 0.30;
static const double FINAL_WEIGHT = 0.35;
static const double HW_PTS = 30.0;

int main() {
  // starting line inputs assignments token by token
  cout << "Enter Your Assignments Scores (Each seperated by a space): ";

  // declaring varaibles to store assignment data
  double assignTotal(0.0); int nums(0); string temp(""); 
  
  // read all assignments inputted from user
  getline(cin, temp);
  stringstream str(temp);   
  while(str >> temp){
    assignTotal += stod(temp); 
    ++nums;  
  } 

  // find average score for homework
  double hwAvg((assignTotal / (HW_PTS * nums)) * 100);

  // get and store midterm score
  cout << "Enter your Midterm Score: ";
  double midtermScore(0.0);  
  cin >> midtermScore;

  // get and store final score
  cout << "Enter your Final score (Or expected score): ";
  double finalScore(0.0);
  cin >> finalScore;

  // calculate final weighted average
  double weightedAvg = ((HW_WEIGHT * hwAvg)
    + (MIDTERM_WEIGHT * midtermScore) 
    + (FINAL_WEIGHT * finalScore)) 
    / (HW_WEIGHT + MIDTERM_WEIGHT + FINAL_WEIGHT); 

  // output result
  cout << "\n-----------------------------\n" 
  << "Your course avg: " 
  << weightedAvg 
  << endl 
  << "-----------------------------" 
  << endl;  

  int roundedAvg = static_cast<int>(round(weightedAvg));
  /*
  double gpa(0.0);
  switch(roundedAvg){
    case(99):
      gpa = 4.0;
      break;
    case(9):
      gpa = 4.0;
      break;
    case(99):
      gpa = 4.0;
      break;  
  }
  */
}
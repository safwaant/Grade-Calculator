#include <iostream>

#include <sstream>

#include <cmath>

using namespace std;

static const double HW_WEIGHT = 0.35;
static const double MIDTERM_WEIGHT = 0.30;
static const double FINAL_WEIGHT = 0.35;
static const double HW_PTS = 30.0;

void printGPA(double gpa) {
  cout.precision(1);
  cout << "Your GPA" << endl <<
    "(Disclaimer: GPA is estimated based off of syllabus subject to change)" <<
    "\n---------------------------------------------------------------------\n"
     << fixed << gpa << endl;
}

int main() {
  // starting line inputs assignments token by token
  cout << "Enter Your Assignments Scores (Each seperated by a space): ";

  // declaring varaibles to store assignment data
  double assignTotal(0.0);
  int nums(0);
  string temp("");

  // read all assignments inputted from user
  getline(cin, temp);
  stringstream str(temp);
  while (str >> temp) {
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
  double weightedAvg = ((HW_WEIGHT * hwAvg) +
      (MIDTERM_WEIGHT * midtermScore) +
      (FINAL_WEIGHT * finalScore)) /
    (HW_WEIGHT + MIDTERM_WEIGHT + FINAL_WEIGHT);

  // output result
  cout << "\n-----------------------------\n" <<
    "Your course avg: " <<
    weightedAvg <<
    endl <<
    "-----------------------------" <<
    endl;

  int roundedAvg = static_cast < int > (round(weightedAvg));
  double gpa(0.0);

  if (roundedAvg >= 90) {
    switch (roundedAvg) {
    case (100):
    case (99):
      gpa = 4.0;
      printGPA(gpa);
      break;
    case (98):
      gpa = 3.9;
      printGPA(gpa);
      break;
    case (97):
      gpa = 3.8;
      printGPA(gpa);
      break;
    case (96):
    case (95):
      gpa = 3.7;
      printGPA(gpa);
      break;
    case (94):
    case (93):
      gpa = 3.6;
      printGPA(gpa);
      break;
    case (92):
    case (91):
    case (90):
      gpa = 3.5;
      printGPA(gpa);
      break;
    }
  } else if (roundedAvg >= 80) {
    switch (roundedAvg) {
    case (89):
      gpa = 3.4;
      printGPA(gpa);
      break;
    case (88):
      gpa = 3.3;
      printGPA(gpa);
      break;
    case (87):
    case (86):
      gpa = 3.2;
      printGPA(gpa);
      break;
    case (85):
    case (84):
      gpa = 3.1;
      printGPA(gpa);
      break;
    case (83):
      gpa = 3.0;
      printGPA(gpa);
      break;
    case (82):
      gpa = 2.9;
      printGPA(gpa);
      break;
    case (81):
      gpa = 2.8;
      printGPA(gpa);
      break;
    case (80):
      gpa = 2.7;
      printGPA(gpa);
      break;
    }
  } else {
    switch (roundedAvg) {
    case (79):
      gpa = 2.6;
      printGPA(gpa);
      break;
    case (78):
      gpa = 2.5;
      printGPA(gpa);
      break;
    case (77):
    case (76):
      gpa = 2.4;
      printGPA(gpa);
      break;
    case (75):
      gpa = 2.3;
      printGPA(gpa);
      break;
    case (74):
      gpa = 2.2;
      printGPA(gpa);
      break;
    case (73):
      gpa = 2.1;
      printGPA(gpa);
      break;
    case (72):
      gpa = 2.0;
      printGPA(gpa);
      break;
    default:
      cout << "Below Passing < 2.0" << endl;
      break;
    }
  }
}
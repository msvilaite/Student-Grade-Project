// M. Svilaite Project 1

#include <iostream>
using namespace std;


int getNumberOfStudents (int& students);

void initialize (int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF);

void getNumberGrade (int& grade, int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF);

void classifyGrades (int grade, int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF);

void printResults (int countGradeA, int countGradeB, int countGradeC, int countGradeD, int countGradeF);

int main()
{
  int grade;
  int countGradeA, countGradeB, countGradeC, countGradeD, countGradeF;
cout << endl << "GRADE STATISTICS" << endl;
cout << endl << "---------------------------------------" << endl;

initialize (countGradeA, countGradeB, countGradeC, countGradeD, countGradeF);
getNumberGrade (grade, countGradeA, countGradeB, countGradeC, countGradeD, countGradeF);
printResults(countGradeA, countGradeB, countGradeC, countGradeD, countGradeF);

return 0;
}

int getNumberOfStudents (int& students)
{
do{
  cout << "\nPlease enter the number of students: ";
  cin >> students;
  if (students<=0)
  {cout << "Invalid input. Please re-enter.\n";
   continue;
  }
  else
  return students;
}while(true);
}

void initialize (int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF)
{
countGradeA=0;
countGradeB=0;
countGradeC=0;
countGradeD=0;
countGradeF=0;
}

void getNumberGrade (int& grade, int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF)
{
  int students;
  int counter = 0;
  getNumberOfStudents(students);
  do{
  cout << "\nPlease enter a number of grade between 0 and 100: ";
  cin >> grade;
  if (grade<0 || grade>100)
  cout << "Invalid grade! Please re-enter.\n";
  else
  {counter++;
   classifyGrades(grade, countGradeA, countGradeB, countGradeC, countGradeD, countGradeF);
   }
}while(counter<students);
}

void classifyGrades (int grade, int& countGradeA, int& countGradeB, int& countGradeC, int& countGradeD, int& countGradeF)
{
if (grade>=0 && grade<60)
countGradeF++;
else if (grade>=60 && grade<70)
countGradeD++;
else if (grade>=70 && grade<80)
countGradeC++;
else if (grade>=80 && grade<90)
countGradeB++;
else if (grade>=90 && grade<=100)
countGradeA++;
}

void printResults (int countGradeA, int countGradeB, int countGradeC, int countGradeD, int countGradeF)
{
cout << endl;
cout << "GRADES\tNUMBER OF STUDENTS\n";
cout << "------\t------------------\n";
cout << "A\t\t" << countGradeA << endl;
cout << "B\t\t" << countGradeB << endl;
cout << "C\t\t" << countGradeC << endl;
cout << "D\t\t" << countGradeD << endl;
cout << "F\t\t" << countGradeF << endl;
cout << "\nPROGRAM ENDING. GOOD BYE!";
cout << "\n---------------------------------------\n\n";
}

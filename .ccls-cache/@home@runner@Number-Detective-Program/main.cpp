/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 1-1
Name:           Jeffrey Leong
Date:           Feb 3, 2022

Purpose:        Ask for user input twice. Detect negative and non-negative numbers. Find the sum of the numbers.
Input:          first number, second number
Output:         sum of first number and second number.
===============================================================================================================*/

#include <iostream>
using namespace std;


int main() {
  // Variables
  double first_num = 0;
  double second_num = 0;
  double sum = 0;

  // Input Output
  cout << "Welcome to Number Detective!\n\n";
  cout << "Please enter a number: ";
  cin >> first_num;
  cout << endl;
  if (first_num <0){
      cout << first_num << " is a negative number.";
    } else {
      cout << first_num << " is a non-negative number.";
    }
  cout << endl;
  cout << endl;

  cout << "Please enter a number: ";
  cin >> second_num;
  cout << endl;
  if (second_num <0){
      cout << second_num << " is a negative number.";
    } else {
      cout << second_num << " is a non-negative number.";
    }
  cout << endl;
  cout << endl;

  // Compute
  sum = first_num + second_num;

  // Result
  cout << "The sum of the numbers is: " << sum << "\n\n";
  cout << "Bye for now!";
  return 0;
}

// first_num        second_num        sum
// 18               99                117
// -976.4           1000              23.7
// 7.452            -99               -91.548
// 209841           -975839           -765998
// 763              992               1755

/*===================================================================================================================
Problems I had working on this assignment (and how I overcame these problems)

1. Spacing. I had trouble getting the program to space out the way the assignment asks. I got it to space right by trial and error, seeing what happens to the output when I put the new line commands in.

2. Getting the negative numbers. I wasn't sure on how to get the negative numbers but I remembered in the video that you did a mathmatical less than sign for the if, else statements. 

Others things I would like to share:

1. Reading the book, watching the videos and working through the paycheck program helped with solving this task.

2. Initially, I had my variables set to "int" and I broke it by spamming a ton of numbers. The program did not do what I wanted it to do, then I looked back at the assignment and saw the decimal numbers in the examples. I changed my "int" into "double" and my program started to work. It took the big numbers and gave me e answers instead of breaking. And now my program takes decimal numbers. 
======================================================================================================================*/
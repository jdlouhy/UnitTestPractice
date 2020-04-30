#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if( second < third )
  {
    int temp = second;
    second = third;
    third = temp;
  }
//This case was removed, it was found to be unreachable code via coverage.io
/*  if( first < third )
  {
    int temp = first;
    first = third;
    third = temp;
  }
*/
  //added for bug fix
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  for(int i=0; i < input.size(); i++)
  {
    if( input[i] < 'A' || input[i] > 'Z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');
    }
  }
  for(int i=0; i < input.size()/2; i++)
  {
    if( input[i] != input[input.size()-1-i] )
      return false;
  }
  return true;
}

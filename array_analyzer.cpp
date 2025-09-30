#include <iostream> 
using namespace std; 
void arrayAnalyzer(int size, int number[]) { 
cout << "Enter ten integers of your choice:\n";
 for (int i = 0; i < size; i++) {
 cout << "Number " << i + 1 << ": "; cin >> number[i];
 } 
cout << "\nYOU ENTERED THESE NUMBERS:\n";
 for (int i = 0; i < size; i++) {
 cout << "NUMBER " << i + 1 << ": " << number[i] << "\n";
 } 
int evenNumbers = 0,
int  oddNumbers = 0; 
for (int i = 0; i < size; i++) {
 if (number[i] % 2 == 0) evenNumbers++;
 else oddNumbers++; 
} 
cout << "\nThere are: " << evenNumbers << " even numbers!\n"; 
cout << "There are: " << oddNumbers << " odd numbers!\n";
 int largest = number[0]; 
int secondLargest = number[0]; 
for (int i = 1; i < size; i++) { 
if (number[i] > largest) {
 secondLargest = largest; // old largest becomes 
second largest = number[i]; 
} else if (number[i] > secondLargest && number[i] != largest) {
 secondLargest = number[i];
 } 
} cout << "The largest number is: " << largest << "\n"; 
cout << "The second largest number is: " << secondLargest << "\n";
 }
 int main() {
 const int SIZE = 10;
 int number[SIZE]; 
arrayAnalyzer(SIZE, number); 
return 0; 
} 

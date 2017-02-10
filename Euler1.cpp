#include <iostream>
#include <vector>

// Project Euler 
// Multiples of 3 and 5
// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

int main(int argc, char **argv)
{
	std::vector<int> merged;
	std::vector<int>::iterator it;
	int total = 0;
	
	for (int a = 0; a < 1000; a = a + 3) {
		it = merged.begin();
		it = merged.insert(it,a);
	}
	for (int b = 0; b < 1000; b = b + 5) {
		it = merged.begin();
		it = merged.insert(it,b);
	}
	sort( merged.begin(), merged.end() );
	merged.erase( unique( merged.begin(), merged.end() ), merged.end() );
	for(std::vector<int>::iterator it1 = merged.begin(); it1 != merged.end(); ++it1)
		total += *it1;
	std::cout << "total value of elements summed: " << total << std::endl;
	return 0;
}

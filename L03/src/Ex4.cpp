#include <iostream>
using namespace std;

void swapNums(char **x, char **y) {    
	char *z = *x;
	*x = *y;
	*y = z;
}

int main() {
	char *firstNum = "Hej";
	char *secondNum = "Farvel";

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(&firstNum, &secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	return 0;
}

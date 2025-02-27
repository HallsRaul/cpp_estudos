#include <iostream>

int main() {

    /*if you're creating a 2D array, you need to put two sets of brackets
    the first set of brackets is for the number of rows and the second set is for the columns*/
	std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
					         {"Corvette", "Equinox", "Silverado"},
					         {"Challenger", "Durango", "Ram 1500"}
                            };

	int rows = sizeof(cars)/sizeof(cars[0]);
	int columns = sizeof(cars[0])/sizeof(cars[0][0]);

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			std::cout << cars[i][j] << " ";
		}
		std::cout << '\n';
	}

    return 0;
}
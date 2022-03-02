#include "Common.h"

int main(int argc, char* argv[]) {

	std::cout << "Starting args" << endl;

	for (int i = 0; i < argc; ++i) {

		if (std::string(argv[i]) == "--Extra") {

			pouVitalsCheck();

		}

	}

	
	std::cout << "Done with args" << endl;
	//pouVitalsCheck();

	std::cin.get();

	return 0;
}
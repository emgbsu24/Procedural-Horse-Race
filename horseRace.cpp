#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	const int horsesNum = 5;
	const int track = 15;

	int horses[horsesNum] = {0, 0, 0, 0, 0};
	bool winner = false;
	std::srand(std::time(NULL));

	std::cout << "This is a horse racing game. May the best horse win." << std::endl;

	while (!winner) {
		std::cout << "Press ENTER for another turn" << std::endl;
		std::cin.get();

		for (int i = 0; i < horsesNum; i++) {
			advance(i, horses);
			printLane(i, horses);

			if (isWinner(i, horses)) {
				std::cout << "Horse " << i << " WINS!" << std::endl;
				winner = true;
			}
		}
		std::cout << std::endl;
	}

	return 0;
}

void advance(int horseNum, int horses[]) {
	int coin = std::rand() % 2;
	if (coin == 1) {
		horses[horseNum]++;
	}
}
void printLane(int horseNum, int horses[]) {
	std::cout << horseNum << ".";
	for (int i = 0; i < horses[horseNum]; i++) {
		std::cout << ".";
	}
	std::cout << horseNum << std::endl;
}
bool isWinner(int horseNum, int horses[]) {
	if (horses[horseNum] >= 15) {
		return true;
	}
	return false;
}
		 

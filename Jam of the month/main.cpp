#include <iostream>

int main() {
	std::cout << "Package A :\n - $8/month \n - Includes 2 jams per month \n - Additional jam is $5" << std::endl;
	std::cout << "Package B :\n - $12/month \n - Includes 4 jams per month \n - Additional jam is $4" << std::endl;
	std::cout << "Package C :\n - $15/month \n - Includes 6 jams per month \n - Additional jam is $3 \n" << std::endl;
	
	int choice = 1;
	int package = 1;
	int jamBuyed = 0;
	int additionalJam = 0;
		
	std::cout << "Choose a Package : A | B | C" << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "You choose package A \n";
		package = 1;
		break;
	case 2:
		std::cout << "You choose package B \n";
		package = 2;
		break;
	case 3:
		std::cout << "You choose package C \n";
		package = 3;
		break;
	default:
		std::cout << "An error has occurred \n";
		break;
	}

	while (true)
	{
		std::cout << "Enter the number of jams buyed this month : " << std::endl;
		std::cin >> jamBuyed;
		
		switch (package)
		{
		case 1:
			additionalJam = jamBuyed - 2;
			if (additionalJam > 0) {
				std::cout << "You have to pay :" << (additionalJam * 5) + 8 << "$" << std::endl;
			}
			break;
		case 2:
			additionalJam = jamBuyed - 4;
			if (additionalJam > 0) {
				std::cout << "You have to pay :" << (additionalJam * 4) + 12 << "$" << std::endl;
			}
			break;
		case 3:
			additionalJam = jamBuyed - 6;
			if (additionalJam > 0) {
				std::cout << "You have to pay :" << (additionalJam * 3) + 15 << "$" << std::endl;
			}
			break;
		default:
			break;
		}


	}
}
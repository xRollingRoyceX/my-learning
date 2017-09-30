#include <iostream>
using namespace std;
int main()
{	
	int data_sets = 0;

	std::cout << "how many data sets do you wish to calculate: " << std::endl;
	std::cin >> data_sets;
	std::cout << "enter data_sets: " << std::endl;
	
	double s_HOLD = 0;
	double d_HOLD = 0;
	double sys_bp = 0;
	double dist_bp = 0;

	for(int i = 0; i < data_sets; i++){

		std::cin >> sys_bp >> dist_bp;	
		s_HOLD += sys_bp / (data_sets);	
		d_HOLD += dist_bp / (data_sets);
	
	}

	std::cout << "The Blood Pressure Average is: " << std::endl;
	std::cout << s_HOLD << "/" << d_HOLD << std::endl;
}

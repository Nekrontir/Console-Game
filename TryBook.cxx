//Die Roller
#include <iostream>
#include <cstdlib>
#include  <ctime>

using namespace std;


int main(int argc, char **argv)
{
	srand (static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 6)+ 1;
	cout << "You roled a " << die << endl;
	return 0;
}


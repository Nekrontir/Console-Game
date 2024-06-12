#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string word1 = "Game";
	string word2 ("Over");
	string word3 (3, '!');
	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is: " << phrase << "\n\n";
	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
	cout << "The character at position 0 is:  " << phrase[0] <<"\n\n";
	cout << "Changing the character at position 0. \n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";
	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is " << phrase[i] << endl;
	}
	cout<< "\nThe sequense 'Over' begins at location ";
	cout << phrase.find("Over") << endl;
	if (phrase.find("eggplanet") == string::npos)
	{
		cout << "'eggplanet' is not in the phrase. \n\n";
	}
	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;
	if(phrase.empty())
	{
		cout << "\nThe phraseis no more. \n";
	}
	system ("pause");
	return 0;
}



//word_jamble (Словомеска - угадай слово)
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char **argv)
{
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = 
	{
		{"wall", "Do you feel you're bangigng your head against somthing?"},
		{"glasses", "These might help you see thr answer."},
		{"labored", "Going slowly, is it ?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."}
	};
	srand (static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the latters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game\n\n";
	cout << "The jumble is: " << jumble;
	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;
	while((guess != theWord)&& (guess != "quit"))
	{
		if(guess == "hint")
		{ cout << theHint;}
		else
		{ cout << "Sorry, that's not it.";}
		cout << "\n\nyour guess: ";
		cin >> guess;
	} 
	if (guess == theWord)
	{ cout << "\nThat's it! You guessed it!\n";}
	cout << "\nThanks for playing.\n";
	
	system("pause");
	return 0;
}


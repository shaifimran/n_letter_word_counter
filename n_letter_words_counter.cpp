#include<iostream>

using namespace std;

/*This program will count the words comprising of n letters('n' will be decided by the user).It will first check if the character is an english alphabet
and then check the succeeding n-1 letters whether they are english alphabet or not. The program will then check the nth
character if it is a symbol or not. If all the conditions are satisfied counter will get incremented.*/

int n_letter_words_counter(char* s, int n) {
	int count = 0;
	int i;

	for (;*s != '\0';s++) {
		i = 0;
		while (i < n && ((*(s + i) >= 'A' && *(s + i) <= 'Z') || (*(s + i) >= 'a' && *(s + i) <= 'z'))) {
			i++;
		}

		if (i == n) {
			if ((!((*(s + i) >= 'A' && *(s + i) <= 'Z') || (*(s + i) >= 'a' && *(s + i) <= 'z')) || (*(s + i) == '\0')) && (!((*(s - 1) >= 'A' && *(s - 1) <= 'Z') || (*(s - 1) >= 'a' && *(s - 1) <= 'z')) || (*(s - 1) == '\0'))) {
				count++;
			}
			s = s + i;
		}
	}

	return count;
}

int main() {

	char string[] = "I am Muhammad Shaif Imran. I am a student at the Department of Computer Science, FAST, NUCES, Islamabad.";
	cout << n_letter_words_counter(string, 5);

	return 0;
}
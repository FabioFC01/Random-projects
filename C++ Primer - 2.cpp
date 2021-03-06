// example with structures
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct film_t {
	char title[50];
	int year;
} mine, your;

void printFilm(film_t film);

int main()
{
	film_t mine = {
		"2001 a space odyssey" , 1968 };
	//cin data
	cout << "Tell me the title: ";
	cin.getline(your.title, 50);
	cout << "Tell me the year: ";
	cin >> your.year;

	cout << "My favourite film is:\n ";
	printFilm(mine);
	cout << "Your is:\n ";
	printFilm(your);
	system("pause");
	return 0;
}

void printFilm(film_t film)
{
	cout << film.title;
	cout << " (" << film.year << ")\n";
}
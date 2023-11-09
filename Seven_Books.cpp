#include "Seven_Books.h"
//setters
void Seven_Books::set_isPopular(bool t)
{
	isPopular == t;
}

void Seven_Books::set_booknum(int i)
{
	booknum = i;
}

void Seven_Books::set_title(string s)
{
	title = s;
}

void Seven_Books::set_symbol(char z)
{
	symbol = z;
}

//getters
string Seven_Books::get_isPopular()
{
	string words;
		if (isPopular == true)
		{
			words = "One of the popular books in the 7 book series";
				return words;
		}
	else if (isPopular == false)
	{
		words = "Not a popular book in the series of 7 books.";
	}
		
}

int Seven_Books::get_booknum()
{
	return booknum;
}

string Seven_Books::get_title()
{
	return title;
}

char Seven_Books::get_symbol()
{
	return symbol;
}

//constructors default to parameterized
Seven_Books::Seven_Books()
{
	isPopular = true;
	booknum = 1;
	title = "Harry Potter And The Sorcerer's Stone.";
	symbol = '$';
}

Seven_Books::Seven_Books(string s, int i, bool t, char z)
{
	isPopular = t;
	booknum = i;
	title = s;
	symbol = z;
}


#include <iostream>
#include <string>
using namespace std;
#include "Seven_Books.h"

void print(Seven_Books);
int main(void)
{
	cout << "Key of symobls: \n";
	cout << " $ = best selling book! \n % = worst selling book. \n * = most popular book! \n ! = least popular book. \n @ = Dylan's favorite book! \n # Kamal's favorite book! \n & = Deveon's favorite book!\n\n";
	Seven_Books bestSelling;
	Seven_Books leastPopular("Harry Potter and the Chamber of Secrets.", 2 , false, '!');
	Seven_Books mostPopular;
	mostPopular.set_isPopular(true);
	mostPopular.set_booknum(6);
	mostPopular.set_title("Harry Potter And The Half Blood Prince.");
	mostPopular.set_symbol('*');
	print(bestSelling);
	print(leastPopular);
	print(mostPopular);
	
	return 0;
};

void print(Seven_Books books)
{
	cout << "| " << books.get_title() << "| This is Book #" << books.get_booknum() << "| " << books.get_isPopular() << "|" << books.get_symbol() << "| \n";
	
}
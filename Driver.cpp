// This program has seven of the most popular Harry Potter books according to https://vanderbilthustler.com/2022/01/12/from-worst-to-best-the-harry-potter-books-ranked/ (and my personal bias!).
// It will print out the best-selling, least-popular, and most-popular of the books.
// It will also compare which of the two books chosen is more popular, least popular, and better selling.
#include <iostream>
#include <string>
using namespace std;
#include "Seven_Books.h"
enum ReturnType{LESS, EQUAL, GREATER};
void print(Seven_Books);
void Compare(Seven_Books, Seven_Books);
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
	Compare(mostPopular, bestSelling);
	Compare(leastPopular, bestSelling);
	Compare(mostPopular, leastPopular);
	return 0;
};

void print(Seven_Books books)
{
	cout << "| " << books.get_title() << "| This is Book #" << books.get_booknum() << "| " << books.get_isPopular() << "|" << books.get_symbol() << "| \n\n";

}

void Compare(Seven_Books book1, Seven_Books book2)
{
	
	if (book1.get_isPopular() > book2.get_isPopular())
	
		cout << book1.get_title() << " is greater in popularity than " << book2.get_title() << "\n\n";
	
	else if (book1.get_isPopular() < book2.get_isPopular())
		cout << book1.get_title() << " has less popularity than " << book2.get_title() << "\n\n";
	
	else if (book1.get_isPopular() == book2.get_isPopular())
		cout << book1.get_title() << " Both books are equal in popularity " << book2.get_title() << "\n\n";
	//done
}

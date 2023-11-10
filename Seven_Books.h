#pragma once
#include <iostream>
#include <string>
using namespace std;

class Seven_Books
{
private:
	bool	isPopular;
	int		booknum;
	string	title;
	char	symbol;

public:
	//setters
	void	set_isPopular(bool);
	void	set_booknum(int);
	void	set_title(string);
	void	set_symbol(char);

	//getters
	string   get_isPopular();
	int	   get_booknum();
	string get_title();
	char   get_symbol();

	//constructors organized from deafult to parameterized constructor
	Seven_Books();
	Seven_Books(string,int,bool,char);	
};


#pragma once
#include <string>
class Book
{
private:
	int id = -1;
	std::string title;
	std::string author;
	int pages;

public:
	void setId(int id);
	int getId();
	void setTitle(std::string title);
	std::string getTitle();
	void setAuthor(std::string author);
	std::string getAuthor();
	void setPages(int pages);
	int getPages();
};


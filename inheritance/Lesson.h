#pragma once
#include <iostream>
#include <string>
using namespace std;
#define DEBUG

class Lesson
{
protected:
	string title;
	string info;
private:
	string homework;
public:
	Lesson();
	Lesson(string title, string info, string homework);
	~Lesson();

	void setTitle(string title);
	void setInfo(string info);
	void setHomework(string homework);

	string getTitle() const;
	string getInfo() const;
	string getHomework() const;

	void showInfo() const;




};


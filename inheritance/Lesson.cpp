#include "Lesson.h"

Lesson::Lesson()
{
	title = "undefind";
	info = "undefind";
	homework = "undefind";
#ifdef DEBUG
	cout << "base class lesson: "<< title << endl;
#endif
}

Lesson::Lesson(string title, string info, string homework)
{
	this->title = title;
	this->info = info;
	this->homework = homework;
	
#ifdef DEBUG
	cout << "base class lesson: " <<title << endl;
#endif
}

Lesson::~Lesson()
{

#ifdef DEBUG
	cout << "destroyd base class lesson: " << title << endl;
#endif
}

void Lesson::setTitle(string title)
{
	this->title = title;
}

void Lesson::setInfo(string info)
{
	this->info = info;
}

void Lesson::setHomework(string homework)
{
	this->homework = homework;
}

string Lesson::getTitle() const
{
	return title;
}

string Lesson::getInfo() const
{
	return info;
}

string Lesson::getHomework() const
{
	return homework;
}

void Lesson::showInfo() const
{
	cout << "title: " << title << endl;
	cout << "info: " << info << endl;
	cout << "homework: " << homework << endl;

}

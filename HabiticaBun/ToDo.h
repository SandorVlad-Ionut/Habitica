#pragma once
#include <string.h>
#include <atlstr.h>
using namespace std;

class ToDo
{
public:
	ToDo();
	ToDo(CString title, bool done);
	void setTitle(CString title);
    CString getTitle() const;
	bool getDone() const;
	void setDone(bool in);
	void printToDo();
	void addToVector(CString title, bool done);
	void removeTask(CString title);
private:
	CString title;
	bool done = false;
};


#pragma once
using namespace std;
#include "pch.h"
#include <iostream>
#include <List>
#include <vector>
#include "Activity.h"
#include "Category.h"

#include "ToDo.h"

vector<ToDo> ToDoList;

ToDo::ToDo(CString title, bool done)
{
	title = CString("title");
	done = false;
}

ToDo::ToDo()
{
	title = CString("default title");
	done = false;
}

void ToDo::setTitle(CString title)
{
	this->title = title;
}

CString ToDo::getTitle() const
{
	return this->title;
}

bool ToDo::getDone() const
{
	return done;
}

void ToDo::setDone(bool in)
{
	done = in;
}

void ToDo::printToDo()
{
	for (auto i = ToDoList.begin(); i != ToDoList.end(); ++i)
	{
		cout << i->getTitle() << endl;
		cout << i->getDone() << endl;
	}
}





void ToDo::addToVector(CString title, bool done)
{
	ToDoList.emplace_back(ToDo(title, done));
}

void ToDo::removeTask(CString title)
{
	
	for (auto i = ToDoList.begin(); i != ToDoList.end(); ++i) {
		 if (i->getTitle().Compare(title))
		{
			ToDoList.erase(i);
		}
		//if (i->getTitle().compare(title)) {
		//	ToDoList.erase(i);}
	}
}



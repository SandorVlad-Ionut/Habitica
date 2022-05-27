#include "pch.h"
#include "Activity.h"
#include <iostream>
#include<list>
using namespace std;

Activity::Activity()
{
	this->m_title = CString("default title");
}

Activity::Activity(CString title)
{
	this->m_title = title;
}


void Activity::setTitle(CString title)
{
	this->m_title = title;
}

CString Activity::getTitle() const
{
	return this->m_title;
}

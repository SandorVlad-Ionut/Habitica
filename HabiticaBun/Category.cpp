#include "pch.h"
#include <iostream>
#include <vector>
#include<list>
#include "Activity.h"
#include "Category.h"

using namespace std;
vector<Activity> activities;


Category::Category()
{
	vec = activities;
	m_name = CString("default name");
	m_score = 0;
}

Category::Category(CString name, int score, vector<Activity> vec)
{
	this->m_name = name;
	this->m_score = score;
	this->vec = vec;
}

void Category::setName(CString title)
{
	this->m_name = title;
}

CString Category::getName() {
	return this->m_name;
}

void Category::setScore(int score)
{
	this->m_score = score;
}

vector<Activity>& Category::getVec()
{
	return vec;
}

int Category::getScore()
{
	return this->m_score;
}

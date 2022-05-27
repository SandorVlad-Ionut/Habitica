#pragma once
#include "Activity.h"
#include <vector>


class Category
{
public:
	Category();
	Category(CString name, int score, vector<Activity>);

	CString getName();
	void setName(CString s);

	int getScore();
	void setScore(int s);
	vector<Activity>& getVec();

protected:
	CString m_name;
	int m_score;
	vector<Activity> vec ;
	
};
#pragma once
#include <iostream>
#include<fstream>
#include <vector>
#include<string>
#include "Activity.h"

using namespace std;

class ActivitiesList
	//subclase activities
	//sport
	//rutina
	//vicii

{
public:
	void addRepo(Activity* p);
	Activity* deleteRepo(int id);
	~ActivitiesList();
	vector<Activity*> m_repo;
	void displayAll();
};
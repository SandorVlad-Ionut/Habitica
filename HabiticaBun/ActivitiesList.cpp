#include "pch.h"
#include "ActivitiesList.h"
#include "Activity.h"
using namespace std;
#include<fstream>
#include<string>


void ActivitiesList::addRepo(Activity* p)
{
	m_repo.push_back(p);
}

void ActivitiesList::displayAll()
{
	int n = m_repo.size();
	cout << endl;
	for (int i = 0; i <= n; i++)
		cout << m_repo[i];

}


ActivitiesList::~ActivitiesList()
{
	for (int i = 0; i < (int)m_repo.size(); i++)
		delete m_repo[i];
}




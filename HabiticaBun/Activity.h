#pragma once
#include <string>
using namespace std;
class Activity
{
public:
	Activity();
	Activity(CString title);

	void setTitle(CString title);
	CString getTitle() const;


protected:
	CString m_title;
};
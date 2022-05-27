// windowActivities.cpp : implementation file
//

#include "pch.h"
#include "HabiticaBun.h"
#include "windowActivities.h"
#include "afxdialogex.h"
#include  "Category.h"
#include<vector>

// global category template
vector<Category> globalList;

void fillGlobalList()
{
	vector<Activity> sportList;
	sportList.push_back(Activity(CString("fotbal")));
	sportList.push_back(Activity(CString("tenis")));
	sportList.push_back(Activity(CString("polo")));
	globalList.push_back(Category(CString("sport"), 100, sportList));
}
// windowActivities dialog

IMPLEMENT_DYNAMIC(windowActivities, CDialogEx)

windowActivities::windowActivities(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

windowActivities::~windowActivities()
{
}

void windowActivities::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_LIST1, categoryList);
	DDX_Control(pDX, IDC_LIST3, activityList);
	DDX_Control(pDX, IDC_LIST4, categoryList);
	DDX_Control(pDX, IDC_LIST1, test);
}

/*
BEGIN_MESSAGE_MAP(windowActivities, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &windowActivities::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// windowActivities message handlers

void windowActivities::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
	categoryList.ResetContent();
	categoryList.AddString(CString("Test list"));
	categoryList.AddString(globalList[0].getName());
	activityList.AddString(globalList[0].getVec()[0].getTitle());
	int index = categoryList.GetCurSel();
	//IDC_LIST1 = categoryList;



}
*/
BEGIN_MESSAGE_MAP(windowActivities, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST4, &windowActivities::OnLbnSelchangeList4)
	ON_LBN_SELCHANGE(IDC_LIST1, &windowActivities::OnLbnSelchangeList1)
END_MESSAGE_MAP()


void windowActivities::OnLbnSelchangeList4()
{
	// TODO: Add your control notification handler code here
	assert(true);
	categoryList.ResetContent();
	categoryList.AddString(CString("Test list"));
	categoryList.AddString(globalList[0].getName());
	activityList.AddString(globalList[0].getVec()[0].getTitle());
	int index = categoryList.GetCurSel();
}


void windowActivities::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
	assert(true);
	test.ResetContent();
	test.AddString(CString("Test list"));
	test.AddString(globalList[0].getName());
}

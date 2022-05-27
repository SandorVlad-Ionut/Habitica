// windowTodo.cpp : implementation file
//

#include "pch.h"
#include "HabiticaBun.h"
#include "windowTodo.h"
#include "afxdialogex.h"


// windowTodo dialog

IMPLEMENT_DYNAMIC(windowTodo, CDialogEx)

windowTodo::windowTodo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

windowTodo::~windowTodo()
{
}

void windowTodo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, testTODO);
}
BEGIN_MESSAGE_MAP(windowTodo, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &windowTodo::OnLbnSelchangeList1)
END_MESSAGE_MAP()


void windowTodo::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
	testTODO.AddString(CString("Test test"));
}

// Window2.cpp : implementation file
//


#include "pch.h"
#include "Habitica.h"
#include "Window2.h"
#include "Window3.h"
#include "afxdialogex.h"


// Window2 dialog

IMPLEMENT_DYNAMIC(Window2, CDialogEx)

Window2::Window2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Window2::~Window2()
{
}

void Window2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Window2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Window2::OnBnClickedButton1)
END_MESSAGE_MAP()


// Window2 message handlers


void Window2::OnBnClickedButton1()
{
	Window3 w3;
	w3.DoModal();
}

// Todo.cpp : implementation file
//

#include "pch.h"
#include "Habitica.h"
#include "Todo.h"
#include "afxdialogex.h"


// Todo dialog

IMPLEMENT_DYNAMIC(Todo, CDialogEx)

Todo::Todo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

Todo::~Todo()
{
}

void Todo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Todo, CDialogEx)
END_MESSAGE_MAP()


// Todo message handlers

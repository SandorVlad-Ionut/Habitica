// windowStats.cpp : implementation file
//

#include "pch.h"
#include "HabiticaBun.h"
#include "windowStats.h"
#include "afxdialogex.h"


// windowStats dialog

IMPLEMENT_DYNAMIC(windowStats, CDialogEx)

windowStats::windowStats(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HABITICABUN_DIALOG, pParent)
{

}

windowStats::~windowStats()
{
}

void windowStats::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(windowStats, CDialogEx)
END_MESSAGE_MAP()


// windowStats message handlers

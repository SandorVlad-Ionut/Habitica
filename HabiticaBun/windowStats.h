#pragma once


// windowStats dialog

class windowStats : public CDialogEx
{
	DECLARE_DYNAMIC(windowStats)

public:
	windowStats(CWnd* pParent = nullptr);   // standard constructor
	virtual ~windowStats();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HABITICABUN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

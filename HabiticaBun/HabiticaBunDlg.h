
// HabiticaBunDlg.h : header file
//

#pragma once


// CHabiticaBunDlg dialog
class CHabiticaBunDlg : public CDialogEx
{
// Construction
public:
	CHabiticaBunDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HABITICABUN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	// //variabila atasatat la List 1
	CListBox list1;
	// intrare user
	CEdit inputUser;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedButton1();
};

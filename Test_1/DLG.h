#pragma once


// DLG 对话框

class DLG : public CDialogEx
{
	DECLARE_DYNAMIC(DLG)

public:
	DLG(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	CString str;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString getStr() {
		return str;
	}
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};

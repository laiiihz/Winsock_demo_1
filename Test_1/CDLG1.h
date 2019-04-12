#pragma once


// CDLG1 对话框

class CDLG1 : public CDialogEx
{
	DECLARE_DYNAMIC(CDLG1)

public:
	CDLG1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDLG1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	CString str;
	DECLARE_MESSAGE_MAP()

public:
	CString getStr() {
		return str;
	}
};

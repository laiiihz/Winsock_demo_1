// DLG.cpp: 实现文件
//

#include "pch.h"
#include "Test_1.h"
#include "DLG.h"
#include "afxdialogex.h"


// DLG 对话框

IMPLEMENT_DYNAMIC(DLG, CDialogEx)

DLG::DLG(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

DLG::~DLG()
{
}

void DLG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &DLG::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &DLG::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &DLG::OnBnClickedButton3)
END_MESSAGE_MAP()


// DLG 消息处理程序


void DLG::OnBnClickedButton1()
{
	this->GetDlgItemText(IDC_BUTTON1, str);
	this->m_pParentWnd->PostMessageW(WM_MyMsg, (WPARAM)this, 0);
	// TODO: 在此添加控件通知处理程序代码
}


void DLG::OnBnClickedButton2()
{
	this->GetDlgItemText(IDC_BUTTON2, str);
	this->m_pParentWnd->PostMessageW(WM_MyMsg, (WPARAM)this, 0);
	// TODO: 在此添加控件通知处理程序代码
}


void DLG::OnBnClickedButton3()
{
	this->GetDlgItemText(IDC_BUTTON3, str);
	this->m_pParentWnd->PostMessageW(WM_MyMsg, (WPARAM)this, 0);
	// TODO: 在此添加控件通知处理程序代码
}

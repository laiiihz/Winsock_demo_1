// CDLG1.cpp: 实现文件
//

#include "pch.h"
#include "Test_1.h"
#include "CDLG1.h"
#include "afxdialogex.h"


// CDLG1 对话框

IMPLEMENT_DYNAMIC(CDLG1, CDialogEx)

CDLG1::CDLG1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CDLG1::~CDLG1()
{
}

void CDLG1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLG1, CDialogEx)
END_MESSAGE_MAP()


// CDLG1 消息处理程序

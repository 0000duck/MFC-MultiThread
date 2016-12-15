
// MultiThread10Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMultiThread10Dlg 对话框
class CMultiThread10Dlg : public CDialogEx
{
// 构造
public:
	CMultiThread10Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MULTITHREAD10_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_ctrlA;
	CEdit m_ctrlB;
	CEdit m_ctrlC;
	afx_msg void OnBnClickedStart();
};

UINT WriteA(LPVOID pParam);  

UINT WriteB(LPVOID pParam);  

UINT WriteC(LPVOID pParam);
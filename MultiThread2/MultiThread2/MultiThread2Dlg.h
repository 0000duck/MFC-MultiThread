
// MultiThread2Dlg.h : 头文件
//

#pragma once


// CMultiThread2Dlg 对话框
class CMultiThread2Dlg : public CDialogEx
{
// 构造
public:
	CMultiThread2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MULTITHREAD2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	HANDLE hThread;  
	DWORD ThreadID;


	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_nCount;
	afx_msg void OnBnClickedStart();
};

void ThreadFunc(int integer); 
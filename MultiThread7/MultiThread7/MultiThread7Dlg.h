
// MultiThread7Dlg.h : ͷ�ļ�
//

#pragma once
#include "CalculateThread.h"
#include "resource.h"
#define WM_DISPLAY WM_USER+2  
// CMultiThread7Dlg �Ի���
class CMultiThread7Dlg : public CDialogEx
{
// ����
public:
	CMultiThread7Dlg(CWnd* pParent = NULL);	// ��׼���캯��

	CCalculateThread* m_pCalculateThread;  
// �Ի�������
	enum { IDD = IDD_MULTITHREAD7_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	int nAddend;  
	LRESULT OnDisplay(WPARAM wParam,LPARAM lParam); 

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedSum();
};


// MultiThread10Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMultiThread10Dlg �Ի���
class CMultiThread10Dlg : public CDialogEx
{
// ����
public:
	CMultiThread10Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MULTITHREAD10_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
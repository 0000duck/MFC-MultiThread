
// MultiThread9Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMultiThread9Dlg �Ի���
class CMultiThread9Dlg : public CDialogEx
{
// ����
public:
	CMultiThread9Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MULTITHREAD9_DIALOG };

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
	CEdit m_ctrlW;
	CEdit m_ctrlD;
	afx_msg void OnBnClickedWritew();
};

UINT WriteW(LPVOID pParam);  

UINT WriteD(LPVOID pParam); 
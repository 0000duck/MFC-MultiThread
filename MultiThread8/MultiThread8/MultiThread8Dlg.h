
// MultiThread8Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMultiThread8Dlg �Ի���
class CMultiThread8Dlg : public CDialogEx
{
// ����
public:
	CMultiThread8Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MULTITHREAD8_DIALOG };

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
	afx_msg void OnBnClickedWrited();
};

UINT WriteW(LPVOID pParam);  

UINT WriteD(LPVOID pParam); 
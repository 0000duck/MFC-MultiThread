
// MultiThread2Dlg.h : ͷ�ļ�
//

#pragma once


// CMultiThread2Dlg �Ի���
class CMultiThread2Dlg : public CDialogEx
{
// ����
public:
	CMultiThread2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MULTITHREAD2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	HANDLE hThread;  
	DWORD ThreadID;


	// ���ɵ���Ϣӳ�亯��
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
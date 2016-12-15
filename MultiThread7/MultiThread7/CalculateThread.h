#pragma once
#include "afxwin.h"
#define WM_CALCULATE WM_USER+1
class CCalculateThread :
	public CWinThread
{

protected:
	afx_msg void OnCalculate(UINT wParam,LONG lParam);
	DECLARE_MESSAGE_MAP()
public:
	CCalculateThread(void);
	~CCalculateThread(void);
};


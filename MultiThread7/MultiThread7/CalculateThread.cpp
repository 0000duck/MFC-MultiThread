#include "StdAfx.h"
#include "CalculateThread.h"
 #include "MultiThread7Dlg.h" 


CCalculateThread::CCalculateThread(void)
{
}


CCalculateThread::~CCalculateThread(void)
{
}

void CCalculateThread::OnCalculate(UINT wParam,LONG lParam)  

{  

	int nTmpt=0;  

	for(int i=0;i<=(int)wParam;i++)  

	{  

		nTmpt=nTmpt+i;  

	}  

	Sleep(500);  

	::PostMessage((HWND)(GetMainWnd()->GetSafeHwnd()),WM_DISPLAY,nTmpt,NULL);  

}
BEGIN_MESSAGE_MAP(CCalculateThread, CWinThread)  

	//{{AFX_MSG_MAP(CCalculateThread)  

	// NOTE - the ClassWizard will add and remove mapping macros here.  

	//}}AFX_MSG_MAP  

	ON_THREAD_MESSAGE(WM_CALCULATE,OnCalculate)  

	// 和主线程对比，注意它们的区别  

END_MESSAGE_MAP() 


// MultiThread2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMultiThread2App:
// �йش����ʵ�֣������ MultiThread2.cpp
//

class CMultiThread2App : public CWinApp
{
public:
	CMultiThread2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMultiThread2App theApp;
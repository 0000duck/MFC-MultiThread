
// MultiThread8.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMultiThread8App:
// �йش����ʵ�֣������ MultiThread8.cpp
//

class CMultiThread8App : public CWinApp
{
public:
	CMultiThread8App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMultiThread8App theApp;
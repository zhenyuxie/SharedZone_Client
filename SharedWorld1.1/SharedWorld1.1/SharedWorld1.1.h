
// SharedWorld1.1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "LoginDlg.h"

// CSharedWorld11App:
// �йش����ʵ�֣������ SharedWorld1.1.cpp
//

class CSharedWorld11App : public CWinApp
{
public:
	CSharedWorld11App();

// ��д
public:
	virtual BOOL InitInstance();
private:
	CLoginDlg loginDlg;

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSharedWorld11App theApp;
#include <afxwin.h>
#include "resource.h"
// ���ҽ� ������ ����ϱ� ���� ���

/*
resource (���� ������ �ڿ�)
1. ������ ����
2. �޴�
3. ������

�� 3������ ����Ͽ� ������ �����ϴ� ���
LoadFrame() ����Ͽ� FrameWnd ����
*/
class CMainFrame : public CFrameWnd {

};

class CMYApp : public CWinApp {
public:
	BOOL InitInstance() {
		CMainFrame* pMainFrame = new CMainFrame();
		// pMainFrame->Create(NULL, NULL);
		pMainFrame->LoadFrame(IDR_MAIN_FRAME);

		pMainFrame->ShowWindow(SW_SHOW);
		m_pMainWnd = pMainFrame;


		return TRUE;
	}
	int ExitInstance() {
		return 0;
	}
};

CMYApp theApp;
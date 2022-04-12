#include <afxwin.h>

// ������ ������ ���� ���
// CFrameWnd : ������ ������
// ������ ����
// �޴� : resource(���밡���� �ڿ�)
// ������ : resource
// ���ʿ� �����쿡 �ڽ� �����츦 �����ϰ� ������ �� �ִ� å���� ����
// ������ ���¹ٸ� �����ؼ� ������ �� ����

/* ���� ��� 3����
1. CWnd::Create() << �ٽ�
2. LoadFrame()
3. RuntimeClass�� ����ϴ� ���
*/

// Ŭ���� ����
// Ŭ������ ��üȭ �ؾ� ��� ����
class CMainFrame : public CFrameWnd {
public:

};

class CMYApp : public CWinApp {
public:
	virtual BOOL InitInstance() override {
		
		CMainFrame* pMainFrame = new CMainFrame();
		// �Լ� ���� �� �Ҹ���� �ʵ��� heap�� ����

		pMainFrame->Create(NULL, NULL);

		// ȭ�鿡 ������ ǥ��
		pMainFrame->ShowWindow(SW_SHOW);

		// ���� �����츦 ����
		m_pMainWnd = pMainFrame;

		return TRUE;
	}
	virtual int ExitInstance() override {
		return 0;
	}
};

CMYApp theAp;
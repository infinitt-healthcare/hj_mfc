// #include <iostream>
// using namespace std;
#include <afxwin.h>
// mfc���� ����ϴ� ��� ����

// �ܼ� �������α׷��� ������ : main
//int main(int argc, char** argv) {
//	return 0;
//}

// ������ �������α׷� -> C style
//BOOL WinMain(...) {
//	return 0;
//}

// ������ ���� ���α׷� Ŭ������ ����ϴ� ���
//CWinApp : �������α׷��� ����ϴ� Ŭ����
class CMyApp : public CWinApp {
public:
	virtual BOOL InitInstance() override{ // ������ : �����Լ�
		// CWinApp�� virtual �Լ��� ���� �Ǿ� ����
		// cout << "hello world" << endl;
		// cout : �ܼ� ��� ��ġ -> �����쿡���� ������ ����

		TRACE("hello world\n"); // TRACE : ��������� ����� ���� ����
		TRACE("InitInstance() ȣ���\n");
		// ���� : F5 -> ����� : ������� ��Ÿ��
		// ���� : ctrl + F5 -> ����� ���� �ʰ� ����

		// ����
		// char : 1byte
		// wchar_t : 2byte

		char p1[] = "Hello World";
		wchar_t p2[] = L"Hello World";
		// MFC�� ������ �ٸ��� 2���� ���� Ÿ���� ����

//#ifdef _UNICODE
//	#define TCHAR wchar_t
//	#define _T(str) L(str)
//#else
//	#define TCHAR char
//	#define _T(str) str
//#endif // _UNICODE
	// ���������� �����Ǿ� ����

		//TCHAR p[] = _T("Hello World");
		// _UNICODE �϶� : wchar_t* p1 = L"Hello World";
		// �Ϲ����� �� : char* p1 = "Hello World";
		// 
		// unicode ���� : �Ӽ� - ��� - ���� ���� - �����ڵ� ���� ���� ���
		// �׿� ���� : �Ӽ� - ��� - ���� ���� - ���� �� �� / ��Ƽ����Ʈ ���� ���� ���

		// ���ڿ�
		//char* str;
		//char str[]; //-> LPSTR
		// L : long(�ƹ��ǹ̾���) / P : pointer / STR : string
		// near pointer (64K) -> ����� �����
		// long pointer (64K �̻�)
		
		// const char* // -> LPCSTR
		// L : long(�ƹ��ǹ̾���) / P : pointer / C : const / STR : string

		//wchar_t* wtsl;
		//wchar_t wstr2[]; // -> LPWSTR
		// L : long(�ƹ��ǹ̾���) / P : pointer / W : wide / STR : string

		// LPCTSTR : const char*, const wchar_t*
		// LPTSTR : char*, wchar_t*

		/*long LONG
		short SHORD
		unsigned short WORD
		unsigned int DWORD;*/

		//AfxMessageBox(L"hello world"); // unicode
		//AfxMessageBox("hello world");  // ansi code
		AfxMessageBox(_T("hello world")); // MFC �Լ� (Win32API�� ¥������)

		::MessageBox(NULL, _T("hello world"), _T("step2"), MB_OK); // Win32API ���� template
		// �θ� �����찡 �����Ƿ� ù��° ���ڿ� NULL �ۼ�
		// 
		//::MessageBoxW(); // Win32API ���� -> unicode
		//::MessageBoxA(); // Win32API ���� -> ansi code
		// unicode�� ansi code�� ���� �����Ǿ� ����


		return TRUE; // ���� ���α׷��� �ڵ����� �����


	}
	virtual int ExitInstance() override { // �������
		// CWinApp�� virtual �Լ��� ���� �Ǿ� ����
		TRACE("ExitInstance() ȣ���\n");

		return 0;
	}
};
CMyApp theApp; // ���� ��ü ����

/*
������ ���� �ʿ�
������Ʈ - �Ӽ�
 - ���� : ��� ����, �÷��� : ��� �÷���
 - ��� - MFC ��� - ���� DLL���� MFC ���
 - ��Ŀ - �ý��� - ���� �ý��� - â(/SUBSYSTEM:WINDOWS) // �������� WinMain���� ����
*/
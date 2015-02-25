/*
This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

// simple example showing a hello world winapi app

#include <Windows.h>
#include <gl\GL.h>
#include "gl_text.h"

#pragma comment(lib, "opengl32.lib")

void OpenGLInit()
{
	glViewport(0, 0, 640, 480);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 640, 0, 480, 1, -1 );
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_CULL_FACE);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void OpenGLDraw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glColor3f(1.0f, 1.0f, 1.0f);
	glTranslatef(10.0f, 100.0f, 0.0f);
	GLT_Print("Hello, World");
}

int Error(const char *text)
{
	MessageBoxA(NULL, text, "Error", 0);
	return -1;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
    }

	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASS));

	wc.cbSize        = sizeof(WNDCLASSEX);
	wc.lpfnWndProc   = WndProc;
	wc.hInstance     = hInstance;
	wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = CreateSolidBrush(RGB(0, 0, 0));
	wc.lpszClassName = TEXT("OpenGLWinClass");
	wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

	ATOM atom = RegisterClassEx(&wc);
	if(!atom)
		return Error("Failed to Register Window");

	HWND hwnd = CreateWindowEx(
		0,
		TEXT("OpenGLWinClass"),
		TEXT("GLT Example App"),
		WS_SYSMENU | WS_VISIBLE | WS_MINIMIZEBOX,
		10, 10,
		640, 480,
		NULL, NULL,
		hInstance, NULL);

	if(!hwnd)
		return Error("Failed to Create Window");
	
	HDC hDC;
	HGLRC hRC;
	PIXELFORMATDESCRIPTOR pfd;

	hDC = GetDC(hwnd);
	if(!hDC)
		return Error("GetDC Failed");

	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));

	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 16;
	pfd.iLayerType = PFD_MAIN_PLANE;

	int iFormat = ChoosePixelFormat(hDC, &pfd);
	if(!iFormat)
		Error("ChoosePixelFormat Failed");

	SetPixelFormat(hDC, iFormat, &pfd);
	hRC = wglCreateContext(hDC);
	if(!hRC)
		return Error("wglCreateContext Failed");

	wglMakeCurrent(hDC, hRC);
	OpenGLInit();
	UpdateWindow(hwnd);

	MSG msg;
	
	while(GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		OpenGLDraw();
		SwapBuffers(hDC);
	}

	return msg.wParam;
}

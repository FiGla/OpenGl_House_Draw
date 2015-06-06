#include <windows.h>
#include <gl/gl.h>
//#include <gl/glu.h>
//#include <gl/glut.h>

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);


void display(){
  //  glClearColor(0,1,0,0);
    glClearColor(0,1.0,0.0,0.0);
  //  glRotatef(rotateX%360,1.0,0.0,0.0);
   // glRotatef(rotateY%360,0.0,1.0,0.0);

//    float size=0.5;
glPushMatrix();
 glBegin(GL_TRIANGLES);
      glColor3f(1.0f,1.0f,1.0f); //white back
      glVertex3f( 0.3f, 0.5f,0.3f);
      glVertex3f( -0.6f, 0.5f,0.3f);
      glVertex3f( 0.0f, 1.0f,0.0f);
glEnd();
glPopMatrix();

glPushMatrix();
 glBegin(GL_TRIANGLES);
      glColor3f(1.0f,0.0f,0.0f); //red left
      glVertex3f( -0.5f, 0.8f,-0.3f);
      glVertex3f( -0.6f, 0.5f,0.3f);
      glVertex3f( 0.0f, 1.0f,0.0f);
glEnd();
glPopMatrix();



glPushMatrix();
 glBegin(GL_TRIANGLES);
      glColor3f(0.0f,0.0f,1.0f); //blue right
      glVertex3f( 0.5f, 0.8f,-0.3f);
      glVertex3f( 0.3f, 0.5f,0.3f);
      glVertex3f( 0.0f, 1.0f,0.0f);
glEnd();
glPopMatrix();



glPushMatrix();
 glBegin(GL_TRIANGLES);
      glColor3f(1.0f,1.0f,1.9f); //white front
      glVertex3f( 0.5f, 0.8f,-0.3f);
      glVertex3f( -0.5f, 0.8f,-0.3f);
      glVertex3f( 0.0f, 1.0f,0.0f);
glEnd();
glPopMatrix();



glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f,0.0f,0.5f); // Dark Blue back
    glVertex3f( 0.3f, 0.5f,0.3f); // up right
    glVertex3f( 0.3f, -0.6f,0.3f); // bottom right
    glVertex3f( -0.6f, -0.6f,0.3f); // bottom left
    glVertex3f( -0.6f, 0.5f,0.3f); // up left
glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.8f,0.5f); // green top
    glVertex3f( 0.5f, 0.8f,-0.3f);
    glVertex3f( -0.5f, 0.8f,-0.3f);
    glVertex3f( -0.5f, 0.8f,0.3f);
    glVertex3f( 0.5f, 0.8f,0.3f);
glEnd();
glPopMatrix();



glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.8f,0.5f); // green left
    glVertex3f( -0.5f, 0.8f,-0.3f); // up right
    glVertex3f( -0.5f, -0.5f,-0.3f); // down right
    glVertex3f( -0.6f, -0.6f,0.3f); // down left
    glVertex3f( -0.6f, 0.5f,0.3f); // up left
glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.8f,0.5f); // green right
    glVertex3f( 0.5f, -0.5f,-0.3f);
    glVertex3f( 0.5f, 0.8f,-0.3f);
    glVertex3f( 0.3f, 0.5f,0.3f);
    glVertex3f( 0.3f, -0.6f,0.3f);
glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.9f,0.1f,0.3f); // pink bottom
    glVertex3f( -0.5f, -0.5f,-0.3f);
    glVertex3f( 0.5f, -0.5f,-0.3f);
    glVertex3f( 0.3f, -0.6f,0.3f);
    glVertex3f( -0.6f, -0.6f,0.3f);
glEnd();
glPopMatrix();



glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f,0.0f,0.5f); // Dark Blue front
    glVertex3f( 0.5f, 0.8f,-0.3f);
    glVertex3f( 0.5f, -0.5f,-0.3f);
    glVertex3f( -0.5f, -0.5f,-0.3f);
    glVertex3f( -0.5f, 0.8f,-0.3f);
glEnd();
glPopMatrix();
 ////****** WINDOW AND DOOOR ***********///
//
//glPushMatrix();
//    glBegin(GL_QUADS);
//    glColor3f(1.0f,1.0f,1.0f); // windo black right up
//    glTranslatef(0.2f,0.4f,0.0f);
//    glRotatef(angle,0.0f, 1.0f,0.0f);
//    glTranslatef(-0.2f,-0.4f,0.0f);
//glEnd();
//glPopMatrix();



glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f( 0.4f, 0.7f);
    glVertex2f( 0.4f, 0.4f);
    glVertex2f( 0.2f, 0.4f);
    glVertex2f( 0.2f, 0.7f);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f); // windo black right down
    glVertex3f( 0.4f, 0.3f,-0.3f);
    glVertex3f( 0.4f, 0.0f,-0.3f);
    glVertex3f( 0.2f, 0.0f,-0.3f);
    glVertex3f( 0.2f, 0.3f,-0.3f);
glEnd();
glPopMatrix();



glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f); // windo black left up
    glVertex3f( -0.4f, 0.7f,-0.3f);
    glVertex3f( -0.4f, 0.4f,-0.3f);
    glVertex3f( -0.2f, 0.4f,-0.3f);
    glVertex3f( -0.2f, 0.7f,-0.3f);
glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f); // windo black left down
    glVertex3f( -0.4f, 0.3f,-0.3f);
    glVertex3f( -0.4f, 0.0f,-0.3f);
    glVertex3f( -0.2f, 0.0f,-0.3f);
    glVertex3f( -0.2f, 0.3f,-0.3f);
glEnd();
glPopMatrix();



glPushMatrix();
    glBegin(GL_QUADS);
    /*** door ***/
    glVertex3f( 0.1f, -0.1f,-0.3f);
    glVertex3f( 0.1f, -0.5f,-0.3f);
    glVertex3f( -0.1f, -0.5f,-0.3f);
    glVertex3f( -0.1f, -0.1f,-0.3f);
glEnd();
glPopMatrix();

//    Bicycle();
    glFlush();
 //   glutSwapBuffers();




}




int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wcex;
    HWND hwnd;
    HDC hDC;
    HGLRC hRC;
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;

    /* register window class */
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_OWNDC;
    wcex.lpfnWndProc = WindowProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = "GLSample";
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);;


    if (!RegisterClassEx(&wcex))
        return 0;

    /* create main window */
    hwnd = CreateWindowEx(0,
                          "GLSample",
                          "OpenGL Sample",
                          WS_OVERLAPPEDWINDOW,
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          1000,
                          1000,
                          NULL,
                          NULL,
                          hInstance,
                          NULL);

    ShowWindow(hwnd, nCmdShow);

    /* enable OpenGL for the window */
    EnableOpenGL(hwnd, &hDC, &hRC);

    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            display();
            SwapBuffers(hDC);

            Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL(hwnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow(hwnd);

    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_CLOSE:
            PostQuitMessage(0);
        break;

        case WM_DESTROY:
            return 0;

        case WM_KEYDOWN:
        {
            switch (wParam)
            {
                case VK_ESCAPE:
                    PostQuitMessage(0);
                break;
            }
        }
        break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

void EnableOpenGL(HWND hwnd, HDC* hDC, HGLRC* hRC)
{
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC(hwnd);

    /* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hDC, &pfd);

    SetPixelFormat(*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hDC);

    wglMakeCurrent(*hDC, *hRC);
}

void DisableOpenGL (HWND hwnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}


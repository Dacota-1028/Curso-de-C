#include <windows.h>

// Procedimiento de ventana (Window Procedure)
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

// Función principal
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Registro de la clase de ventana
    WNDCLASS wc = {0};
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = "MiVentana";

    RegisterClass(&wc);

    // Creación de la ventana
    HWND hwnd = CreateWindow("MiVentana", "Mi Aplicacion", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL);

    // Verificación de la creación de la ventana
    if (hwnd == NULL) {
        return 0;
    }

    // Mostrar y actualizar la ventana
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Bucle de mensajes
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

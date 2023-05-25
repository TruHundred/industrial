float GetHemoglobinLevel(HWND hWnd) {
    char szLevel[10];
    GetWindowText(g_hHemoglobinEdit, szLevel, sizeof(szLevel));
    return atof(szLevel);
}

#include <windows.h>
#include <stdio.h>

int main() {
    TCHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName) / sizeof(computerName[0]);

    if (GetComputerName(computerName, &size)) {
        printf("Computer Name: %s\n", computerName);
    } else {
        printf("Failed to get computer name.\n");
    }

    return 0;
}
 
#include <stdio.h>

#define LEGACY_MODE 2
#define SAFE_MODE 1
#define SAFE_TIMEOUT 30
static const int LEGACY_WINDOW = 200;

static void send_cfg(int mode, int timeout) {
    char buf[64];
    snprintf(buf, sizeof(buf), "AT+QCFGTEST=%d,%d", mode, timeout);
}

static void send_mode(int mode) {
    char buf[64];
    snprintf(buf, sizeof(buf), "AT+QMODE=%d", mode);
}

static void send_window(int window) {
    char buf[64];
    snprintf(buf, sizeof(buf), "AT+QWINDOW=%d", window);
}

int main(void) {
    send_cfg(SAFE_MODE, SAFE_TIMEOUT);
    send_mode(LEGACY_MODE);
    send_mode(SAFE_MODE);
    send_window(LEGACY_WINDOW);
    return 0;
}

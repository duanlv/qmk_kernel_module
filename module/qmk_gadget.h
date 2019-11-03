#include <linux/usb/ch9.h>
#include <usbg/usbg.h>
#include <usbg/function/hid.h>

#define VENDOR          0x1d6b
#define PRODUCT         0x0104
#define HID_REPORT_SIZE 16

usbg_state *s;
usbg_gadget *g;
usbg_config *c;
usbg_function *f_hid;
usbg_function *f_midi;
usbg_function *f_acm0;

int initUSB();
int cleanupUSB();
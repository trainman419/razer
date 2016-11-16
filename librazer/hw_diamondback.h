#ifndef RAZER_HW_DIAMONDBACK_H_
#define RAZER_HW_DIAMONDBACK_H_

#include "razer_private.h"


int razer_diamondback_init(struct razer_mouse *m,
			 struct libusb_device *udev);
void razer_diamondback_release(struct razer_mouse *m);

#endif /* RAZER_HW_DIAMONDBACK_H_ */

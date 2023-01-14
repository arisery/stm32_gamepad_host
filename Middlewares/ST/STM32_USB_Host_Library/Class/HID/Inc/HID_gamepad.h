/*
 * HID_gamepad.h
 *
 *  Created on: Jan 10, 2023
 *      Author: arisery
 */

#ifndef HID_GAMEPAD_H_
#define HID_GAMEPAD_H_
#include "usbh_hid.h"

USBH_StatusTypeDef USBH_HID_GamePadInit(USBH_HandleTypeDef *phost);




typedef struct
{
	uint8_t cross;
	uint8_t combine;
	uint8_t joystick[2];
	uint8_t function;
}HID_GAMEPAD_Info_TypeDef;

typedef struct GAMEPAD_REPORT {
    uint16_t Buttons;
    uint16_t LeftTrigger;
    uint16_t RightTrigger;
    int16_t LeftThumbstickX;
    int16_t LeftThumbstickY;
    int16_t RightThumbstickX;
    int16_t RightThumbstickY;
} GAMEPAD_REPORT;
typedef enum GAMEPAD_BUTTONS
{
    RIGHT_THUMBSTICK = 0x8000,
    LEFT_THUMBSTICK = 0x4000,
    RIGHT_SHOULDER = 0x2000,
    LEFT_SHOULDER = 0x1000,
    DPAD_RIGHT = 0x800,
    DPAD_LEFT = 0x400,
    DPAD_DOWN = 0x200,
    DPAD_UP = 0x100,
    Y = 0x80,
    X = 0x40,
    B = 0x20,
    A = 0x10,
    VIEW = 0x8,
    MENU = 0x4,
    NEXUS = 0x2,
    ENROLL = 0x1,
    NONE = 0
} GAMEPAD_BUTTONS;
#endif /* ST_STM32_USB_HOST_LIBRARY_CLASS_HID_INC_HID_GAMEPAD_H_ */

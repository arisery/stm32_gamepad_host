/*
 * HID_gamepad.c
 *
 *  Created on: Jan 10, 2023
 *      Author: arisery
 */


#include "HID_gamepad.h"
#include "usbh_hid_parser.h"
uint8_t RX_BUFF[10];
USBH_StatusTypeDef USBH_HID_GamePadInit(USBH_HandleTypeDef *phost)
{
	  USBH_StatusTypeDef status = USBH_OK;
	 HID_HandleTypeDef *HID_Handle = (HID_HandleTypeDef *) phost->pActiveClass->pData;
	 HID_Handle->length = 20;
	 HID_Handle->pData = (uint8_t *)(void *)RX_BUFF;


	 USBH_HID_FifoInit(&HID_Handle->fifo, phost->device.Data, (uint16_t)(HID_QUEUE_SIZE * 10));
return USBH_OK;

}


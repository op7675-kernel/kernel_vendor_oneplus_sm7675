/* SPDX-License-Identifier: GPL-2.0
 *
 * Synaptics TouchCom touchscreen driver
 *
 * Copyright (C) 2017-2020 Synaptics Incorporated. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * INFORMATION CONTAINED IN THIS DOCUMENT IS PROVIDED "AS-IS," AND SYNAPTICS
 * EXPRESSLY DISCLAIMS ALL EXPRESS AND IMPLIED WARRANTIES, INCLUDING ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE,
 * AND ANY WARRANTIES OF NON-INFRINGEMENT OF ANY INTELLECTUAL PROPERTY RIGHTS.
 * IN NO EVENT SHALL SYNAPTICS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, PUNITIVE, OR CONSEQUENTIAL DAMAGES ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OF THE INFORMATION CONTAINED IN THIS DOCUMENT, HOWEVER CAUSED
 * AND BASED ON ANY THEORY OF LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, AND EVEN IF SYNAPTICS WAS ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE. IF A TRIBUNAL OF COMPETENT JURISDICTION DOES
 * NOT PERMIT THE DISCLAIMER OF DIRECT DAMAGES OR ANY OTHER DAMAGES, SYNAPTICS'
 * TOTAL CUMULATIVE LIABILITY TO ANY PARTY SHALL NOT EXCEED ONE HUNDRED U.S.
 * DOLLARS.
 */

/**
 * @file synaptics_tcm2_func_touch.h
 *
 * This file declares related APIs and definitions for touch report handling.
 */

#ifndef _SYNAPTICS_TOUCHCOM_TOUCH_FUNCS_H_
#define _SYNAPTICS_TOUCHCOM_TOUCH_FUNCS_H_

#include "synaptics_touchcom_core_dev.h"

/**
 * @section: Types of Object Reported
 *
 * List the object classifications
 */
enum object_classification {
	LIFT = 0,
	FINGER = 1,
	GLOVED_OBJECT = 2,
	STYLUS = 3,
	ERASER = 4,
	SMALL_OBJECT = 5,
	PALM = 6,
	EDGE_TOUCHED = 8,
	HOVER_OBJECT = 9,
	NOP = -1,
};

/**
 * @section: Types of Gesture ID
 *
 * List the gesture ID assigned
 */
enum gesture_classification {
	GESTURE_ID_NONE = 0,
	GESTURE_ID_DOUBLE_TAP = 1,
	GESTURE_ID_SWIPE = 2,
	GESTURE_ID_ACTIVE_SINGLE_TAP = 0x10,
	GESTURE_ID_ACTIVE_TAP_AND_HOLD = 0x80,
};
#define DTAP_DETECT     0x01
#define SWIPE_DETECT    0x02
#define TRIANGLE_DETECT 0x03
#define CIRCLE_DETECT   0x04
#define VEE_DETECT      0x05
#define HEART_DETECT    0x07
#define UNICODE_DETECT  0x08
#define STAP_DETECT     0x10
#define M_UNICODE       0x6d
#define S_UNICODE       0x73
#define W_UNICODE       0x77

#define TOUCH_HOLD_DOWN 0x80
#define TOUCH_HOLD_UP   0x81
#define FINGERPRINT_ERR_REPORT   0x84


#define UNKOWN_GESTURE		0
#define DOU_TAP			1   /* double tap*/
#define UP_VEE			2   /* V*/
#define DOWN_VEE		3   /* ^*/
#define LEFT_VEE		4   /* >*/
#define RIGHT_VEE		5   /* <*/
#define CIRCLE_GESTURE		6   /* O*/
#define DOU_SWIP		7   /* ||*/
#define LEFT2RIGHT_SWIP		8   /* -->*/
#define RIGHT2LEFT_SWIP		9   /* <--*/
#define UP2DOWN_SWIP		10  /* |v*/
#define DOWN2UP_SWIP		11  /* |^*/
#define M_GESTRUE		12  /* M*/
#define W_GESTURE		13  /* W*/
#define FINGER_PRINTDOWN	14
#define FRINGER_PRINTUP		15
#define SINGLE_TAP		16
#define HEART			17
#define S_GESTURE		18
/**
 * @section: Codes for Touch Report Configuration
 *
 * Define the 8-bit codes for the touch report configuration
 */
enum touch_report_code {
	/* control flow codes */
	TOUCH_REPORT_END = 0x00,
	TOUCH_REPORT_FOREACH_ACTIVE_OBJECT = 0x01,
	TOUCH_REPORT_FOREACH_OBJECT = 0x02,
	TOUCH_REPORT_FOREACH_END = 0x03,
	TOUCH_REPORT_PAD_TO_NEXT_BYTE = 0x04,
	/* entity codes */
	TOUCH_REPORT_TIMESTAMP = 0x05,
	TOUCH_REPORT_OBJECT_N_INDEX = 0x06,
	TOUCH_REPORT_OBJECT_N_CLASSIFICATION = 0x07,
	TOUCH_REPORT_OBJECT_N_X_POSITION = 0x08,
	TOUCH_REPORT_OBJECT_N_Y_POSITION = 0x09,
	TOUCH_REPORT_OBJECT_N_Z = 0x0a,
	TOUCH_REPORT_OBJECT_N_X_WIDTH = 0x0b,
	TOUCH_REPORT_OBJECT_N_Y_WIDTH = 0x0c,
	TOUCH_REPORT_OBJECT_N_TX_POSITION_TIXELS = 0x0d,
	TOUCH_REPORT_OBJECT_N_RX_POSITION_TIXELS = 0x0e,
	TOUCH_REPORT_0D_BUTTONS_STATE = 0x0f,
	TOUCH_REPORT_GESTURE_ID = 0x10,
	TOUCH_REPORT_FRAME_RATE = 0x11,
	TOUCH_REPORT_POWER_IM = 0x12,
	TOUCH_REPORT_CID_IM = 0x13,
	TOUCH_REPORT_RAIL_IM = 0x14,
	TOUCH_REPORT_CID_VARIANCE_IM = 0x15,
	TOUCH_REPORT_NSM_FREQUENCY_INDEX = 0x16,
	TOUCH_REPORT_NSM_STATE = 0x17,
	TOUCH_REPORT_NUM_OF_ACTIVE_OBJECTS = 0x18,
	TOUCH_REPORT_CPU_CYCLES_USED_SINCE_LAST_FRAME = 0x19,
	TOUCH_REPORT_FACE_DETECT = 0x1a,
	TOUCH_REPORT_GESTURE_DATA = 0x1b,
	TOUCH_REPORT_FORCE_MEASUREMENT = 0x1c,
	TOUCH_REPORT_FINGERPRINT_AREA_MEET = 0x1d,
	TOUCH_REPORT_SENSING_MODE = 0x1e,
	TOUCH_REPORT_KNOB_DATA = 0x24,

	/* custom report info */
	TOUCH_REPORT_CUSTOM_GESTURE_INFO = 0xC6, // 198  --48
	TOUCH_REPORT_CUSTOM_GESTURE_COORDINATE = 0xC7, // 199  --192
	TOUCH_REPORT_CUSTOM_GRIP_INFO = 0xCB,    // 203  --32
};

/**
 * syna_tcm_parse_touch_report()
 *
 * Traverse through touch report configuration and parse the contents of
 * report packet to get the exactly touched data entity from touch reports.
 *
 * At the end of function, the touched data will be parsed and stored at the
 * associated position in struct touch_data_blob.
 *
 * @param
 *    [ in] tcm_dev:     the device handle
 *    [ in] report:      touch report generated by TouchComm device
 *    [ in] report_size: size of given report
 *    [out] touch_data:  touch data generated
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_parse_touch_report(struct tcm_dev *tcm_dev,
		unsigned char *report, unsigned int report_size,
		struct tcm_touch_data_blob *touch_data);

/**
 * syna_tcm_set_touch_report_config()
 *
 * Setup the format and content of touch report if needed
 *
 * TouchComm allows to set how touch reports are formatted and what items get
 * reported each time a touch report is generated.
 *
 * @param
 *    [ in] tcm_dev:     the device handle
 *    [ in] config:      the customized report configuration
 *    [ in] config_size: size of given config
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_set_touch_report_config(struct tcm_dev *tcm_dev,
		unsigned char *config, unsigned int config_size);

/**
 * syna_tcm_preserve_touch_report_config()
 *
 * Retrieve and preserve the current touch report configuration.
 *
 * The retrieved configuration is stored in touch_config buffer defined
 * in struct syna_tcm_dev for later using of touch position parsing.
 *
 * The touch_config buffer will be allocated internally and its size will
 * be updated accordingly.
 *
 * @param
 *    [ in] tcm_dev: the device handle
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_preserve_touch_report_config(struct tcm_dev *tcm_dev);


/**
 * syna_tcm_get_touch_data()
 *
 * Get data entity from the received report according to bit offset and bit
 * length defined in the touch report configuration.
 *
 * @param
 *    [ in] report:      touch report generated by TouchComm device
 *    [ in] report_size: size of given report
 *    [ in] offset:      bit offset in the report
 *    [ in] bits:        number of bits representing the data
 *    [out] data:        data parsed
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_get_touch_data(const unsigned char *report,
		unsigned int report_size, unsigned int offset,
		unsigned int bits, unsigned int *data);

/**
 * syna_tcm_set_custom_touch_entity_callback()
 *
 * Set up callback function to handle custom touch data.
 *
 * Once finding the "new" custom entity in touch report, the core library will
 * invoke the custom parsing method to handle this "new" code entity.
 *
 * @param
 *    [ in] tcm_dev:  the device handle
 *    [ in] p_cb:     the callback function pointer
 *    [ in] p_cbdata: pointer to caller data passed to callback function
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_set_custom_touch_entity_callback(struct tcm_dev *tcm_dev,
		tcm_custom_touch_entity_callback_t p_cb, void *p_cbdata);

/**
 * syna_tcm_set_custom_gesture_callback()
 *
 * Set up callback function to handle the gesture data defined as the following
 * code entities
 *        - TOUCH_REPORT_GESTURE_ID
 *        - TOUCH_REPORT_GESTURE_DATA
 *
 * @param
 *    [ in] tcm_dev:  the device handle
 *    [ in] p_cb:     the callback function pointer
 *    [ in] p_cbdata: pointer to caller data passed to callback function
 *
 * @return
 *    on success, 0 or positive value; otherwise, negative value on error.
 */
int syna_tcm_set_custom_gesture_callback(struct tcm_dev *tcm_dev,
		tcm_custom_gesture_callback_t p_cb, void *p_cbdata);


#endif /* end of _SYNAPTICS_TOUCHCOM_TOUCH_FUNCS_H_ */

LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

MODULE_SRCS += \
	$(LOCAL_DIR)/usb.c

MODULE_DEPS += \
	app/cdcserialtest

include make/module.mk
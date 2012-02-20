LOCAL_DIR := $(GET_LOCAL_DIR)

INCLUDES += -I$(LOCAL_DIR)/include -I$(LK_TOP_DIR)/platform/msm_shared  -I$(LK_TOP_DIR)/platform/msm7x30

PLATFORM := msm7x30

MEMBASE := 0x00000000 # EBI
MEMSIZE := 0x00100000 # 1MB

BASE_ADDR            := 0x00200000

TAGS_ADDR            := BASE_ADDR+0x00000100
KERNEL_ADDR          := BASE_ADDR+0x00008000
RAMDISK_ADDR         := BASE_ADDR+0x01000000
SCRATCH_ADDR         := 0x08008000
FASTBOOT_BUF_SIZE    := 0x07800000

KEYS_USE_GPIO_KEYPAD := 1

DEFINES += DISPLAY_SPLASH_SCREEN=0
DEFINES += DISPLAY_TYPE_MDDI=0
DEFINES += DISPLAY_TYPE_LCDC=0
DEFINES += TARGET_USES_RSPIN_LOCK=1

MODULES += \
	dev/keys \
	lib/ptable

DEFINES += \
	SDRAM_SIZE=$(MEMSIZE) \
	MEMBASE=$(MEMBASE) \
	BASE_ADDR=$(BASE_ADDR) \
	TAGS_ADDR=$(TAGS_ADDR) \
	KERNEL_ADDR=$(KERNEL_ADDR) \
	RAMDISK_ADDR=$(RAMDISK_ADDR) \
	SCRATCH_ADDR=$(SCRATCH_ADDR) \
	FASTBOOT_BUF_SIZE=$(FASTBOOT_BUF_SIZE)


OBJS += \
	$(LOCAL_DIR)/init.o \
	$(LOCAL_DIR)/atags.o \
	$(LOCAL_DIR)/keypad.o \

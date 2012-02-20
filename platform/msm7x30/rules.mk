LOCAL_DIR := $(GET_LOCAL_DIR)

ARCH := arm
ARM_CPU := cortex-a8
#arm1136j-s
CPU := generic

MMC_SLOT        := 2

DEFINES += WITH_CPU_EARLY_INIT=1 WITH_CPU_WARM_BOOT=1 \
	   MMC_SLOT=$(MMC_SLOT) MDP4=1

INCLUDES += -I$(LOCAL_DIR)/include -I$(LK_TOP_DIR)/target/$(TARGET)/include

DEVS += fbcon
MODULES += dev/fbcon

OBJS += \
	$(LOCAL_DIR)/arch_init.o \
	$(LOCAL_DIR)/platform.o \
	$(LOCAL_DIR)/interrupts.o \
	$(LOCAL_DIR)/gpio.o \
	$(LOCAL_DIR)/panel.o \
	$(LOCAL_DIR)/acpuclock.o \
	$(LOCAL_DIR)/remote_spinlock.o

ifeq ($(ENABLE_TRUSTZONE),1)
	ifeq ($(ENABLE_ROMLITE_LOCAL_TEST), 1)
		LINKER_SCRIPT += $(BUILDDIR)/trustzone-test-system-onesegment.ld
	else
		LINKER_SCRIPT += $(BUILDDIR)/trustzone-system-onesegment.ld
	endif
else
	LINKER_SCRIPT += $(BUILDDIR)/system-onesegment.ld
endif

include platform/msm_shared/rules.mk


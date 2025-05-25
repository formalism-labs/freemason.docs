
SRC_ROOT=../../../../../../..
include $(SRC_ROOT)/NBU_BUILD/freemason/4/main

MODULE_NAME=strings

PRODUCT=lib

#----------------------------------------------------------------------------------------------

CC_CRT_DLL=0
CC_CRT_MT=1

include $(MK)/defs

#----------------------------------------------------------------------------------------------

define CC_PP_DEFS.common
endef

define CC_PP_DEFS.windows
endef

define CC_PP_DEFS.vxworks
endef

CC_PP_DEFS += $(CC_PP_DEFS.common) $(CC_PP_DEFS.$(TARGET_OS_TYPE))

#----------------------------------------------------------------------------------------------

define CC_INCLUDE_DIRS.common
endef

define CC_INCLUDE_DIRS.windows
endef

define CC_INCLUDE_DIRS.vxworks
endef

CC_INCLUDE_DIRS += $(CC_INCLUDE_DIRS.common) $(CC_INCLUDE_DIRS.$(TARGET_OS_TYPE))

#----------------------------------------------------------------------------------------------

define CC_SRC_FILES.common
	strings.cpp
endef

define CC_SRC_FILES.windows
endef

define CC_SRC_FILES.vxworks
endef

CC_SRC_FILES += $(CC_SRC_FILES.common) $(CC_SRC_FILES.$(TARGET_OS_TYPE))

#----------------------------------------------------------------------------------------------

include $(MK)/rules

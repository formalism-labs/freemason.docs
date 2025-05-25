
SRC_ROOT=..
include z:/NBU_BUILD/freemason/4/main

MODULE_NAME=lib1

PRODUCT.windows=so
PRODUCT.vxworks=lib

#------------------------------------

include $(MK)/defs

#------------------------------------

define CC_PP_DEFS.common
endef

define CC_PP_DEFS.windows
	LIB1_EXPORTS
endef

define CC_INCLUDE_DIRS.common
endef

define CC_SRC_FILES.common
	lib1.cpp
endef

#------------------------------------

include $(MK)/rules

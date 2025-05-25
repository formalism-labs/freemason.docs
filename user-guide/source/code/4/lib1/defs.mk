
MODULE=lib1
MODULE_DIR=$(VROOT)/lib1

include $(MK)/module/start

MODULE_PRODUCT.windows=so
MODULE_PRODUCT.vxworks=lib

include $(MK)/module/end

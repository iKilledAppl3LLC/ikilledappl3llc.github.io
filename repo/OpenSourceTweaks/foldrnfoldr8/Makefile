ARCHS = armv7 arm64
include theos/makefiles/common.mk

TWEAK_NAME = FoldrNFoldr8
FoldrNFoldr8_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

include $(THEOS_MAKE_PATH)/aggregate.mk

after-install::
	install.exec "killall -9 SpringBoard"

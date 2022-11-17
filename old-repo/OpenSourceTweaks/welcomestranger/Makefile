ARCHS = armv7 arm64
TARGET = iphone:clang:7.1
SDK = iPhoneOS8.3

include theos/makefiles/common.mk

TWEAK_NAME = WelcomeStranger
WelcomeStranger_FILES = Tweak.xm
WelcomeStranger_FRAMEWORKS = UIKit
WelcomeStranger_CFLAGS = -Wno-error

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"

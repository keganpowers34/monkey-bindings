
# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the License);
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an AS IS BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#
#
# Autogenerated by codegen
LOCAL_PATH := $(call my-dir)
TARGET_ARCH_ABI := $(APP_ABI)
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

# Writing prebuilt shared library: beatsaber-hook
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook
LOCAL_SRC_FILES := ./extern/libbeatsaber-hook_0_7_4.so
LOCAL_CPP_FEATURES := exceptions
LOCAL_EXPORT_C_INCLUDES := ./extern/beatsaber-hook/shared/
include $(PREBUILT_SHARED_LIBRARY)

# Writing single library: codegen
include $(CLEAR_VARS)
LOCAL_MODULE := codegen
LOCAL_SRC_FILES += $(call rwildcard,./src,*.cpp)
LOCAL_C_INCLUDES := ./include
LOCAL_CFLAGS += -DMOD_ID='"codegen"' -DVERSION='"0.2.5"' -DNEED_UNSAFE_CSHARP -DNO_CODEGEN_USE
LOCAL_CFLAGS += -Wall -Wextra -Werror -Wno-unused-function -isystem'C:\Users\Delano Leslie\gorilla-tag-data\'
LOCAL_SHARED_LIBRARIES += beatsaber-hook
LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)

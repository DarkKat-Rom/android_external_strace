#
# Copyright (C) 2014 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

LOCAL_PATH := $(call my-dir)

define declare-strace-test-target
  include $(CLEAR_VARS)
  LOCAL_SRC_FILES := $(1)
  LOCAL_CFLAGS := -Wno-unused-parameter -Wno-error=return-type
  LOCAL_MODULE := strace-$(basename $(1))-test
  LOCAL_MODULE_PATH := $(TARGET_OUT_OPTIONAL_EXECUTABLES)
  LOCAL_MODULE_TAGS := tests
  LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk
  include $(BUILD_EXECUTABLE)
endef

src_files := \
    childthread.c \
    clone.c \
    fork.c \
    leaderkill.c \
    mmap_offset_decode.c \
    mtd.c \
    select.c \
    sfd.c \
    sig.c \
    sigkill_rain.c \
    sigreturn.c \
    skodic.c \
    threaded_execve.c \
    ubi.c \
    vfork.c \
    wait_must_be_interruptible.c \

$(foreach file, $(src_files), $(eval $(call declare-strace-test-target,$(file))))
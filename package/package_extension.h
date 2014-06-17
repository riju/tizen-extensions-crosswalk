// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PACKAGE_PACKAGE_EXTENSION_H_
#define PACKAGE_PACKAGE_EXTENSION_H_

#include "common/extension.h"

class PackageExtension : public common::Extension {
 public:
  PackageExtension();
  virtual ~PackageExtension();

 private:
  virtual common::Instance* CreateInstance();
};

#endif  // PACKAGE_PACKAGE_EXTENSION_H_
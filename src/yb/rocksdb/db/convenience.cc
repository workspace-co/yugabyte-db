//  Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//
// The following only applies to changes made to this file as part of YugaByte development.
//
// Portions Copyright (c) YugaByte, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied.  See the License for the specific language governing permissions and limitations
// under the License.
//
// Copyright (c) 2012 Facebook.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ROCKSDB_LITE

#include "yb/rocksdb/db/db_impl.h"

namespace rocksdb {

void CancelAllBackgroundWork(DB* db, bool wait) {
  (dynamic_cast<DBImpl*>(db))->CancelAllBackgroundWork(wait);
}

Status DeleteFilesInRange(DB* db, ColumnFamilyHandle* column_family,
                          const Slice* begin, const Slice* end) {
  return (dynamic_cast<DBImpl*>(db))
      ->DeleteFilesInRange(column_family, begin, end);
}

}  // namespace rocksdb

#endif  // ROCKSDB_LITE

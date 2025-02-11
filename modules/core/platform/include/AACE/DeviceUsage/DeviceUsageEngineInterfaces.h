/*
 * Copyright 2021 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef AACE_DEVICEUSAGE_DEVICEUSAGEENGINEINTERFACES_H_
#define AACE_DEVICEUSAGE_DEVICEUSAGEENGINEINTERFACES_H_

#include <iostream>
#include <string>

/** @file */

namespace aace {
namespace deviceUsage {

/**
 * DeviceUsageEngineInterface
 */
class DeviceUsageEngineInterface {
public:
    virtual ~DeviceUsageEngineInterface() = default;

    virtual void onReportNetworkDataUsage(const std::string& usage) = 0;
};

}  // namespace deviceUsage
}  // namespace aace

#endif  // AACE_DEVICEUSAGE_DEVICEUSAGEENGINEINTERFACES_H_

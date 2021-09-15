/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Utilities for serializing and deserializing X509 certificates.

#pragma once

#include <vector>

#include <openssl/ssl.h>

#include <binder/RpcCertificateFormat.h>

namespace android {

bssl::UniquePtr<X509> deserializeCertificate(const std::vector<uint8_t>& cert,
                                             RpcCertificateFormat format);

std::vector<uint8_t> serializeCertificate(X509* x509, RpcCertificateFormat format);

} // namespace android
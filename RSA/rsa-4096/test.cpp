/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "test.hpp"
void rsa_test(ap_uint<4096> message, ap_uint<4096> modulus, ap_uint<20> exponent, ap_uint<4096> mPrime, ap_uint<4096>& result) {
    xf::security::rsa<4096, 20> processor;
    processor.updateKey(modulus, exponent);
    processor.process(message, mPrime, result);
}

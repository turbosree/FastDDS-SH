/*
 * Copyright (C) 2018 Open Source Robotics Foundation
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
 *
*/

#ifndef SOSS__DDS__INTERNAL__DDSMIDDLEWAREEXCEPTION_HPP
#define SOSS__DDS__INTERNAL__DDSMIDDLEWAREEXPCETION_HPP

#include <stdexcept>

namespace soss {
namespace dds {


class DDSMiddlewareException : public std::runtime_error
{
public:
    DDSMiddlewareException()
        : std::runtime_error("DDS middleware exception")
    {
    }
};


} // namespace dds
} // namespace soss

#endif //SOSS__DDS__INTERNAL__DDSMIDDLEWAREEXCEPTION_HPP

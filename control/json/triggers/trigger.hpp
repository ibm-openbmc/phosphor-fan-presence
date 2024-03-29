/**
 * Copyright © 2021 IBM Corporation
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
#pragma once

#include "init.hpp"
#include "parameter.hpp"
#include "signal.hpp"
#include "timer.hpp"
#include "trigger_aliases.hpp"

#include <map>

namespace phosphor::fan::control::json::trigger
{

// Mapping of trigger class name to its creation function
static const std::map<std::string, createTrigger> triggers = {
    {"timer", timer::triggerTimer},
    {"signal", signal::triggerSignal},
    {"init", init::triggerInit},
    {"poweron", init::triggerInit},
    {"poweroff", init::triggerInit},
    {"parameter", parameter::triggerParameter}};

} // namespace phosphor::fan::control::json::trigger

#pragma once

#include "detail/operator_helpers.h"

#include "detail/unit.h"
#include "length.h"
#include "time.h"

namespace SI {

/// Type for velocity where v = L / T
template <typename _Type, typename _Ratio>
using velocity_t = unit_t<'v', 1, _Type, _Ratio>;

BUILD_UNIT_FROM_DIVISON(velocity_t, length_t, time_single_t)

} // namespace SI
/*
 * Copyright 2021 MbedCraft. All rights reserved.
 * Use of this source code is governed by a MIT license that can be found with this software.
 */

#if !defined __MC_ASSERT_H__
# define __MC_ASSERT_H__

#define __ASSERT__(l, a, t, fmt, ... ) ({ \
    if (!(t)) { \
        l(__func__, fmt, ##__VA_ARGS__); \
        a; \
    } \
})

#define ASSERTW_BRK(t, fmt, ... ) \
    __ASSERT__(ESP_LOGW, break, t, fmt, ##__VA_ARGS__)

#define ASSERTE_BRK(t, fmt, ... ) \
    __ASSERT__(ESP_LOGE, break, t, fmt, ##__VA_ARGS__)

#define ASSERTW_RET(t, r, fmt, ... ) \
    __ASSERT__(ESP_LOGW, return r, t, fmt, ##__VA_ARGS__)

#define ASSERTE_RET(t, r, fmt, ... ) \
    __ASSERT__(ESP_LOGE, return r, t, fmt, ##__VA_ARGS__)

#endif // !__MC_ASSERT_H__

/*
 * Copyright 2021 MbedCraft. All rights reserved.
 * Use of this source code is governed by a MIT license that can be found with this software.
 */

#if !defined __MC_ASSERT_H__
# define __MC_ASSERT_H__

#define ASSERT_BREAK(t, fmt, ... ) ({ \
    if (!(t)) { \
        ESP_LOGW(__func__, fmt, ##__VA_ARGS__); \
        break; \
    } \
})

#define ASSERT_RET(t, r, fmt, ... ) ({ \
    if (!(t)) { \
        ESP_LOGW(__func__, fmt, ##__VA_ARGS__); \
        return r; \
    } \
})

#endif // !__MC_ASSERT_H__

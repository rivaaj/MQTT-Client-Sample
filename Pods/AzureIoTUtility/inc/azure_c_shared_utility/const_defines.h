// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef CONST_DEFINES_H
#define CONST_DEFINES_H

// Used to remove GCC warning unused
#ifdef __GNUC__
    #define STATIC_VAR_UNUSED __attribute__ ((unused))
#else
    #define STATIC_VAR_UNUSED
#endif

#ifndef AZURE_UNREFERENCED_PARAMETER
#define AZURE_UNREFERENCED_PARAMETER(param)   (void)(param)
#endif

#endif // CONST_DEFINES
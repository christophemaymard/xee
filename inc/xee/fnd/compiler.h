// SPDX-FileCopyrightText: Copyright (c) 2024, Christophe Maymard <christophe.maymard@hotmail.com>
// SPDX-License-Identifier: BSD-3-Clause

#ifndef __XEE_FND_COMPILER_H__
#define __XEE_FND_COMPILER_H__

//==============================================================================

//------------------------------------------------------------------------------

#if defined(_MSC_VER)
#define XEE_COMPILER_MSVC 1
#endif

//------------------------------------------------------------------------------

#if XEE_COMPILER_MSVC
#define XEE_INLINE inline
#endif

#endif // #ifndef __XEE_FND_COMPILER_H__


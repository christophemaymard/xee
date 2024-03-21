// SPDX-FileCopyrightText: Copyright (c) 2024, Christophe Maymard <christophe.maymard@hotmail.com>
// SPDX-License-Identifier: BSD-3-Clause

#ifndef __XEE_MEM_MEMORY_H__
#define __XEE_MEM_MEMORY_H__

#include <cstring>

#include "xee/fnd/compiler.h"
#include "xee/fnd/data_type.h"

namespace xee::mem {

//==============================================================================

//------------------------------------------------------------------------------

XEE_INLINE s32 Memcmp(const void* lhs, const void* rhs, usize size)
{
  return ::memcmp(lhs, rhs, size);
}

XEE_INLINE void* Memcpy(void* dest, const void* src, usize size)
{
  return ::memcpy(dest, src, size);
}

XEE_INLINE void* Memmove(void* dest, const void* src, usize size)
{
  return ::memmove(dest, src, size);
}

XEE_INLINE void* Memset(void* dest, s32 value, usize size)
{
  return ::memset(dest, value, size);
}

} // namespace xee::mem

#endif // #ifndef __XEE_MEM_MEMORY_H__


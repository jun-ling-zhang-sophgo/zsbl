/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#ifndef METAL__CSR_H
#define METAL__CSR_H

#include <stddef.h>
#include <stdint.h>

/*!
 * @file csr.h
 * @brief A collection of APIs for get and set CSR registers
 */

/*!
 * @brief Read a given CSR register without checking validity of CSR offset
 * @param crs Register label or hex value offset to read from
 * @param value Variable name of uintprt_t type to get the value
 */

#define __ASM_STR(x) #x

/*!
 * @brief Write to a given CSR register without checking validity of CSR offset
 * @param crs Register label or hex value offset to write to
 * @param value Variable name of uintprt_t type to set the value
 */
#define METAL_CPU_SET_CSR(reg, value)                                          \
    __asm__ volatile("csrw " __ASM_STR(reg) ", %0" : : "r"(value));

#endif // METAL__CSR_H

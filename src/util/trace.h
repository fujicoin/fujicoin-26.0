// Copyright (c) 2020-2021 The Fujicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FUJICOIN_UTIL_TRACE_H
#define FUJICOIN_UTIL_TRACE_H

#if defined(HAVE_CONFIG_H)
#include <config/fujicoin-config.h>
#endif

#ifdef ENABLE_TRACING

#include <sys/sdt.h>

// Disabling this warning can be removed once we switch to C++20
#if defined(__clang__) && __cplusplus < 202002L
#define FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wgnu-zero-variadic-macro-arguments\"")
#define FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP _Pragma("clang diagnostic pop")
#else
#define FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH
#define FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#endif

#define TRACE(context, event) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE(context, event) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE1(context, event, a) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE1(context, event, a) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE2(context, event, a, b) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE2(context, event, a, b) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE3(context, event, a, b, c) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE3(context, event, a, b, c) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE4(context, event, a, b, c, d) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE4(context, event, a, b, c, d) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE5(context, event, a, b, c, d, e) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE5(context, event, a, b, c, d, e) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE6(context, event, a, b, c, d, e, f) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE6(context, event, a, b, c, d, e, f) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE7(context, event, a, b, c, d, e, f, g) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE7(context, event, a, b, c, d, e, f, g) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE8(context, event, a, b, c, d, e, f, g, h) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE8(context, event, a, b, c, d, e, f, g, h) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE9(context, event, a, b, c, d, e, f, g, h, i) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE9(context, event, a, b, c, d, e, f, g, h, i) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE10(context, event, a, b, c, d, e, f, g, h, i, j) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE10(context, event, a, b, c, d, e, f, g, h, i, j) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE11(context, event, a, b, c, d, e, f, g, h, i, j, k) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE11(context, event, a, b, c, d, e, f, g, h, i, j, k) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP
#define TRACE12(context, event, a, b, c, d, e, f, g, h, i, j, k, l) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_PUSH DTRACE_PROBE12(context, event, a, b, c, d, e, f, g, h, i, j, k, l) FUJICOIN_DISABLE_WARN_ZERO_VARIADIC_POP

#else

#define TRACE(context, event)
#define TRACE1(context, event, a)
#define TRACE2(context, event, a, b)
#define TRACE3(context, event, a, b, c)
#define TRACE4(context, event, a, b, c, d)
#define TRACE5(context, event, a, b, c, d, e)
#define TRACE6(context, event, a, b, c, d, e, f)
#define TRACE7(context, event, a, b, c, d, e, f, g)
#define TRACE8(context, event, a, b, c, d, e, f, g, h)
#define TRACE9(context, event, a, b, c, d, e, f, g, h, i)
#define TRACE10(context, event, a, b, c, d, e, f, g, h, i, j)
#define TRACE11(context, event, a, b, c, d, e, f, g, h, i, j, k)
#define TRACE12(context, event, a, b, c, d, e, f, g, h, i, j, k, l)

#endif


#endif // FUJICOIN_UTIL_TRACE_H

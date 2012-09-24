/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_sys_system_globals_h70996b28__
#define __GENERATED_sys_system_globals_h70996b28__

#include <php/classes/arrayaccess.h>
#include <php/classes/debugger.h>
#include <php/classes/directory.h>
#include <php/classes/directoryiterator.h>
#include <php/classes/exception.h>
#include <php/classes/fbmysqllexer.h>
#include <php/classes/iterator.h>
#include <php/classes/reflection.h>
#include <php/classes/soapfault.h>
#include <php/classes/splfile.h>
#include <php/classes/splobjectstorage.h>
#include <php/classes/stdclass.h>
#include <php/classes/xhprof.h>
#include <php/globals/constants.h>
#include <php/globals/symbols.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////


// Class Forward Declarations

class SystemGlobals : public Globals {
public:
  SystemGlobals();
  void initialize();

  Array stgv_Array[1];
  #define s_ReflectionClass$$fetched stgv_Array[0]
  RedeclaredCallInfoConst* stgv_RedeclaredCallInfoConstPtr[1];
  RedeclaredObjectStaticCallbacksConst* stgv_RedeclaredObjectStaticCallbacksConstPtr[1];
  Variant stgv_Variant[14];
  #define gvm_HTTP_RAW_POST_DATA stgv_Variant[0]
  #define gvm__COOKIE stgv_Variant[1]
  #define gvm__ENV stgv_Variant[2]
  #define gvm__FILES stgv_Variant[3]
  #define gvm__GET stgv_Variant[4]
  #define gvm__POST stgv_Variant[5]
  #define gvm__REQUEST stgv_Variant[6]
  #define gvm__SERVER stgv_Variant[7]
  #define gvm__SESSION stgv_Variant[8]
  #define gvm_argc stgv_Variant[9]
  #define gvm_argv stgv_Variant[10]
  #define gvm_http_response_header stgv_Variant[11]
  #define k_SID stgv_Variant[12]
  #define s_Exception$$traceOpts stgv_Variant[13]
  bool stgv_bool[1];
  #define run_pm_php$globals$symbols_php stgv_bool[0]
  double stgv_double[1];
  int stgv_int[1];
  int64 stgv_int64[1];
};

// Scalar Arrays
class SystemScalarArrays {
public:
  static void initialize();
  static void initializeNamed();

  static StaticArray ssa_[2];
};

extern const int64 k_CURLINFO_LOCAL_PORT;
extern const int64 k_CURLOPT_CONNECTTIMEOUT_MS;
extern const int64 k_CURLOPT_TIMEOUT_MS;
extern const int64 k_FB_UNSERIALIZE_NONSTRING_VALUE;
extern const int64 k_FB_UNSERIALIZE_UNEXPECTED_ARRAY_KEY_TYPE;
extern const int64 k_FB_UNSERIALIZE_UNEXPECTED_END;
extern const int64 k_FB_UNSERIALIZE_UNRECOGNIZED_OBJECT_TYPE;
extern const double k_INF;
extern const int64 k_JSON_FB_EXTRA_ESCAPES;
extern const int64 k_JSON_FB_LOOSE;
extern const int64 k_JSON_FB_UNLIMITED;
extern const int64 k_JSON_FORCE_OBJECT;
extern const int64 k_JSON_HEX_AMP;
extern const int64 k_JSON_HEX_APOS;
extern const int64 k_JSON_HEX_QUOT;
extern const int64 k_JSON_HEX_TAG;
extern const int64 k_JSON_NUMERIC_CHECK;
extern const int64 k_JSON_PRETTY_PRINT;
extern const int64 k_JSON_UNESCAPED_SLASHES;
extern const double k_NAN;
extern const int64 k_OPENSSL_RAW_DATA;
extern const int64 k_OPENSSL_ZERO_PADDING;
extern const int64 k_PAGELET_DONE;
extern const int64 k_PAGELET_NOT_READY;
extern const int64 k_PAGELET_READY;
extern const int64 k_SQLITE3_ASSOC;
extern const int64 k_SQLITE3_BLOB;
extern const int64 k_SQLITE3_BOTH;
extern const int64 k_SQLITE3_FLOAT;
extern const int64 k_SQLITE3_INTEGER;
extern const int64 k_SQLITE3_NULL;
extern const int64 k_SQLITE3_NUM;
extern const int64 k_SQLITE3_OPEN_CREATE;
extern const int64 k_SQLITE3_OPEN_READONLY;
extern const int64 k_SQLITE3_OPEN_READWRITE;
extern const int64 k_SQLITE3_TEXT;
extern const Object k_STDERR;
extern const Object k_STDIN;
extern const Object k_STDOUT;
extern const int64 k_TAINT_ALL;
extern const int64 k_TAINT_HTML;
extern const int64 k_TAINT_MUTATED;
extern const int64 k_TAINT_NONE;
extern const int64 k_TAINT_SHELL;
extern const int64 k_TAINT_SQL;
extern const int64 k_TAINT_TRACE_HTML;
extern const int64 k_TAINT_TRACE_SELF;
extern const int64 k_UCOL_ALTERNATE_HANDLING;
extern const int64 k_UCOL_CASE_FIRST;
extern const int64 k_UCOL_CASE_LEVEL;
extern const int64 k_UCOL_DEFAULT;
extern const int64 k_UCOL_DEFAULT_STRENGTH;
extern const int64 k_UCOL_FRENCH_COLLATION;
extern const int64 k_UCOL_HIRAGANA_QUATERNARY_MODE;
extern const int64 k_UCOL_IDENTICAL;
extern const int64 k_UCOL_LOWER_FIRST;
extern const int64 k_UCOL_NON_IGNORABLE;
extern const int64 k_UCOL_NORMALIZATION_MODE;
extern const int64 k_UCOL_NUMERIC_COLLATION;
extern const int64 k_UCOL_OFF;
extern const int64 k_UCOL_ON;
extern const int64 k_UCOL_PRIMARY;
extern const int64 k_UCOL_QUATERNARY;
extern const int64 k_UCOL_SECONDARY;
extern const int64 k_UCOL_SHIFTED;
extern const int64 k_UCOL_STRENGTH;
extern const int64 k_UCOL_TERTIARY;
extern const int64 k_UCOL_UPPER_FIRST;
extern const int64 k_XHPROF_FLAGS_CPU;
extern const int64 k_XHPROF_FLAGS_MALLOC;
extern const int64 k_XHPROF_FLAGS_MEASURE_XHPROF_DISABLE;
extern const int64 k_XHPROF_FLAGS_MEMORY;
extern const int64 k_XHPROF_FLAGS_NO_BUILTINS;
extern const int64 k_XHPROF_FLAGS_TRACE;
extern const int64 k_XHPROF_FLAGS_VTSC;


///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_sys_system_globals_h70996b28__

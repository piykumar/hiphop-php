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

#ifndef __GENERATED_cls_Directory_h29dd6492__
#define __GENERATED_cls_Directory_h29dd6492__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/directory.php line 3 */
FORWARD_DECLARE_CLASS(Directory);
extern const ObjectStaticCallbacks cw_Directory;
class c_Directory : public ExtObjectData {
  public:

  // Properties
  Variant m_path;
  Variant m_handle;

  // Destructor
  ~c_Directory() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(Directory, Directory, ObjectData)
  static const ClassPropTable os_prop_table;
  c_Directory(const ObjectStaticCallbacks *cb = &cw_Directory) : ExtObjectData(cb), m_path(Variant::nullInit), m_handle(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_path);
  public: c_Directory *create(CVarRef v_path);
  public: Variant t_read();
  public: void t_rewind();
  public: void t_close();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(read);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  DECLARE_METHOD_INVOKE_HELPERS(close);
};
ObjectData *coo_Directory() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Directory_h29dd6492__

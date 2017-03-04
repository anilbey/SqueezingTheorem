#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct DispatcherEmitter_t2224480775;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2240407071;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
extern "C"  void DispatcherEmitter__ctor_m996338643 (DispatcherEmitter_t2224480775 * __this, Type_t * ___owner0, String_t* ___dynamicMethodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
extern "C"  Dispatcher_t2240407071 * DispatcherEmitter_Emit_m1932283472 (DispatcherEmitter_t2224480775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
extern "C"  Dispatcher_t2240407071 * DispatcherEmitter_CreateMethodDispatcher_m246348781 (DispatcherEmitter_t2224480775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
extern "C"  void DispatcherEmitter_EmitCastOrUnbox_m1794820764 (DispatcherEmitter_t2224480775 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
extern "C"  void DispatcherEmitter_BoxIfNeeded_m1000945876 (DispatcherEmitter_t2224480775 * __this, Type_t * ___returnType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
extern "C"  void DispatcherEmitter_EmitReturn_m1532840440 (DispatcherEmitter_t2224480775 * __this, Type_t * ___typeOnStack0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

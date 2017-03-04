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

// Mono.Security.StrongName
struct StrongName_t117835354;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// System.Void Mono.Security.StrongName::.ctor(System.Byte[])
extern "C"  void StrongName__ctor_m1942629062 (StrongName_t117835354 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.ctor(System.Security.Cryptography.RSA)
extern "C"  void StrongName__ctor_m82974128 (StrongName_t117835354 * __this, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.cctor()
extern "C"  void StrongName__cctor_m1670108714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::InvalidateCache()
extern "C"  void StrongName_InvalidateCache_m4088388770 (StrongName_t117835354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void StrongName_set_RSA_m2154677343 (StrongName_t117835354 * __this, RSA_t3719518354 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C"  ByteU5BU5D_t3397334013* StrongName_get_PublicKey_m3777577320 (StrongName_t117835354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C"  ByteU5BU5D_t3397334013* StrongName_get_PublicKeyToken_m1968460885 (StrongName_t117835354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C"  String_t* StrongName_get_TokenAlgorithm_m3755575805 (StrongName_t117835354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

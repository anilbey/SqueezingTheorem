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

// UnityEngine.ParticleEmitter
struct ParticleEmitter_t4099167268;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_InternalEmitParticleArgumen428359572.h"

// System.Boolean UnityEngine.ParticleEmitter::get_emit()
extern "C"  bool ParticleEmitter_get_emit_m3608299347 (ParticleEmitter_t4099167268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_emit(System.Boolean)
extern "C"  void ParticleEmitter_set_emit_m2290780278 (ParticleEmitter_t4099167268 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleEmitter::get_useWorldSpace()
extern "C"  bool ParticleEmitter_get_useWorldSpace_m2416474471 (ParticleEmitter_t4099167268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::set_useWorldSpace(System.Boolean)
extern "C"  void ParticleEmitter_set_useWorldSpace_m1115751786 (ParticleEmitter_t4099167268 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color,System.Single,System.Single)
extern "C"  void ParticleEmitter_Emit_m1252698086 (ParticleEmitter_t4099167268 * __this, Vector3_t2243707580  ___pos0, Vector3_t2243707580  ___velocity1, float ___size2, float ___energy3, Color_t2020392075  ___color4, float ___rotation5, float ___angularVelocity6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleEmitter::Emit3(UnityEngine.InternalEmitParticleArguments&)
extern "C"  void ParticleEmitter_Emit3_m4107043254 (ParticleEmitter_t4099167268 * __this, InternalEmitParticleArguments_t428359572 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

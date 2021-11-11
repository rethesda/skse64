#include "skse64/NiRTTI.h"
#include "skse64/NiObjects.h"

NiObject * DoNiRTTICast(NiObject * src, const NiRTTI * typeInfo)
{
	uintptr_t typeAddr = uintptr_t(typeInfo) + RelocationManager::s_baseAddr;
	if (src)
		for (NiRTTI * iter = src->GetRTTI(); iter; iter = iter->parent)
			if (iter == (NiRTTI *)typeAddr)
				return src;

	return nullptr;
}

bool IsType(NiRTTI * rtti, const NiRTTI * typeInfo)
{
	uintptr_t typeAddr = uintptr_t(typeInfo) + RelocationManager::s_baseAddr;
	if (rtti)
		return uintptr_t(rtti) == typeAddr;

	return false;
}

const NiRTTI * NiRTTI_BGSDecalNode = (NiRTTI *)0x01F5EAA0;
const NiRTTI * NiRTTI_BSAnimGroupSequence = (NiRTTI *)0x01F5EC00;
const NiRTTI * NiRTTI_BSSplatterExtraData = (NiRTTI *)0x02F5FC50;
const NiRTTI * NiRTTI_BGSAddonNodeSoundHandleExtra = (NiRTTI *)0x02F600B8;
const NiRTTI * NiRTTI_REFRSyncController = (NiRTTI *)0x02F9A0D0;
const NiRTTI * NiRTTI_bhkCartTether = (NiRTTI *)0x02F9B838;
const NiRTTI * NiRTTI_bhkTiltPreventAction = (NiRTTI *)0x02F9B848;
const NiRTTI * NiRTTI_bhkWheelAction = (NiRTTI *)0x02F9B858;
const NiRTTI * NiRTTI_BSFaceGenAnimationData = (NiRTTI *)0x02F9BE98;
const NiRTTI * NiRTTI_BSFaceGenModelExtraData = (NiRTTI *)0x02FA23C0;
const NiRTTI * NiRTTI_BSFaceGenBaseMorphExtraData = (NiRTTI *)0x02FA23E8;
const NiRTTI * NiRTTI_BSFaceGenMorphData = (NiRTTI *)0x02FA23F8;
const NiRTTI * NiRTTI_BSFaceGenMorphDataHead = (NiRTTI *)0x02FA2408;
const NiRTTI * NiRTTI_BSFaceGenMorphDataHair = (NiRTTI *)0x02FA2418;
const NiRTTI * NiRTTI_BSFaceGenNiNode = (NiRTTI *)0x02FA2458;
const NiRTTI * NiRTTI_BSTempEffect = (NiRTTI *)0x02FA7828;
const NiRTTI * NiRTTI_BSTempEffectDebris = (NiRTTI *)0x02FA78A8;
const NiRTTI * NiRTTI_BSTempEffectGeometryDecal = (NiRTTI *)0x02FA78C8;
const NiRTTI * NiRTTI_BSTempEffectParticle = (NiRTTI *)0x02FA7978;
const NiRTTI * NiRTTI_BSTempEffectSimpleDecal = (NiRTTI *)0x02FA79A0;
const NiRTTI * NiRTTI_BSTempEffectSPG = (NiRTTI *)0x02FA79B8;
const NiRTTI * NiRTTI_bhkAutoWater = (NiRTTI *)0x02FBED90;
const NiRTTI * NiRTTI_ModelReferenceEffect = (NiRTTI *)0x02FC05C8;
const NiRTTI * NiRTTI_ReferenceEffect = (NiRTTI *)0x02FC0600;
const NiRTTI * NiRTTI_ShaderReferenceEffect = (NiRTTI *)0x02FC0630;
const NiRTTI * NiRTTI_SummonPlacementEffect = (NiRTTI *)0x02FC0660;
const NiRTTI * NiRTTI_SceneGraph = (NiRTTI *)0x02FD3628;
const NiRTTI * NiRTTI_BSDoorHavokController = (NiRTTI *)0x02FD5348;
const NiRTTI * NiRTTI_BSPlayerDistanceCheckController = (NiRTTI *)0x02FD5358;
const NiRTTI * NiRTTI_BSSimpleScaleController = (NiRTTI *)0x02FD5368;
const NiRTTI * NiRTTI_NiObject = (NiRTTI *)0x030ACEF0;
const NiRTTI * NiRTTI_NiAVObject = (NiRTTI *)0x030ACF28;
const NiRTTI * NiRTTI_NiNode = (NiRTTI *)0x030ACF48;
const NiRTTI * NiRTTI_NiObjectNET = (NiRTTI *)0x030AD088;
const NiRTTI * NiRTTI_NiLight = (NiRTTI *)0x030AD0E0;
const NiRTTI * NiRTTI_NiSwitchNode = (NiRTTI *)0x030AD0F0;
const NiRTTI * NiRTTI_NiStringsExtraData = (NiRTTI *)0x030AD100;
const NiRTTI * NiRTTI_NiCamera = (NiRTTI *)0x030AD110;
const NiRTTI * NiRTTI_BSTriShape = (NiRTTI *)0x030AD128;
const NiRTTI * NiRTTI_NiProperty = (NiRTTI *)0x030AD138;
const NiRTTI * NiRTTI_NiAlphaProperty = (NiRTTI *)0x030AD150;
const NiRTTI * NiRTTI_NiSourceTexture = (NiRTTI *)0x030AE188;
const NiRTTI * NiRTTI_BSFlattenedBoneTree = (NiRTTI *)0x030AE198;
const NiRTTI * NiRTTI_BSDismemberSkinInstance = (NiRTTI *)0x030AE1E0;
const NiRTTI * NiRTTI_NiStringExtraData = (NiRTTI *)0x030AE1F0;
const NiRTTI * NiRTTI_NiTimeController = (NiRTTI *)0x030AE200;
const NiRTTI * NiRTTI_NiExtraData = (NiRTTI *)0x030AE220;
const NiRTTI * NiRTTI_NiGeometryData = (NiRTTI *)0x030AE230;
const NiRTTI * NiRTTI_BSGeometry = (NiRTTI *)0x030AE248;
const NiRTTI * NiRTTI_BSDynamicTriShape = (NiRTTI *)0x030AE260;
const NiRTTI * NiRTTI_NiPointLight = (NiRTTI *)0x030AE270;
const NiRTTI * NiRTTI_NiDefaultAVObjectPalette = (NiRTTI *)0x030AE280;
const NiRTTI * NiRTTI_NiBillboardNode = (NiRTTI *)0x030AE2A8;
const NiRTTI * NiRTTI_NiDirectionalLight = (NiRTTI *)0x030AE2B8;
const NiRTTI * NiRTTI_NiCullingProcess = (NiRTTI *)0x030AE2C8;
const NiRTTI * NiRTTI_NiParticles = (NiRTTI *)0x030AE2E0;
const NiRTTI * NiRTTI_NiTexture = (NiRTTI *)0x030AE320;
const NiRTTI * NiRTTI_NiSkinPartition = (NiRTTI *)0x030AE430;
const NiRTTI * NiRTTI_NiVertWeightsExtraData = (NiRTTI *)0x030AE440;
const NiRTTI * NiRTTI_NiSkinInstance = (NiRTTI *)0x030AE450;
const NiRTTI * NiRTTI_NiAVObjectPalette = (NiRTTI *)0x030AE460;
const NiRTTI * NiRTTI_NiGeometry = (NiRTTI *)0x030AE470;
const NiRTTI * NiRTTI_NiSkinData = (NiRTTI *)0x030AE4A0;
const NiRTTI * NiRTTI_NiShadeProperty = (NiRTTI *)0x030AE4B0;
const NiRTTI * NiRTTI_NiAlphaAccumulator = (NiRTTI *)0x030AE4C8;
const NiRTTI * NiRTTI_NiAmbientLight = (NiRTTI *)0x030AE4D8;
const NiRTTI * NiRTTI_NiBinaryExtraData = (NiRTTI *)0x030AE4E8;
const NiRTTI * NiRTTI_NiBooleanExtraData = (NiRTTI *)0x030AE4F8;
const NiRTTI * NiRTTI_NiBSPNode = (NiRTTI *)0x030AE508;
const NiRTTI * NiRTTI_NiColorExtraData = (NiRTTI *)0x030AE518;
const NiRTTI * NiRTTI_NiFloatExtraData = (NiRTTI *)0x030AE528;
const NiRTTI * NiRTTI_NiFloatsExtraData = (NiRTTI *)0x030AE538;
const NiRTTI * NiRTTI_NiFogProperty = (NiRTTI *)0x030AE548;
const NiRTTI * NiRTTI_NiIntegerExtraData = (NiRTTI *)0x030AE560;
const NiRTTI * NiRTTI_NiIntegersExtraData = (NiRTTI *)0x030AE570;
const NiRTTI * NiRTTI_NiParticlesData = (NiRTTI *)0x030AE5B8;
const NiRTTI * NiRTTI_NiParticleMeshesData = (NiRTTI *)0x030AE5C8;
const NiRTTI * NiRTTI_NiParticleMeshes = (NiRTTI *)0x030AE5D8;
const NiRTTI * NiRTTI_NiSpotLight = (NiRTTI *)0x030AE5E8;
const NiRTTI * NiRTTI_NiSwitchStringExtraData = (NiRTTI *)0x030AE5F8;
const NiRTTI * NiRTTI_NiTriShapeData = (NiRTTI *)0x030AE608;
const NiRTTI * NiRTTI_NiTriShape = (NiRTTI *)0x030AE618;
const NiRTTI * NiRTTI_NiTriStripsData = (NiRTTI *)0x030AE628;
const NiRTTI * NiRTTI_NiTriStrips = (NiRTTI *)0x030AE638;
const NiRTTI * NiRTTI_NiVectorExtraData = (NiRTTI *)0x030AE648;
const NiRTTI * NiRTTI_BSLODTriShape = (NiRTTI *)0x030AE670;
const NiRTTI * NiRTTI_NiAdditionalGeometryData = (NiRTTI *)0x030AE680;
const NiRTTI * NiRTTI_BSSegmentedTriShape = (NiRTTI *)0x030AE698;
const NiRTTI * NiRTTI_NiBackToFrontAccumulator = (NiRTTI *)0x030AE6D0;
const NiRTTI * NiRTTI_NiAccumulator = (NiRTTI *)0x030AE6E0;
const NiRTTI * NiRTTI_NiTriBasedGeomData = (NiRTTI *)0x030AE6F0;
const NiRTTI * NiRTTI_NiTriBasedGeom = (NiRTTI *)0x030AE700;
const NiRTTI * NiRTTI_NiCollisionData = (NiRTTI *)0x030AE740;
const NiRTTI * NiRTTI_NiControllerManager = (NiRTTI *)0x030AE7D8;
const NiRTTI * NiRTTI_NiControllerSequence = (NiRTTI *)0x030AE7F8;
const NiRTTI * NiRTTI_NiBlendInterpolator = (NiRTTI *)0x030AE828;
const NiRTTI * NiRTTI_NiMultiTargetTransformController = (NiRTTI *)0x030AE838;
const NiRTTI * NiRTTI_BSMultiTargetTreadTransfController = (NiRTTI *)0x030AE848;
const NiRTTI * NiRTTI_NiInterpController = (NiRTTI *)0x030AE858;
const NiRTTI * NiRTTI_NiFloatData = (NiRTTI *)0x030AF628;
const NiRTTI * NiRTTI_NiFloatInterpolator = (NiRTTI *)0x030AF638;
const NiRTTI * NiRTTI_NiColorData = (NiRTTI *)0x030AF648;
const NiRTTI * NiRTTI_NiColorInterpolator = (NiRTTI *)0x030AF658;
const NiRTTI * NiRTTI_NiSingleInterpController = (NiRTTI *)0x030AF668;
const NiRTTI * NiRTTI_NiTransformInterpolator = (NiRTTI *)0x030AF678;
const NiRTTI * NiRTTI_NiPathInterpolator = (NiRTTI *)0x030AF688;
const NiRTTI * NiRTTI_NiBlendTransformInterpolator = (NiRTTI *)0x030AF6A8;
const NiRTTI * NiRTTI_NiBlendFloatInterpolator = (NiRTTI *)0x030AF6B8;
const NiRTTI * NiRTTI_NiFloatExtraDataController = (NiRTTI *)0x030AF6C8;
const NiRTTI * NiRTTI_NiTransformController = (NiRTTI *)0x030AF6D8;
const NiRTTI * NiRTTI_NiBlendAccumTransformInterpolator = (NiRTTI *)0x030AF6E8;
const NiRTTI * NiRTTI_NiInterpolator = (NiRTTI *)0x030AF700;
const NiRTTI * NiRTTI_BSBlendTreadTransfInterpolator = (NiRTTI *)0x030AF720;
const NiRTTI * NiRTTI_NiKeyBasedInterpolator = (NiRTTI *)0x030AF738;
const NiRTTI * NiRTTI_NiTransformData = (NiRTTI *)0x030AF7B8;
const NiRTTI * NiRTTI_NiPosData = (NiRTTI *)0x030AF7C8;
const NiRTTI * NiRTTI_NiBlendBoolInterpolator = (NiRTTI *)0x030AF7D8;
const NiRTTI * NiRTTI_NiBlendColorInterpolator = (NiRTTI *)0x030AF7E8;
const NiRTTI * NiRTTI_NiBlendPoint3Interpolator = (NiRTTI *)0x030AF7F8;
const NiRTTI * NiRTTI_NiBlendQuaternionInterpolator = (NiRTTI *)0x030AF808;
const NiRTTI * NiRTTI_NiBoolData = (NiRTTI *)0x030AF818;
const NiRTTI * NiRTTI_NiBoolInterpolator = (NiRTTI *)0x030AF828;
const NiRTTI * NiRTTI_NiBoolTimelineInterpolator = (NiRTTI *)0x030AF838;
const NiRTTI * NiRTTI_NiBSplineBasisData = (NiRTTI *)0x030AF848;
const NiRTTI * NiRTTI_NiBSplineData = (NiRTTI *)0x030AF858;
const NiRTTI * NiRTTI_NiBSplineColorInterpolator = (NiRTTI *)0x030AF868;
const NiRTTI * NiRTTI_NiBSplineCompColorInterpolator = (NiRTTI *)0x030AF878;
const NiRTTI * NiRTTI_NiBSplineCompFloatInterpolator = (NiRTTI *)0x030AF888;
const NiRTTI * NiRTTI_NiBSplineCompPoint3Interpolator = (NiRTTI *)0x030AF898;
const NiRTTI * NiRTTI_NiBSplineCompTransformInterpolator = (NiRTTI *)0x030AF8A8;
const NiRTTI * NiRTTI_NiBSplineFloatInterpolator = (NiRTTI *)0x030AF8B8;
const NiRTTI * NiRTTI_NiBSplinePoint3Interpolator = (NiRTTI *)0x030AF8C8;
const NiRTTI * NiRTTI_NiBSplineTransformInterpolator = (NiRTTI *)0x030AF8D8;
const NiRTTI * NiRTTI_NiColorExtraDataController = (NiRTTI *)0x030AF8E8;
const NiRTTI * NiRTTI_NiFloatsExtraDataController = (NiRTTI *)0x030AF8F8;
const NiRTTI * NiRTTI_NiFloatsExtraDataPoint3Controller = (NiRTTI *)0x030AF908;
const NiRTTI * NiRTTI_NiKeyframeManager = (NiRTTI *)0x030AF920;
const NiRTTI * NiRTTI_NiLightColorController = (NiRTTI *)0x030AF930;
const NiRTTI * NiRTTI_NiLightDimmerController = (NiRTTI *)0x030AF940;
const NiRTTI * NiRTTI_NiLookAtController = (NiRTTI *)0x030AF950;
const NiRTTI * NiRTTI_NiLookAtInterpolator = (NiRTTI *)0x030AF960;
const NiRTTI * NiRTTI_NiMorphData = (NiRTTI *)0x030AF970;
const NiRTTI * NiRTTI_NiPathController = (NiRTTI *)0x030AF980;
const NiRTTI * NiRTTI_NiPoint3Interpolator = (NiRTTI *)0x030AF990;
const NiRTTI * NiRTTI_NiQuaternionInterpolator = (NiRTTI *)0x030AF9A0;
const NiRTTI * NiRTTI_NiRollController = (NiRTTI *)0x030AF9B0;
const NiRTTI * NiRTTI_NiRotData = (NiRTTI *)0x030AF9C0;
const NiRTTI * NiRTTI_NiSequence = (NiRTTI *)0x030AF9D0;
const NiRTTI * NiRTTI_NiSequenceStreamHelper = (NiRTTI *)0x030AF9F0;
const NiRTTI * NiRTTI_NiStringPalette = (NiRTTI *)0x030AFA00;
const NiRTTI * NiRTTI_NiTextKeyExtraData = (NiRTTI *)0x030AFA10;
const NiRTTI * NiRTTI_NiUVData = (NiRTTI *)0x030AFA20;
const NiRTTI * NiRTTI_NiVisController = (NiRTTI *)0x030AFA30;
const NiRTTI * NiRTTI_BSAnimNote = (NiRTTI *)0x030AFA40;
const NiRTTI * NiRTTI_BSAnimNotes = (NiRTTI *)0x030AFA50;
const NiRTTI * NiRTTI_BSGrabIKNote = (NiRTTI *)0x030AFA60;
const NiRTTI * NiRTTI_BSLookIKNote = (NiRTTI *)0x030AFA70;
const NiRTTI * NiRTTI_BSRotAccumTransfInterpolator = (NiRTTI *)0x030AFA80;
const NiRTTI * NiRTTI_BSTreadTransfInterpolator = (NiRTTI *)0x030AFA90;
const NiRTTI * NiRTTI_BSFrustumFOVController = (NiRTTI *)0x030AFAA0;
const NiRTTI * NiRTTI_NiExtraDataController = (NiRTTI *)0x030AFB38;
const NiRTTI * NiRTTI_NiBSplineInterpolator = (NiRTTI *)0x030AFB48;
const NiRTTI * NiRTTI_NiPoint3InterpController = (NiRTTI *)0x030AFB58;
const NiRTTI * NiRTTI_NiFloatInterpController = (NiRTTI *)0x030AFB68;
const NiRTTI * NiRTTI_NiFloatController = (NiRTTI *)0x030AFB78;
const NiRTTI * NiRTTI_NiBoolInterpController = (NiRTTI *)0x030AFB88;
const NiRTTI * NiRTTI_NiParticleSystem = (NiRTTI *)0x030AFBA0;
const NiRTTI * NiRTTI_NiPSysEmitterCtlr = (NiRTTI *)0x030AFBB0;
const NiRTTI * NiRTTI_NiPSysGravityModifier = (NiRTTI *)0x030AFBC0;
const NiRTTI * NiRTTI_BSPSysHavokUpdateModifier = (NiRTTI *)0x030AFBD0;
const NiRTTI * NiRTTI_NiMeshParticleSystem = (NiRTTI *)0x030AFBE8;
const NiRTTI * NiRTTI_NiPSysCylinderEmitter = (NiRTTI *)0x030AFC00;
const NiRTTI * NiRTTI_BSStripParticleSystem = (NiRTTI *)0x030AFC10;
const NiRTTI * NiRTTI_NiPSysEmitter = (NiRTTI *)0x030AFC20;
const NiRTTI * NiRTTI_NiPSysModifierCtlr = (NiRTTI *)0x030AFC30;
const NiRTTI * NiRTTI_NiPSysModifier = (NiRTTI *)0x030AFC48;
const NiRTTI * NiRTTI_NiPSysMeshUpdateModifier = (NiRTTI *)0x030AFC58;
const NiRTTI * NiRTTI_NiPSysUpdateCtlr = (NiRTTI *)0x030AFC68;
const NiRTTI * NiRTTI_NiMeshPSysData = (NiRTTI *)0x030AFC78;
const NiRTTI * NiRTTI_NiPSysAirFieldAirFrictionCtlr = (NiRTTI *)0x030AFC88;
const NiRTTI * NiRTTI_NiPSysAirFieldInheritVelocityCtlr = (NiRTTI *)0x030AFC98;
const NiRTTI * NiRTTI_NiPSysAirFieldModifier = (NiRTTI *)0x030AFCA8;
const NiRTTI * NiRTTI_NiPSysAirFieldSpreadCtlr = (NiRTTI *)0x030AFCB8;
const NiRTTI * NiRTTI_NiPSysAgeDeathModifier = (NiRTTI *)0x030AFCC8;
const NiRTTI * NiRTTI_NiPSysBombModifier = (NiRTTI *)0x030AFCD8;
const NiRTTI * NiRTTI_NiPSysBoundUpdateModifier = (NiRTTI *)0x030AFCE8;
const NiRTTI * NiRTTI_NiPSysBoxEmitter = (NiRTTI *)0x030AFCF8;
const NiRTTI * NiRTTI_NiPSysColliderManager = (NiRTTI *)0x030AFD08;
const NiRTTI * NiRTTI_NiPSysColorModifier = (NiRTTI *)0x030AFD18;
const NiRTTI * NiRTTI_NiPSysData = (NiRTTI *)0x030AFD28;
const NiRTTI * NiRTTI_NiPSysDragFieldModifier = (NiRTTI *)0x030AFD38;
const NiRTTI * NiRTTI_NiPSysDragModifier = (NiRTTI *)0x030AFD48;
const NiRTTI * NiRTTI_NiPSysEmitterCtlrData = (NiRTTI *)0x030AFD58;
const NiRTTI * NiRTTI_NiPSysEmitterDeclinationCtlr = (NiRTTI *)0x030AFD68;
const NiRTTI * NiRTTI_NiPSysEmitterDeclinationVarCtlr = (NiRTTI *)0x030AFD78;
const NiRTTI * NiRTTI_NiPSysEmitterInitialRadiusCtlr = (NiRTTI *)0x030AFD88;
const NiRTTI * NiRTTI_NiPSysEmitterLifeSpanCtlr = (NiRTTI *)0x030AFD98;
const NiRTTI * NiRTTI_NiPSysEmitterPlanarAngleCtlr = (NiRTTI *)0x030AFDA8;
const NiRTTI * NiRTTI_NiPSysEmitterPlanarAngleVarCtlr = (NiRTTI *)0x030AFDB8;
const NiRTTI * NiRTTI_NiPSysEmitterSpeedCtlr = (NiRTTI *)0x030AFDC8;
const NiRTTI * NiRTTI_NiPSysFieldAttenuationCtlr = (NiRTTI *)0x030AFDD8;
const NiRTTI * NiRTTI_NiPSysFieldMagnitudeCtlr = (NiRTTI *)0x030AFDE8;
const NiRTTI * NiRTTI_NiPSysFieldMaxDistanceCtlr = (NiRTTI *)0x030AFDF8;
const NiRTTI * NiRTTI_NiPSysGravityFieldModifier = (NiRTTI *)0x030AFE08;
const NiRTTI * NiRTTI_NiPSysGravityStrengthCtlr = (NiRTTI *)0x030AFE18;
const NiRTTI * NiRTTI_NiPSysGrowFadeModifier = (NiRTTI *)0x030AFE28;
const NiRTTI * NiRTTI_NiPSysInitialRotAngleCtlr = (NiRTTI *)0x030AFE38;
const NiRTTI * NiRTTI_NiPSysInitialRotAngleVarCtlr = (NiRTTI *)0x030AFE48;
const NiRTTI * NiRTTI_NiPSysInitialRotSpeedCtlr = (NiRTTI *)0x030AFE58;
const NiRTTI * NiRTTI_NiPSysInitialRotSpeedVarCtlr = (NiRTTI *)0x030AFE68;
const NiRTTI * NiRTTI_NiPSysMeshEmitter = (NiRTTI *)0x030AFE78;
const NiRTTI * NiRTTI_NiPSysModifierActiveCtlr = (NiRTTI *)0x030AFEA8;
const NiRTTI * NiRTTI_NiPSysPlanarCollider = (NiRTTI *)0x030AFEB8;
const NiRTTI * NiRTTI_NiPSysPositionModifier = (NiRTTI *)0x030AFEC8;
const NiRTTI * NiRTTI_NiPSysRadialFieldModifier = (NiRTTI *)0x030AFED8;
const NiRTTI * NiRTTI_NiPSysResetOnLoopCtlr = (NiRTTI *)0x030AFEE8;
const NiRTTI * NiRTTI_NiPSysRotationModifier = (NiRTTI *)0x030AFEF8;
const NiRTTI * NiRTTI_NiPSysSpawnModifier = (NiRTTI *)0x030AFF08;
const NiRTTI * NiRTTI_NiPSysSphereEmitter = (NiRTTI *)0x030AFF18;
const NiRTTI * NiRTTI_NiPSysSphericalCollider = (NiRTTI *)0x030AFF28;
const NiRTTI * NiRTTI_NiPSysTurbulenceFieldModifier = (NiRTTI *)0x030AFF38;
const NiRTTI * NiRTTI_NiPSysVortexFieldModifier = (NiRTTI *)0x030AFF48;
const NiRTTI * NiRTTI_BSStripPSysData = (NiRTTI *)0x030AFF58;
const NiRTTI * NiRTTI_BSPSysRecycleBoundModifier = (NiRTTI *)0x030AFF70;
const NiRTTI * NiRTTI_BSPSysInheritVelocityModifier = (NiRTTI *)0x030AFF80;
const NiRTTI * NiRTTI_NiPSysVolumeEmitter = (NiRTTI *)0x030AFF90;
const NiRTTI * NiRTTI_NiPSysModifierFloatCtlr = (NiRTTI *)0x030AFFA0;
const NiRTTI * NiRTTI_NiPSysFieldModifier = (NiRTTI *)0x030AFFB0;
const NiRTTI * NiRTTI_NiPSysModifierBoolCtlr = (NiRTTI *)0x030AFFC0;
const NiRTTI * NiRTTI_NiPSysCollider = (NiRTTI *)0x030AFFD0;
const NiRTTI * NiRTTI_BSMultiBound = (NiRTTI *)0x030B8288;
const NiRTTI * NiRTTI_BSMultiBoundRoom = (NiRTTI *)0x030B8298;
const NiRTTI * NiRTTI_BSMultiBoundAABB = (NiRTTI *)0x030B82B0;
const NiRTTI * NiRTTI_BSMultiBoundOBB = (NiRTTI *)0x030B82C8;
const NiRTTI * NiRTTI_BSXFlags = (NiRTTI *)0x030B82E8;
const NiRTTI * NiRTTI_BSValueNode = (NiRTTI *)0x030B8300;
const NiRTTI * NiRTTI_BSWindModifier = (NiRTTI *)0x030BE880;
const NiRTTI * NiRTTI_BSTempNodeManager = (NiRTTI *)0x030BE8A0;
const NiRTTI * NiRTTI_BSTempNode = (NiRTTI *)0x030BE8B0;
const NiRTTI * NiRTTI_BSOcclusionShape = (NiRTTI *)0x030BE8D0;
const NiRTTI * NiRTTI_BSRangeNode = (NiRTTI *)0x030BE9C8;
const NiRTTI * NiRTTI_BSBlastNode = (NiRTTI *)0x030BEC00;
const NiRTTI * NiRTTI_BSDebrisNode = (NiRTTI *)0x030BEC10;
const NiRTTI * NiRTTI_BSDamageStage = (NiRTTI *)0x030BEC20;
const NiRTTI * NiRTTI_BSPSysArrayEmitter = (NiRTTI *)0x030BEC30;
const NiRTTI * NiRTTI_PArrayPoint = (NiRTTI *)0x030BEC40;
const NiRTTI * NiRTTI_BSMultiStreamInstanceTriShape = (NiRTTI *)0x030BEC68;
const NiRTTI * NiRTTI_BSMultiBoundShape = (NiRTTI *)0x030BEC98;
const NiRTTI * NiRTTI_BSMultiBoundSphere = (NiRTTI *)0x030BECA8;
const NiRTTI * NiRTTI_BSOcclusionBox = (NiRTTI *)0x030BECC0;
const NiRTTI * NiRTTI_BSOcclusionPlane = (NiRTTI *)0x030BECD8;
const NiRTTI * NiRTTI_BSPortal = (NiRTTI *)0x030BECE8;
const NiRTTI * NiRTTI_BSPortalSharedNode = (NiRTTI *)0x030BECF8;
const NiRTTI * NiRTTI_BSBodyMorphOffsetsExtraData = (NiRTTI *)0x030BED10;
const NiRTTI * NiRTTI_BSBehaviorGraphExtraData = (NiRTTI *)0x030BED20;
const NiRTTI * NiRTTI_NiBSBoneLODController = (NiRTTI *)0x030BED38;
const NiRTTI * NiRTTI_BSCullingProcess = (NiRTTI *)0x030BED58;
const NiRTTI * NiRTTI_BSParticleSystemManager = (NiRTTI *)0x030BED78;
const NiRTTI * NiRTTI_BSFurnitureMarkerNode = (NiRTTI *)0x030BEDA0;
const NiRTTI * NiRTTI_BSBound = (NiRTTI *)0x030BEE20;
const NiRTTI * NiRTTI_BSMultiBoundNode = (NiRTTI *)0x030BEE40;
const NiRTTI * NiRTTI_BSBoneMap = (NiRTTI *)0x030BEE50;
const NiRTTI * NiRTTI_BSAnimInteractionMarker = (NiRTTI *)0x030BEE68;
const NiRTTI * NiRTTI_BSSceneGraph = (NiRTTI *)0x030BEE80;
const NiRTTI * NiRTTI_BSPSysMultiTargetEmitterCtlr = (NiRTTI *)0x030BEE98;
const NiRTTI * NiRTTI_BSGeometryListCullingProcess = (NiRTTI *)0x030BEEB0;
const NiRTTI * NiRTTI_BSSubIndexTriShape = (NiRTTI *)0x030BEEC8;
const NiRTTI * NiRTTI_BSDistantObjectLargeRefExtraData = (NiRTTI *)0x030BEED8;
const NiRTTI * NiRTTI_BSMasterParticleSystem = (NiRTTI *)0x030C08A0;
const NiRTTI * NiRTTI_BSProceduralLightningController = (NiRTTI *)0x030C08C8;
const NiRTTI * NiRTTI_BSInvMarker = (NiRTTI *)0x030C08D8;
const NiRTTI * NiRTTI_BSBoneLODExtraData = (NiRTTI *)0x030C08F0;
const NiRTTI * NiRTTI_BSReference = (NiRTTI *)0x030C0910;
const NiRTTI * NiRTTI_BSNodeReferences = (NiRTTI *)0x030C0920;
const NiRTTI * NiRTTI_BSDecalPlacementVectorExtraData = (NiRTTI *)0x030C0930;
const NiRTTI * NiRTTI_BSParentVelocityModifier = (NiRTTI *)0x030C0940;
const NiRTTI * NiRTTI_BSWArray = (NiRTTI *)0x030C0950;
const NiRTTI * NiRTTI_BSMultiBoundCapsule = (NiRTTI *)0x030C0968;
const NiRTTI * NiRTTI_BSPSysStripUpdateModifier = (NiRTTI *)0x030C0978;
const NiRTTI * NiRTTI_BSPSysSubTexModifier = (NiRTTI *)0x030C0988;
const NiRTTI * NiRTTI_BSPSysScaleModifier = (NiRTTI *)0x030C0998;
const NiRTTI * NiRTTI_BSLagBoneController = (NiRTTI *)0x030C09A8;
const NiRTTI * NiRTTI_BSNonUniformScaleExtraData = (NiRTTI *)0x030C09B8;
const NiRTTI * NiRTTI_BSNiNode = (NiRTTI *)0x030C09D0;
const NiRTTI * NiRTTI_BSInstanceTriShape = (NiRTTI *)0x030C09E0;
const NiRTTI * NiRTTI_bhkWorldObject = (NiRTTI *)0x030C6ED8;
const NiRTTI * NiRTTI_bhkWorld = (NiRTTI *)0x030C6F18;
const NiRTTI * NiRTTI_bhkRigidBody = (NiRTTI *)0x030C8058;
const NiRTTI * NiRTTI_bhkCollisionObject = (NiRTTI *)0x030C8070;
const NiRTTI * NiRTTI_bhkNiCollisionObject = (NiRTTI *)0x030C8120;
const NiRTTI * NiRTTI_bhkAttachmentCollisionObject = (NiRTTI *)0x030C81A0;
const NiRTTI * NiRTTI_WeaponObject = (NiRTTI *)0x030C81B0;
const NiRTTI * NiRTTI_bhkRigidBodyT = (NiRTTI *)0x030C81D8;
const NiRTTI * NiRTTI_bhkWorldM = (NiRTTI *)0x030C81E8;
const NiRTTI * NiRTTI_bhkRefObject = (NiRTTI *)0x030C8210;
const NiRTTI * NiRTTI_bhkSerializable = (NiRTTI *)0x030C8220;
const NiRTTI * NiRTTI_bhkShape = (NiRTTI *)0x030C8250;
const NiRTTI * NiRTTI_bhkEntity = (NiRTTI *)0x030C8268;
const NiRTTI * NiRTTI_bhkPhantom = (NiRTTI *)0x030C8280;
const NiRTTI * NiRTTI_bhkAabbPhantom = (NiRTTI *)0x030C8298;
const NiRTTI * NiRTTI_bhkSphereRepShape = (NiRTTI *)0x030C82B0;
const NiRTTI * NiRTTI_bhkConvexShape = (NiRTTI *)0x030C82C8;
const NiRTTI * NiRTTI_bhkPCollisionObject = (NiRTTI *)0x030C82D8;
const NiRTTI * NiRTTI_hkPackedNiTriStripsData = (NiRTTI *)0x030C82E8;
const NiRTTI * NiRTTI_bhkShapePhantom = (NiRTTI *)0x030C8300;
const NiRTTI * NiRTTI_bhkSimpleShapePhantom = (NiRTTI *)0x030C8318;
const NiRTTI * NiRTTI_bhkCapsuleShape = (NiRTTI *)0x030C8330;
const NiRTTI * NiRTTI_bhkBoxShape = (NiRTTI *)0x030C8348;
const NiRTTI * NiRTTI_bhkSphereShape = (NiRTTI *)0x030C8360;
const NiRTTI * NiRTTI_bhkBvTreeShape = (NiRTTI *)0x030C8378;
const NiRTTI * NiRTTI_bhkNiTriStripsShape = (NiRTTI *)0x030C8390;
const NiRTTI * NiRTTI_bhkPackedNiTriStripsShape = (NiRTTI *)0x030C83B8;
const NiRTTI * NiRTTI_bhkBlendCollisionObject = (NiRTTI *)0x030C83D0;
const NiRTTI * NiRTTI_bhkAvoidBox = (NiRTTI *)0x030C83F0;
const NiRTTI * NiRTTI_bhkLimitedHingeConstraint = (NiRTTI *)0x030C8408;
const NiRTTI * NiRTTI_bhkMalleableConstraint = (NiRTTI *)0x030C8420;
const NiRTTI * NiRTTI_bhkUnaryAction = (NiRTTI *)0x030C8438;
const NiRTTI * NiRTTI_bhkConstraint = (NiRTTI *)0x030C8450;
const NiRTTI * NiRTTI_bhkPrismaticConstraint = (NiRTTI *)0x030C8468;
const NiRTTI * NiRTTI_bhkAction = (NiRTTI *)0x030C8480;
const NiRTTI * NiRTTI_bhkTriSampledHeightFieldBvTreeShape = (NiRTTI *)0x030C8498;
const NiRTTI * NiRTTI_bhkCachingShapePhantom = (NiRTTI *)0x030C9108;
const NiRTTI * NiRTTI_bhkRagdollTemplateData = (NiRTTI *)0x030C9130;
const NiRTTI * NiRTTI_bhkRagdollTemplate = (NiRTTI *)0x030C9140;
const NiRTTI * NiRTTI_bhkSPCollisionObject = (NiRTTI *)0x030C9150;
const NiRTTI * NiRTTI_bhkMouseSpringAction = (NiRTTI *)0x030C9168;
const NiRTTI * NiRTTI_bhkHingeConstraint = (NiRTTI *)0x030C9180;
const NiRTTI * NiRTTI_bhkCompressedMeshShape = (NiRTTI *)0x030C91F8;
const NiRTTI * NiRTTI_bhkCompressedMeshShapeData = (NiRTTI *)0x030C9208;
const NiRTTI * NiRTTI_bhkConvexSweepShape = (NiRTTI *)0x030C9220;
const NiRTTI * NiRTTI_bhkConvexTransformShape = (NiRTTI *)0x030C9238;
const NiRTTI * NiRTTI_bhkConvexTranslateShape = (NiRTTI *)0x030C9250;
const NiRTTI * NiRTTI_bhkConvexVerticesShape = (NiRTTI *)0x030C9268;
const NiRTTI * NiRTTI_bhkCylinderShape = (NiRTTI *)0x030C9280;
const NiRTTI * NiRTTI_bhkMultiSphereShape = (NiRTTI *)0x030C9298;
const NiRTTI * NiRTTI_bhkPlaneShape = (NiRTTI *)0x030C92B0;
const NiRTTI * NiRTTI_bhkTriangleShape = (NiRTTI *)0x030C92C8;
const NiRTTI * NiRTTI_bhkMoppBvTreeShape = (NiRTTI *)0x030C92E0;
const NiRTTI * NiRTTI_bhkTransformShape = (NiRTTI *)0x030C92F8;
const NiRTTI * NiRTTI_bhkListShape = (NiRTTI *)0x030C9310;
const NiRTTI * NiRTTI_bhkBallAndSocketConstraint = (NiRTTI *)0x030C9328;
const NiRTTI * NiRTTI_bhkBallSocketConstraintChain = (NiRTTI *)0x030C9340;
const NiRTTI * NiRTTI_bhkGroupConstraint = (NiRTTI *)0x030C9358;
const NiRTTI * NiRTTI_bhkHingeLimitsConstraint = (NiRTTI *)0x030C9370;
const NiRTTI * NiRTTI_bhkFixedConstraint = (NiRTTI *)0x030C9388;
const NiRTTI * NiRTTI_bhkRagdollConstraint = (NiRTTI *)0x030C93A0;
const NiRTTI * NiRTTI_bhkRagdollLimitsConstraint = (NiRTTI *)0x030C93B8;
const NiRTTI * NiRTTI_bhkStiffSpringConstraint = (NiRTTI *)0x030C93D0;
const NiRTTI * NiRTTI_bhkWheelConstraint = (NiRTTI *)0x030C93E8;
const NiRTTI * NiRTTI_bhkBreakableConstraint = (NiRTTI *)0x030C9400;
const NiRTTI * NiRTTI_bhkAngularDashpotAction = (NiRTTI *)0x030C9418;
const NiRTTI * NiRTTI_bhkDashpotAction = (NiRTTI *)0x030C9430;
const NiRTTI * NiRTTI_bhkLiquidAction = (NiRTTI *)0x030C9448;
const NiRTTI * NiRTTI_bhkMotorAction = (NiRTTI *)0x030C9468;
const NiRTTI * NiRTTI_bhkOrientHingedBodyAction = (NiRTTI *)0x030C9480;
const NiRTTI * NiRTTI_bhkSpringAction = (NiRTTI *)0x030C9498;
const NiRTTI * NiRTTI_bhkBlendController = (NiRTTI *)0x030C94A8;
const NiRTTI * NiRTTI_bhkExtraData = (NiRTTI *)0x030C94B8;
const NiRTTI * NiRTTI_bhkPoseArray = (NiRTTI *)0x030C94C8;
const NiRTTI * NiRTTI_bhkGenericConstraint = (NiRTTI *)0x030C94E8;
const NiRTTI * NiRTTI_bhkCharControllerShape = (NiRTTI *)0x030C94F8;
const NiRTTI * NiRTTI_bhkCollisionBox = (NiRTTI *)0x030C9510;
const NiRTTI * NiRTTI_bhkShapeCollection = (NiRTTI *)0x030C9528;
const NiRTTI * NiRTTI_bhkPositionConstraintMotor = (NiRTTI *)0x030C9590;
const NiRTTI * NiRTTI_bhkVelocityConstraintMotor = (NiRTTI *)0x030C95A0;
const NiRTTI * NiRTTI_bhkSpringDamperConstraintMotor = (NiRTTI *)0x030C95B0;
const NiRTTI * NiRTTI_bhkCharacterProxy = (NiRTTI *)0x030CA368;
const NiRTTI * NiRTTI_bhkCharacterRigidBody = (NiRTTI *)0x030CA380;
const NiRTTI * NiRTTI_bhkHeightFieldShape = (NiRTTI *)0x030CB688;
const NiRTTI * NiRTTI_bhkConstraintChain = (NiRTTI *)0x030CB6A0;
const NiRTTI * NiRTTI_bhkBinaryAction = (NiRTTI *)0x030CB6B8;
const NiRTTI * NiRTTI_bhkPointToPathConstraint = (NiRTTI *)0x030CB6F0;
const NiRTTI * NiRTTI_DebugTextExtraData = (NiRTTI *)0x030CCEF0;
const NiRTTI * NiRTTI_BSFadeNode = (NiRTTI *)0x0326AE68;
const NiRTTI * NiRTTI_BSShaderProperty = (NiRTTI *)0x0326AE98;
const NiRTTI * NiRTTI_BSLeafAnimNode = (NiRTTI *)0x0326AEA8;
const NiRTTI * NiRTTI_BSTreeNode = (NiRTTI *)0x0326AEB8;
const NiRTTI * NiRTTI_ShadowSceneNode = (NiRTTI *)0x0326B2E0;
const NiRTTI * NiRTTI_BSLightingShaderProperty = (NiRTTI *)0x0326BBB0;
const NiRTTI * NiRTTI_BSGrassShaderProperty = (NiRTTI *)0x0326BBE8;
const NiRTTI * NiRTTI_BSShaderAccumulator = (NiRTTI *)0x0326BE00;
const NiRTTI * NiRTTI_BSEffectShaderProperty = (NiRTTI *)0x0326BFA0;
const NiRTTI * NiRTTI_BSWaterShaderProperty = (NiRTTI *)0x032CCDC8;
const NiRTTI * NiRTTI_BSBloodSplatterShaderProperty = (NiRTTI *)0x032CCDD8;
const NiRTTI * NiRTTI_BSParticleShaderProperty = (NiRTTI *)0x032CD1C8;
const NiRTTI * NiRTTI_BSTextureSet = (NiRTTI *)0x032CD518;
const NiRTTI * NiRTTI_BSShaderTextureSet = (NiRTTI *)0x032CD528;
const NiRTTI * NiRTTI_BSSkyShaderProperty = (NiRTTI *)0x032CD828;
const NiRTTI * NiRTTI_BSFadeNodeCuller = (NiRTTI *)0x0331D8B0;
const NiRTTI * NiRTTI_BSDistantTreeShaderProperty = (NiRTTI *)0x0331D8E0;
const NiRTTI * NiRTTI_BSCubeMapCamera = (NiRTTI *)0x0331DAC0;
const NiRTTI * NiRTTI_BSFogProperty = (NiRTTI *)0x0331DB78;
const NiRTTI * NiRTTI_BSClearZNode = (NiRTTI *)0x0352FC38;
const NiRTTI * NiRTTI_NiCollisionObject = (NiRTTI *)0x0352FD58;
const NiRTTI * NiRTTI_BSOrderedNode = (NiRTTI *)0x0352FD68;
const NiRTTI * NiRTTI_BSLines = (NiRTTI *)0x0352FD78;
const NiRTTI * NiRTTI_BSDynamicLines = (NiRTTI *)0x0352FD88;
const NiRTTI * NiRTTI_BSMultiIndexTriShape = (NiRTTI *)0x0352FDA8;
const NiRTTI * NiRTTI_BSLightingShaderPropertyFloatController = (NiRTTI *)0x0352FE50;
const NiRTTI * NiRTTI_BSLightingShaderPropertyUShortController = (NiRTTI *)0x0352FE68;
const NiRTTI * NiRTTI_BSLightingShaderPropertyColorController = (NiRTTI *)0x0352FE80;
const NiRTTI * NiRTTI_BSEffectShaderPropertyFloatController = (NiRTTI *)0x0352FEB8;
const NiRTTI * NiRTTI_BSEffectShaderPropertyColorController = (NiRTTI *)0x0352FED0;
const NiRTTI * NiRTTI_BSNiAlphaPropertyTestRefController = (NiRTTI *)0x0352FEE0;
const NiRTTI * NiRTTI_BSPSysSimpleColorModifier = (NiRTTI *)0x0352FEF0;
const NiRTTI * NiRTTI_BSPSysLODModifier = (NiRTTI *)0x0352FF00;
const NiRTTI * NiRTTI_BSParabolicCullingProcess = (NiRTTI *)0x03530388;
const NiRTTI * NiRTTI_BSMeshLODTriShape = (NiRTTI *)0x03530398;
const NiRTTI * NiRTTI_BSLODMultiIndexTriShape = (NiRTTI *)0x035303A8;
const NiRTTI * NiRTTI_BSSubIndexLandTriShape = (NiRTTI *)0x035303C0;

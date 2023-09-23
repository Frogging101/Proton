#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_016_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_DestroyOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_016_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_016_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_016_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayName(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid(void *, VROverlayHandle_t, uint32_t);
extern uint32_t cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds(void *, VROverlayHandle_t, const VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern uint32_t cppIVROverlay_IVROverlay_016_GetOverlayRenderModel(void *, VROverlayHandle_t, char *, uint32_t, HmdColor_t *, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRenderModel(void *, VROverlayHandle_t, const char *, const HmdColor_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, const HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t, const HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_016_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_016_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_1010 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayMouseScale(void *, VROverlayHandle_t, const HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection(void *, VROverlayHandle_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern bool cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayNeighbor(void *, EOverlayDirection, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(void *, EOverlayDirection, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTexture(void *, VROverlayHandle_t, const Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTexture(void *, VROverlayHandle_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, ETextureType *, EColorSpace *, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(void *, VROverlayHandle_t, void *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureSize(void *, VROverlayHandle_t, uint32_t *, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_016_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_016_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_016_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_016_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_016_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, const HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(void *, VROverlayHandle_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayFlags(void *, VROverlayHandle_t, uint32_t *);
extern VRMessageOverlayResponse cppIVROverlay_IVROverlay_016_ShowMessageOverlay(void *, const char *, const char *, const char *, const char *, const char *, const char *);
extern void cppIVROverlay_IVROverlay_016_CloseMessageOverlay(void *);
#ifdef __cplusplus
}
#endif

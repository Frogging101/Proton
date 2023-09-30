/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    void *pubRGB;
    uint32_t cubRGB;
    int32_t nWidth;
    int32_t nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_WriteScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchFilename;
    const char *pchThumbnailFilename;
    int32_t nWidth;
    int32_t nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_AddScreenshotToLibrary_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params
{
    void *linux_side;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TriggerScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params
{
    void *linux_side;
    bool bHook;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_HookScreenshots_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params
{
    void *linux_side;
    bool _ret;
    uint32_t hScreenshot;
    const char *pchLocation;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_SetLocation_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params
{
    void *linux_side;
    bool _ret;
    uint32_t hScreenshot;
    CSteamID steamID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagUser_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params
{
    void *linux_side;
    bool _ret;
    uint32_t hScreenshot;
    uint64_t unPublishedFileID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION002_TagPublishedFile_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

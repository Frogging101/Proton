/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamClient_SteamClient009_CreateSteamPipe_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamClient_SteamClient009_CreateSteamPipe( struct cppISteamClient_SteamClient009_CreateSteamPipe_params *params );

struct cppISteamClient_SteamClient009_BReleaseSteamPipe_params
{
    void *linux_side;
    bool _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient009_BReleaseSteamPipe( struct cppISteamClient_SteamClient009_BReleaseSteamPipe_params *params );

struct cppISteamClient_SteamClient009_ConnectToGlobalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t hSteamPipe;
};
extern void cppISteamClient_SteamClient009_ConnectToGlobalUser( struct cppISteamClient_SteamClient009_ConnectToGlobalUser_params *params );

struct cppISteamClient_SteamClient009_CreateLocalUser_params
{
    void *linux_side;
    int32_t _ret;
    int32_t *phSteamPipe;
    uint32_t eAccountType;
};
extern void cppISteamClient_SteamClient009_CreateLocalUser( struct cppISteamClient_SteamClient009_CreateLocalUser_params *params );

struct cppISteamClient_SteamClient009_ReleaseUser_params
{
    void *linux_side;
    int32_t hSteamPipe;
    int32_t hUser;
};
extern void cppISteamClient_SteamClient009_ReleaseUser( struct cppISteamClient_SteamClient009_ReleaseUser_params *params );

struct cppISteamClient_SteamClient009_GetISteamUser_params
{
    void *linux_side;
    void /*ISteamUser*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamUser( struct cppISteamClient_SteamClient009_GetISteamUser_params *params );

struct cppISteamClient_SteamClient009_GetISteamGameServer_params
{
    void *linux_side;
    void /*ISteamGameServer*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamGameServer( struct cppISteamClient_SteamClient009_GetISteamGameServer_params *params );

struct cppISteamClient_SteamClient009_SetLocalIPBinding_params
{
    void *linux_side;
    uint32_t unIP;
    uint16_t usPort;
};
extern void cppISteamClient_SteamClient009_SetLocalIPBinding( struct cppISteamClient_SteamClient009_SetLocalIPBinding_params *params );

struct cppISteamClient_SteamClient009_GetISteamFriends_params
{
    void *linux_side;
    void /*ISteamFriends*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamFriends( struct cppISteamClient_SteamClient009_GetISteamFriends_params *params );

struct cppISteamClient_SteamClient009_GetISteamUtils_params
{
    void *linux_side;
    void /*ISteamUtils*/ *_ret;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamUtils( struct cppISteamClient_SteamClient009_GetISteamUtils_params *params );

struct cppISteamClient_SteamClient009_GetISteamMatchmaking_params
{
    void *linux_side;
    void /*ISteamMatchmaking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamMatchmaking( struct cppISteamClient_SteamClient009_GetISteamMatchmaking_params *params );

struct cppISteamClient_SteamClient009_GetISteamMasterServerUpdater_params
{
    void *linux_side;
    void /*ISteamMasterServerUpdater*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamMasterServerUpdater( struct cppISteamClient_SteamClient009_GetISteamMasterServerUpdater_params *params );

struct cppISteamClient_SteamClient009_GetISteamMatchmakingServers_params
{
    void *linux_side;
    void /*ISteamMatchmakingServers*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamMatchmakingServers( struct cppISteamClient_SteamClient009_GetISteamMatchmakingServers_params *params );

struct cppISteamClient_SteamClient009_GetISteamGenericInterface_params
{
    void *linux_side;
    void *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamGenericInterface( struct cppISteamClient_SteamClient009_GetISteamGenericInterface_params *params );

struct cppISteamClient_SteamClient009_GetISteamUserStats_params
{
    void *linux_side;
    void /*ISteamUserStats*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamUserStats( struct cppISteamClient_SteamClient009_GetISteamUserStats_params *params );

struct cppISteamClient_SteamClient009_GetISteamGameServerStats_params
{
    void *linux_side;
    void /*ISteamGameServerStats*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamGameServerStats( struct cppISteamClient_SteamClient009_GetISteamGameServerStats_params *params );

struct cppISteamClient_SteamClient009_GetISteamApps_params
{
    void *linux_side;
    void /*ISteamApps*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamApps( struct cppISteamClient_SteamClient009_GetISteamApps_params *params );

struct cppISteamClient_SteamClient009_GetISteamNetworking_params
{
    void *linux_side;
    void /*ISteamNetworking*/ *_ret;
    int32_t hSteamUser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamNetworking( struct cppISteamClient_SteamClient009_GetISteamNetworking_params *params );

struct cppISteamClient_SteamClient009_GetISteamRemoteStorage_params
{
    void *linux_side;
    void /*ISteamRemoteStorage*/ *_ret;
    int32_t hSteamuser;
    int32_t hSteamPipe;
    const char *pchVersion;
};
extern void cppISteamClient_SteamClient009_GetISteamRemoteStorage( struct cppISteamClient_SteamClient009_GetISteamRemoteStorage_params *params );

struct cppISteamClient_SteamClient009_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamClient_SteamClient009_RunFrame( struct cppISteamClient_SteamClient009_RunFrame_params *params );

struct cppISteamClient_SteamClient009_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamClient_SteamClient009_GetIPCCallCount( struct cppISteamClient_SteamClient009_GetIPCCallCount_params *params );

struct cppISteamClient_SteamClient009_SetWarningMessageHook_params
{
    void *linux_side;
    void (*W_CDECL pFunction)(int32_t, const char *);
};
extern void cppISteamClient_SteamClient009_SetWarningMessageHook( struct cppISteamClient_SteamClient009_SetWarningMessageHook_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

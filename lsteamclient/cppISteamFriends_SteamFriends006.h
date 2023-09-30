/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamFriends_SteamFriends006_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends006_GetPersonaName( struct cppISteamFriends_SteamFriends006_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends006_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends006_SetPersonaName( struct cppISteamFriends_SteamFriends006_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends006_GetPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamFriends_SteamFriends006_GetPersonaState( struct cppISteamFriends_SteamFriends006_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendCount_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends006_GetFriendCount( struct cppISteamFriends_SteamFriends006_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends006_GetFriendByIndex( struct cppISteamFriends_SteamFriends006_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendRelationship_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends006_GetFriendRelationship( struct cppISteamFriends_SteamFriends006_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendPersonaState_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends006_GetFriendPersonaState( struct cppISteamFriends_SteamFriends006_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends006_GetFriendPersonaName( struct cppISteamFriends_SteamFriends006_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendAvatar_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDFriend;
    int32_t eAvatarSize;
};
extern void cppISteamFriends_SteamFriends006_GetFriendAvatar( struct cppISteamFriends_SteamFriends006_GetFriendAvatar_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    FriendGameInfo_t *pFriendGameInfo;
};
extern void cppISteamFriends_SteamFriends006_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends006_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int32_t iPersonaName;
};
extern void cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends006_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32_t iFriendFlags;
};
extern void cppISteamFriends_SteamFriends006_HasFriend( struct cppISteamFriends_SteamFriends006_HasFriend_params *params );

struct cppISteamFriends_SteamFriends006_GetClanCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamFriends_SteamFriends006_GetClanCount( struct cppISteamFriends_SteamFriends006_GetClanCount_params *params );

struct cppISteamFriends_SteamFriends006_GetClanByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int32_t iClan;
};
extern void cppISteamFriends_SteamFriends006_GetClanByIndex( struct cppISteamFriends_SteamFriends006_GetClanByIndex_params *params );

struct cppISteamFriends_SteamFriends006_GetClanName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends006_GetClanName( struct cppISteamFriends_SteamFriends006_GetClanName_params *params );

struct cppISteamFriends_SteamFriends006_GetClanTag_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDClan;
};
extern void cppISteamFriends_SteamFriends006_GetClanTag( struct cppISteamFriends_SteamFriends006_GetClanTag_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendCountFromSource_params
{
    void *linux_side;
    int32_t _ret;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends006_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends006_GetFriendCountFromSource_params *params );

struct cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    CSteamID steamIDSource;
    int32_t iFriend;
};
extern void cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex_params *params );

struct cppISteamFriends_SteamFriends006_IsUserInSource_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDSource;
};
extern void cppISteamFriends_SteamFriends006_IsUserInSource( struct cppISteamFriends_SteamFriends006_IsUserInSource_params *params );

struct cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params
{
    void *linux_side;
    CSteamID steamIDUser;
    bool bSpeaking;
};
extern void cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking_params *params );

struct cppISteamFriends_SteamFriends006_ActivateGameOverlay_params
{
    void *linux_side;
    const char *pchDialog;
};
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlay( struct cppISteamFriends_SteamFriends006_ActivateGameOverlay_params *params );

struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params
{
    void *linux_side;
    const char *pchDialog;
    CSteamID steamID;
};
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser_params *params );

struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params
{
    void *linux_side;
    const char *pchURL;
};
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage_params *params );

struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore_params *params );

struct cppISteamFriends_SteamFriends006_SetPlayedWith_params
{
    void *linux_side;
    CSteamID steamIDUserPlayedWith;
};
extern void cppISteamFriends_SteamFriends006_SetPlayedWith( struct cppISteamFriends_SteamFriends006_SetPlayedWith_params *params );

struct cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params
{
    void *linux_side;
    CSteamID steamIDLobby;
};
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

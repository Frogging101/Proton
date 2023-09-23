#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_101x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_101x
#include "struct_converters.h"
#include "cppISteamMatchmaking_SteamMatchMaking003.h"
int cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGameCount(void *linux_side)
{
    int _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetFavoriteGameCount();
    return (_ret);
}

bool cppISteamMatchmaking_SteamMatchMaking003_GetFavoriteGame(void *linux_side, int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, uint32 *pRTime32LastPlayedOnServer)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetFavoriteGame((int)iGame, (AppId_t *)pnAppID, (uint32 *)pnIP, (uint16 *)pnConnPort, (uint16 *)pnQueryPort, (uint32 *)punFlags, (uint32 *)pRTime32LastPlayedOnServer);
    return (_ret);
}

int cppISteamMatchmaking_SteamMatchMaking003_AddFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
    int _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->AddFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags, (uint32)rTime32LastPlayedOnServer);
    return (_ret);
}

bool cppISteamMatchmaking_SteamMatchMaking003_RemoveFavoriteGame(void *linux_side, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->RemoveFavoriteGame((AppId_t)nAppID, (uint32)nIP, (uint16)nConnPort, (uint16)nQueryPort, (uint32)unFlags);
    return (_ret);
}

void cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyList(void *linux_side)
{
    ((ISteamMatchmaking*)linux_side)->RequestLobbyList();
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListFilter(void *linux_side, const char *pchKeyToMatch, const char *pchValueToMatch)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListFilter((const char *)pchKeyToMatch, (const char *)pchValueToMatch);
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListNumericalFilter(void *linux_side, const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListNumericalFilter((const char *)pchKeyToMatch, (int)nValueToMatch, (int)nComparisonType);
}

void cppISteamMatchmaking_SteamMatchMaking003_AddRequestLobbyListSlotsAvailableFilter(void *linux_side)
{
    ((ISteamMatchmaking*)linux_side)->AddRequestLobbyListSlotsAvailableFilter();
}

CSteamID cppISteamMatchmaking_SteamMatchMaking003_GetLobbyByIndex(void *linux_side, int iLobby)
{
    CSteamID _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyByIndex((int)iLobby);
    return (_ret);
}

void cppISteamMatchmaking_SteamMatchMaking003_CreateLobby(void *linux_side, bool bPrivate)
{
    ((ISteamMatchmaking*)linux_side)->CreateLobby((bool)bPrivate);
}

void cppISteamMatchmaking_SteamMatchMaking003_JoinLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->JoinLobby((CSteamID)steamIDLobby);
}

void cppISteamMatchmaking_SteamMatchMaking003_LeaveLobby(void *linux_side, CSteamID steamIDLobby)
{
    ((ISteamMatchmaking*)linux_side)->LeaveLobby((CSteamID)steamIDLobby);
}

bool cppISteamMatchmaking_SteamMatchMaking003_InviteUserToLobby(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDInvitee)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->InviteUserToLobby((CSteamID)steamIDLobby, (CSteamID)steamIDInvitee);
    return (_ret);
}

int cppISteamMatchmaking_SteamMatchMaking003_GetNumLobbyMembers(void *linux_side, CSteamID steamIDLobby)
{
    int _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetNumLobbyMembers((CSteamID)steamIDLobby);
    return (_ret);
}

CSteamID cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberByIndex(void *linux_side, CSteamID steamIDLobby, int iMember)
{
    CSteamID _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyMemberByIndex((CSteamID)steamIDLobby, (int)iMember);
    return (_ret);
}

const char * cppISteamMatchmaking_SteamMatchMaking003_GetLobbyData(void *linux_side, CSteamID steamIDLobby, const char *pchKey)
{
    const char * _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey);
    return (_ret);
}

bool cppISteamMatchmaking_SteamMatchMaking003_SetLobbyData(void *linux_side, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->SetLobbyData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
    return (_ret);
}

const char * cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{
    const char * _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyMemberData((CSteamID)steamIDLobby, (CSteamID)steamIDUser, (const char *)pchKey);
    return (_ret);
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberData(void *linux_side, CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyMemberData((CSteamID)steamIDLobby, (const char *)pchKey, (const char *)pchValue);
}

bool cppISteamMatchmaking_SteamMatchMaking003_SendLobbyChatMsg(void *linux_side, CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->SendLobbyChatMsg((CSteamID)steamIDLobby, (const void *)pvMsgBody, (int)cubMsgBody);
    return (_ret);
}

int cppISteamMatchmaking_SteamMatchMaking003_GetLobbyChatEntry(void *linux_side, CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{
    int _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyChatEntry((CSteamID)steamIDLobby, (int)iChatID, (CSteamID *)pSteamIDUser, (void *)pvData, (int)cubData, (EChatEntryType *)peChatEntryType);
    return (_ret);
}

bool cppISteamMatchmaking_SteamMatchMaking003_RequestLobbyData(void *linux_side, CSteamID steamIDLobby)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->RequestLobbyData((CSteamID)steamIDLobby);
    return (_ret);
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyGameServer((CSteamID)steamIDLobby, (uint32)unGameServerIP, (uint16)unGameServerPort, (CSteamID)steamIDGameServer);
}

bool cppISteamMatchmaking_SteamMatchMaking003_GetLobbyGameServer(void *linux_side, CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyGameServer((CSteamID)steamIDLobby, (uint32 *)punGameServerIP, (uint16 *)punGameServerPort, (CSteamID *)psteamIDGameServer);
    return (_ret);
}

bool cppISteamMatchmaking_SteamMatchMaking003_SetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby, int cMaxMembers)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->SetLobbyMemberLimit((CSteamID)steamIDLobby, (int)cMaxMembers);
    return (_ret);
}

int cppISteamMatchmaking_SteamMatchMaking003_GetLobbyMemberLimit(void *linux_side, CSteamID steamIDLobby)
{
    int _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->GetLobbyMemberLimit((CSteamID)steamIDLobby);
    return (_ret);
}

void cppISteamMatchmaking_SteamMatchMaking003_SetLobbyVoiceEnabled(void *linux_side, CSteamID steamIDLobby, bool bVoiceEnabled)
{
    ((ISteamMatchmaking*)linux_side)->SetLobbyVoiceEnabled((CSteamID)steamIDLobby, (bool)bVoiceEnabled);
}

bool cppISteamMatchmaking_SteamMatchMaking003_RequestFriendsLobbies(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamMatchmaking*)linux_side)->RequestFriendsLobbies();
    return (_ret);
}

#ifdef __cplusplus
}
#endif

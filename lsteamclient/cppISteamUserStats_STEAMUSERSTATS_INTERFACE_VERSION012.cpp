#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012.h"
bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestCurrentStats();
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat(void *linux_side, const char *pchName, int32 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (int32 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2(void *linux_side, const char *pchName, float *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (float *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat(void *linux_side, const char *pchName, int32 nData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (int32)nData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2(void *linux_side, const char *pchName, float fData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (float)fData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat(void *linux_side, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement(void *linux_side, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievement((const char *)pchName, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement(void *linux_side, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetAchievement((const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement(void *linux_side, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->ClearAchievement((const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime(void *linux_side, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementAndUnlockTime((const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->StoreStats();
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon(void *linux_side, const char *pchName)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementIcon((const char *)pchName);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute(void *linux_side, const char *pchName, const char *pchKey)
{
    const char * _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((const char *)pchName, (const char *)pchKey);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress(void *linux_side, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
    return (_ret);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetNumAchievements();
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName(void *linux_side, uint32 iAchievement)
{
    const char * _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementName((uint32)iAchievement);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats(void *linux_side, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestUserStats((CSteamID)steamIDUser);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat(void *linux_side, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2(void *linux_side, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement(void *linux_side, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserAchievement((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime(void *linux_side, CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32 *punUnlockTime)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserAchievementAndUnlockTime((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats(void *linux_side, bool bAchievementsToo)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->ResetAllStats((bool)bAchievementsToo);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard(void *linux_side, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->FindOrCreateLeaderboard((const char *)pchLeaderboardName, (ELeaderboardSortMethod)eLeaderboardSortMethod, (ELeaderboardDisplayType)eLeaderboardDisplayType);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard(void *linux_side, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->FindLeaderboard((const char *)pchLeaderboardName);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    const char * _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardName((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardEntryCount((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardSortMethod((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardDisplayType((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntries((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardDataRequest)eLeaderboardDataRequest, (int)nRangeStart, (int)nRangeEnd);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntriesForUsers((SteamLeaderboard_t)hSteamLeaderboard, (CSteamID *)prgUsers, (int)cUsers);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry(void *linux_side, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_158 *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_158(pLeaderboardEntry, &lin_pLeaderboardEntry);
    _ret = ((ISteamUserStats*)linux_side)->GetDownloadedLeaderboardEntry((SteamLeaderboardEntries_t)hSteamLeaderboardEntries, (int)index, &lin_pLeaderboardEntry, (int32 *)pDetails, (int)cDetailsMax);
    lin_to_win_struct_LeaderboardEntry_t_158(&lin_pLeaderboardEntry, pLeaderboardEntry);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->UploadLeaderboardScore((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardUploadScoreMethod)eLeaderboardUploadScoreMethod, (int32)nScore, (const int32 *)pScoreDetails, (int)cScoreDetailsCount);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->AttachLeaderboardUGC((SteamLeaderboard_t)hSteamLeaderboard, (UGCHandle_t)hUGC);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetNumberOfCurrentPlayers();
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages(void *linux_side)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestGlobalAchievementPercentages();
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo(void *linux_side, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetMostAchievedAchievementInfo((char *)pchName, (uint32)unNameBufLen, (float *)pflPercent, (bool *)pbAchieved);
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo(void *linux_side, int iIteratorPrevious, char *pchName, uint32 unNameBufLen, float *pflPercent, bool *pbAchieved)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetNextMostAchievedAchievementInfo((int)iIteratorPrevious, (char *)pchName, (uint32)unNameBufLen, (float *)pflPercent, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent(void *linux_side, const char *pchName, float *pflPercent)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementAchievedPercent((const char *)pchName, (float *)pflPercent);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats(void *linux_side, int nHistoryDays)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestGlobalStats((int)nHistoryDays);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat(void *linux_side, const char *pchStatName, int64 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetGlobalStat((const char *)pchStatName, (int64 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2(void *linux_side, const char *pchStatName, double *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetGlobalStat((const char *)pchStatName, (double *)pData);
    return (_ret);
}

int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory(void *linux_side, const char *pchStatName, int64 *pData, uint32 cubData)
{
    int32 _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetGlobalStatHistory((const char *)pchStatName, (int64 *)pData, (uint32)cubData);
    return (_ret);
}

int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2(void *linux_side, const char *pchStatName, double *pData, uint32 cubData)
{
    int32 _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetGlobalStatHistory((const char *)pchStatName, (double *)pData, (uint32)cubData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits(void *linux_side, const char *pchName, int32 *pnMinProgress, int32 *pnMaxProgress)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementProgressLimits((const char *)pchName, (int32 *)pnMinProgress, (int32 *)pnMaxProgress);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2(void *linux_side, const char *pchName, float *pfMinProgress, float *pfMaxProgress)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementProgressLimits((const char *)pchName, (float *)pfMinProgress, (float *)pfMaxProgress);
    return (_ret);
}

#ifdef __cplusplus
}
#endif

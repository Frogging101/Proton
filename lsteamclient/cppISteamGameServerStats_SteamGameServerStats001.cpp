/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameServerStats_SteamGameServerStats001.h"

void cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->RequestUserStats( params->steamIDUser );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserStat( params->steamIDUser, params->pchName, params->pData );
}

void cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->GetUserAchievement( params->steamIDUser, params->pchName, params->pbAchieved );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->nData );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserStat( params->steamIDUser, params->pchName, params->fData );
}

void cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->UpdateUserAvgRateStat( params->steamIDUser, params->pchName, params->flCountThisSession, params->dSessionLength );
}

void cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->SetUserAchievement( params->steamIDUser, params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->ClearUserAchievement( params->steamIDUser, params->pchName );
}

void cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *params )
{
    struct u_ISteamGameServerStats_SteamGameServerStats001 *iface = (struct u_ISteamGameServerStats_SteamGameServerStats001 *)params->linux_side;
    params->_ret = iface->StoreUserStats( params->steamIDUser );
}


/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends017.h"

void cppISteamFriends_SteamFriends017_GetPersonaName( struct cppISteamFriends_SteamFriends017_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends017_SetPersonaName( struct cppISteamFriends_SteamFriends017_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends017_GetPersonaState( struct cppISteamFriends_SteamFriends017_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends017_GetFriendCount( struct cppISteamFriends_SteamFriends017_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends017_GetFriendByIndex( struct cppISteamFriends_SteamFriends017_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends017_GetFriendRelationship( struct cppISteamFriends_SteamFriends017_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendPersonaState( struct cppISteamFriends_SteamFriends017_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendPersonaName( struct cppISteamFriends_SteamFriends017_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends017_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends017_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends017_GetFriendSteamLevel( struct cppISteamFriends_SteamFriends017_GetFriendSteamLevel_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendSteamLevel( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetPlayerNickname( struct cppISteamFriends_SteamFriends017_GetPlayerNickname_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetPlayerNickname( params->steamIDPlayer );
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupCount( struct cppISteamFriends_SteamFriends017_GetFriendsGroupCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupCount(  );
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex( struct cppISteamFriends_SteamFriends017_GetFriendsGroupIDByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupIDByIndex( params->iFG );
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupName( struct cppISteamFriends_SteamFriends017_GetFriendsGroupName_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupName( params->friendsGroupID );
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount( struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendsGroupMembersCount( params->friendsGroupID );
}

void cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList( struct cppISteamFriends_SteamFriends017_GetFriendsGroupMembersList_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->GetFriendsGroupMembersList( params->friendsGroupID, params->pOutSteamIDMembers, params->nMembersCount );
}

void cppISteamFriends_SteamFriends017_HasFriend( struct cppISteamFriends_SteamFriends017_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends017_GetClanCount( struct cppISteamFriends_SteamFriends017_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends017_GetClanByIndex( struct cppISteamFriends_SteamFriends017_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends017_GetClanName( struct cppISteamFriends_SteamFriends017_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanTag( struct cppISteamFriends_SteamFriends017_GetClanTag_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanActivityCounts( struct cppISteamFriends_SteamFriends017_GetClanActivityCounts_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanActivityCounts( params->steamIDClan, params->pnOnline, params->pnInGame, params->pnChatting );
}

void cppISteamFriends_SteamFriends017_DownloadClanActivityCounts( struct cppISteamFriends_SteamFriends017_DownloadClanActivityCounts_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->DownloadClanActivityCounts( params->psteamIDClans, params->cClansToRequest );
}

void cppISteamFriends_SteamFriends017_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends017_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends017_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends017_IsUserInSource( struct cppISteamFriends_SteamFriends017_IsUserInSource_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends017_SetInGameVoiceSpeaking_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlay( struct cppISteamFriends_SteamFriends017_ActivateGameOverlay_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToUser_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToWebPage_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL, params->eMode );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayToStore_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID, params->eFlag );
}

void cppISteamFriends_SteamFriends017_SetPlayedWith( struct cppISteamFriends_SteamFriends017_SetPlayedWith_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialog_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends017_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends017_GetSmallFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends017_GetMediumFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends017_GetLargeFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_RequestUserInformation( struct cppISteamFriends_SteamFriends017_RequestUserInformation_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends017_RequestClanOfficerList( struct cppISteamFriends_SteamFriends017_RequestClanOfficerList_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanOwner( struct cppISteamFriends_SteamFriends017_GetClanOwner_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanOfficerCount( struct cppISteamFriends_SteamFriends017_GetClanOfficerCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends017_GetClanOfficerByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
}

void cppISteamFriends_SteamFriends017_GetUserRestrictions( struct cppISteamFriends_SteamFriends017_GetUserRestrictions_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends017_SetRichPresence( struct cppISteamFriends_SteamFriends017_SetRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends017_ClearRichPresence( struct cppISteamFriends_SteamFriends017_ClearRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends017_GetFriendRichPresence( struct cppISteamFriends_SteamFriends017_GetFriendRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends017_GetFriendRichPresenceKeyByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
}

void cppISteamFriends_SteamFriends017_RequestFriendRichPresence( struct cppISteamFriends_SteamFriends017_RequestFriendRichPresence_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->RequestFriendRichPresence( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_InviteUserToGame( struct cppISteamFriends_SteamFriends017_InviteUserToGame_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
}

void cppISteamFriends_SteamFriends017_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends017_GetCoplayFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends017_GetCoplayFriend( struct cppISteamFriends_SteamFriends017_GetCoplayFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends017_GetFriendCoplayTime_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends017_GetFriendCoplayGame_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends017_JoinClanChatRoom( struct cppISteamFriends_SteamFriends017_JoinClanChatRoom_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->JoinClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_LeaveClanChatRoom( struct cppISteamFriends_SteamFriends017_LeaveClanChatRoom_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->LeaveClanChatRoom( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetClanChatMemberCount( struct cppISteamFriends_SteamFriends017_GetClanChatMemberCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanChatMemberCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetChatMemberByIndex( struct cppISteamFriends_SteamFriends017_GetChatMemberByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    *params->_ret = iface->GetChatMemberByIndex( params->steamIDClan, params->iUser );
}

void cppISteamFriends_SteamFriends017_SendClanChatMessage( struct cppISteamFriends_SteamFriends017_SendClanChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SendClanChatMessage( params->steamIDClanChat, params->pchText );
}

void cppISteamFriends_SteamFriends017_GetClanChatMessage( struct cppISteamFriends_SteamFriends017_GetClanChatMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetClanChatMessage( params->steamIDClanChat, params->iMessage, params->prgchText, params->cchTextMax, params->peChatEntryType, params->psteamidChatter );
}

void cppISteamFriends_SteamFriends017_IsClanChatAdmin( struct cppISteamFriends_SteamFriends017_IsClanChatAdmin_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanChatAdmin( params->steamIDClanChat, params->steamIDUser );
}

void cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam( struct cppISteamFriends_SteamFriends017_IsClanChatWindowOpenInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanChatWindowOpenInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam( struct cppISteamFriends_SteamFriends017_OpenClanChatWindowInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->OpenClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam( struct cppISteamFriends_SteamFriends017_CloseClanChatWindowInSteam_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->CloseClanChatWindowInSteam( params->steamIDClanChat );
}

void cppISteamFriends_SteamFriends017_SetListenForFriendsMessages( struct cppISteamFriends_SteamFriends017_SetListenForFriendsMessages_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->SetListenForFriendsMessages( params->bInterceptEnabled );
}

void cppISteamFriends_SteamFriends017_ReplyToFriendMessage( struct cppISteamFriends_SteamFriends017_ReplyToFriendMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->ReplyToFriendMessage( params->steamIDFriend, params->pchMsgToSend );
}

void cppISteamFriends_SteamFriends017_GetFriendMessage( struct cppISteamFriends_SteamFriends017_GetFriendMessage_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFriendMessage( params->steamIDFriend, params->iMessageID, params->pvData, params->cubData, params->peChatEntryType );
}

void cppISteamFriends_SteamFriends017_GetFollowerCount( struct cppISteamFriends_SteamFriends017_GetFollowerCount_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetFollowerCount( params->steamID );
}

void cppISteamFriends_SteamFriends017_IsFollowing( struct cppISteamFriends_SteamFriends017_IsFollowing_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsFollowing( params->steamID );
}

void cppISteamFriends_SteamFriends017_EnumerateFollowingList( struct cppISteamFriends_SteamFriends017_EnumerateFollowingList_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->EnumerateFollowingList( params->unStartIndex );
}

void cppISteamFriends_SteamFriends017_IsClanPublic( struct cppISteamFriends_SteamFriends017_IsClanPublic_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanPublic( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup( struct cppISteamFriends_SteamFriends017_IsClanOfficialGameGroup_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->IsClanOfficialGameGroup( params->steamIDClan );
}

void cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages( struct cppISteamFriends_SteamFriends017_GetNumChatsWithUnreadPriorityMessages_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetNumChatsWithUnreadPriorityMessages(  );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayRemotePlayTogetherInviteDialog_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayRemotePlayTogetherInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser( struct cppISteamFriends_SteamFriends017_RegisterProtocolInOverlayBrowser_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RegisterProtocolInOverlayBrowser( params->pchProtocol );
}

void cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString( struct cppISteamFriends_SteamFriends017_ActivateGameOverlayInviteDialogConnectString_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialogConnectString( params->pchConnectString );
}

void cppISteamFriends_SteamFriends017_RequestEquippedProfileItems( struct cppISteamFriends_SteamFriends017_RequestEquippedProfileItems_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->RequestEquippedProfileItems( params->steamID );
}

void cppISteamFriends_SteamFriends017_BHasEquippedProfileItem( struct cppISteamFriends_SteamFriends017_BHasEquippedProfileItem_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->BHasEquippedProfileItem( params->steamID, params->itemType );
}

void cppISteamFriends_SteamFriends017_GetProfileItemPropertyString( struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyString_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetProfileItemPropertyString( params->steamID, params->itemType, params->prop );
}

void cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint( struct cppISteamFriends_SteamFriends017_GetProfileItemPropertyUint_params *params )
{
    struct u_ISteamFriends_SteamFriends017 *iface = (struct u_ISteamFriends_SteamFriends017 *)params->linux_side;
    params->_ret = iface->GetProfileItemPropertyUint( params->steamID, params->itemType, params->prop );
}


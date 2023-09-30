/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION015.h"

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUserUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->CreateQueryUserUGCRequest( params->unAccountID, params->eListType, params->eMatchingUGCType, params->eSortOrder, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->unPage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryAllUGCRequest_2_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->CreateQueryAllUGCRequest( params->eQueryType, params->eMatchingeMatchingUGCTypeFileType, params->nCreatorAppID, params->nConsumerAppID, params->pchCursor );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateQueryUGCDetailsRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->CreateQueryUGCDetailsRequest( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SendQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SendQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCResult_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    u_SteamUGCDetails_t_128x u_pDetails = *params->pDetails;
    params->_ret = iface->GetQueryUGCResult( params->handle, params->index, &u_pDetails );
    *params->pDetails = u_pDetails;
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTag( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCTagDisplayName_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCTagDisplayName( params->handle, params->index, params->indexTag, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCPreviewURL_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCPreviewURL( params->handle, params->index, params->pchURL, params->cchURLSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCMetadata( params->handle, params->index, params->pchMetadata, params->cchMetadatasize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCChildren( params->handle, params->index, params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCStatistic_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCStatistic( params->handle, params->index, params->eStatType, params->pStatValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumAdditionalPreviews( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCAdditionalPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCAdditionalPreview( params->handle, params->index, params->previewIndex, params->pchURLOrVideoID, params->cchURLSize, params->pchOriginalFileName, params->cchOriginalFileNameSize, params->pPreviewType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCNumKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCNumKeyValueTags( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->keyValueTagIndex, params->pchKey, params->cchKeySize, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetQueryUGCKeyValueTag_2_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetQueryUGCKeyValueTag( params->handle, params->index, params->pchKey, params->pchValue, params->cchValueSize );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ReleaseQueryUGCRequest_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->ReleaseQueryUGCRequest( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddRequiredTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredTagGroup_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddRequiredTagGroup( params->handle, params->pTagGroups );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddExcludedTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddExcludedTag( params->handle, params->pTagName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnOnlyIDs_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnOnlyIDs( params->handle, params->bReturnOnlyIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnKeyValueTags( params->handle, params->bReturnKeyValueTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnLongDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnLongDescription( params->handle, params->bReturnLongDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnMetadata( params->handle, params->bReturnMetadata );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnChildren_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnChildren( params->handle, params->bReturnChildren );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnAdditionalPreviews_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnAdditionalPreviews( params->handle, params->bReturnAdditionalPreviews );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnTotalOnly_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnTotalOnly( params->handle, params->bReturnTotalOnly );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetReturnPlaytimeStats_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetReturnPlaytimeStats( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowCachedResponse_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetAllowCachedResponse( params->handle, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetCloudFileNameFilter_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetCloudFileNameFilter( params->handle, params->pMatchCloudFileName );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetMatchAnyTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetMatchAnyTag( params->handle, params->bMatchAnyTag );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetSearchText_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetSearchText( params->handle, params->pSearchText );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetRankedByTrendDays_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetRankedByTrendDays( params->handle, params->unDays );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddRequiredKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddRequiredKeyValueTag( params->handle, params->pKey, params->pValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RequestUGCDetails_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RequestUGCDetails( params->nPublishedFileID, params->unMaxAgeSeconds );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_CreateItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->CreateItem( params->nConsumerAppId, params->eFileType );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->StartItemUpdate( params->nConsumerAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTitle_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemTitle( params->handle, params->pchTitle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemDescription_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemDescription( params->handle, params->pchDescription );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemUpdateLanguage_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemUpdateLanguage( params->handle, params->pchLanguage );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemMetadata_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemMetadata( params->handle, params->pchMetaData );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemVisibility_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemVisibility( params->handle, params->eVisibility );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemTags( params->updateHandle, params->pTags );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemContent_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemContent( params->handle, params->pszContentFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetItemPreview( params->handle, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetAllowLegacyUpload_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetAllowLegacyUpload( params->handle, params->bAllowLegacyUpload );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAllItemKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveAllItemKeyValueTags( params->handle );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemKeyValueTags_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveItemKeyValueTags( params->handle, params->pchKey );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemKeyValueTag_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddItemKeyValueTag( params->handle, params->pchKey, params->pchValue );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddItemPreviewFile( params->handle, params->pszPreviewFile, params->type );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddItemPreviewVideo( params->handle, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewFile_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewFile( params->handle, params->index, params->pszPreviewFile );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UpdateItemPreviewVideo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->UpdateItemPreviewVideo( params->handle, params->index, params->pszVideoID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemPreview_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveItemPreview( params->handle, params->index );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubmitItemUpdate_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SubmitItemUpdate( params->handle, params->pchChangeNote );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemUpdateProgress_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetItemUpdateProgress( params->handle, params->punBytesProcessed, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SetUserItemVote( params->nPublishedFileID, params->bVoteUp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetUserItemVote_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetUserItemVote( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddItemToFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddItemToFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveItemFromFavorites_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveItemFromFavorites( params->nAppId, params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->SubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_UnsubscribeItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->UnsubscribeItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetNumSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetNumSubscribedItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetSubscribedItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetSubscribedItems( params->pvecPublishedFileID, params->cMaxEntries );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemState_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetItemState( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemInstallInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetItemInstallInfo( params->nPublishedFileID, params->punSizeOnDisk, params->pchFolder, params->cchFolderSize, params->punTimeStamp );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetItemDownloadInfo_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetItemDownloadInfo( params->nPublishedFileID, params->punBytesDownloaded, params->punBytesTotal );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DownloadItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->DownloadItem( params->nPublishedFileID, params->bHighPriority );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_BInitWorkshopForGameServer_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->BInitWorkshopForGameServer( params->unWorkshopDepotID, params->pszFolder );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_SuspendDownloads_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    iface->SuspendDownloads( params->bSuspend );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StartPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->StartPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTracking_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTracking( params->pvecPublishedFileID, params->unNumPublishedFileIDs );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_StopPlaytimeTrackingForAllItems_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->StopPlaytimeTrackingForAllItems(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveDependency( params->nParentPublishedFileID, params->nChildPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_AddAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->AddAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_RemoveAppDependency_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->RemoveAppDependency( params->nPublishedFileID, params->nAppID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetAppDependencies_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetAppDependencies( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_DeleteItem_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->DeleteItem( params->nPublishedFileID );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_ShowWorkshopEULA_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->ShowWorkshopEULA(  );
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION015_GetWorkshopEULAStatus_params *params )
{
    struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *iface = (struct u_ISteamUGC_STEAMUGC_INTERFACE_VERSION015 *)params->linux_side;
    params->_ret = iface->GetWorkshopEULAStatus(  );
}


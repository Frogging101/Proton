/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    const void *pvData;
    int32_t cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWrite_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchFile;
    void *pvData;
    int32_t cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileForget_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileDelete_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileShare_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    uint32_t eRemoteStoragePlatform;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamOpen_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk_params
{
    void *linux_side;
    bool _ret;
    uint64_t writeHandle;
    const void *pvData;
    int32_t cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamWriteChunk_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose_params
{
    void *linux_side;
    bool _ret;
    uint64_t writeHandle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamClose_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel_params
{
    void *linux_side;
    bool _ret;
    uint64_t writeHandle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileWriteStreamCancel_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FileExists_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_FilePersisted_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp_params
{
    void *linux_side;
    int64_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileTimestamp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetSyncPlatforms_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize_params
{
    void *linux_side;
    const char *_ret;
    int32_t iFile;
    int32_t *pnFileSizeInBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetFileNameAndSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota_params
{
    void *linux_side;
    bool _ret;
    int32_t *pnTotalBytes;
    int32_t *puAvailableBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetQuota_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForAccount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_IsCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetCloudEnabledForApp_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCDownload_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress_params
{
    void *linux_side;
    bool _ret;
    uint64_t hContent;
    int32_t *pnBytesDownloaded;
    int32_t *pnBytesExpected;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDownloadProgress_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails_params
{
    void *linux_side;
    bool _ret;
    uint64_t hContent;
    uint32_t *pnAppID;
    char **ppchName;
    int32_t *pnFileSizeInBytes;
    CSteamID *pSteamIDOwner;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUGCDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t hContent;
    void *pvData;
    int32_t cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UGCRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t iCachedContent;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetCachedUGCHandle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchFile;
    const char *pchPreviewFile;
    uint32_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    uint32_t eVisibility;
    w_SteamParamStringArray_t *pTags;
    uint32_t eWorkshopFileType;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishWorkshopFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CreatePublishedFileUpdateRequest_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchPreviewFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFilePreviewFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchTitle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTitle_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    uint32_t eVisibility;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileVisibility_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    w_SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileTags_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t updateHandle;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_CommitPublishedFileUpdate_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedFileDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_DeletePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserPublishedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSubscribedFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UnsubscribePublishedFile_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const char *pchChangeDescription;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdatePublishedFileSetChangeDescription_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
    bool bVoteUp;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_UpdateUserPublishedItemVote_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_GetUserPublishedItemVoteDetails_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamId;
    uint32_t unStartIndex;
    w_SteamParamStringArray_t *pRequiredTags;
    w_SteamParamStringArray_t *pExcludedTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumerateUserSharedWorkshopFiles_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eVideoProvider;
    const char *pchVideoAccount;
    const char *pchVideoIdentifier;
    const char *pchPreviewFile;
    uint32_t nConsumerAppId;
    const char *pchTitle;
    const char *pchDescription;
    uint32_t eVisibility;
    w_SteamParamStringArray_t *pTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_PublishVideo_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t unPublishedFileId;
    uint32_t eAction;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_SetUserPublishedFileAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eAction;
    uint32_t unStartIndex;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedFilesByUserAction_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eEnumerationType;
    uint32_t unStartIndex;
    uint32_t unCount;
    uint32_t unDays;
    w_SteamParamStringArray_t *pTags;
    w_SteamParamStringArray_t *pUserTags;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION008_EnumeratePublishedWorkshopFiles_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

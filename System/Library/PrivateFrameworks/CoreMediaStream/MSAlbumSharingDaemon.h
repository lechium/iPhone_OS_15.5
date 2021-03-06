//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSASDaemonModel, NSMutableDictionary, NSObject;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;

@interface MSAlbumSharingDaemon
{
    _Bool _isRetryingOutstandingActivities;	// 8 = 0x8
    int _busyCount;	// 12 = 0xc
    id <MSAlbumSharingDaemonDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_personIDToStateMachineMap;	// 24 = 0x18
    NSMutableDictionary *_personIDToDelegateMap;	// 32 = 0x20
    MSASDaemonModel *_daemonModel;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_mapQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    NSMutableDictionary *_nextUpdateDateByPersonID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004602c
@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID; // @synthesize nextUpdateDateByPersonID=_nextUpdateDateByPersonID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
@property(nonatomic) _Bool isRetryingOutstandingActivities; // @synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities;
@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;
@property(retain, nonatomic) MSASDaemonModel *daemonModel; // @synthesize daemonModel=_daemonModel;
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap; // @synthesize personIDToDelegateMap=_personIDToDelegateMap;
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap; // @synthesize personIDToStateMachineMap=_personIDToStateMachineMap;
@property(nonatomic) __weak id <MSAlbumSharingDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateOwnerReputationScoreForAlbum:(id)arg1;	// IMP=0x0000000000045cb6
- (void)didReceiveCommentTooLongError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;	// IMP=0x0000000000045b8e
- (void)didReceiveTooManyCommentsError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;	// IMP=0x0000000000045a66
- (void)didReceiveTooManySubscriptionsError:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000459a0
- (void)didReceiveTooManyPhotosError:(id)arg1 forAlbum:(id)arg2 personID:(id)arg3;	// IMP=0x00000000000458af
- (void)didReceiveTooManyAlbumsError:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000457e9
- (id)boundStateMachineForPersonID:(id)arg1;	// IMP=0x00000000000456ac
- (id)existingStateMachineForPersonID:(id)arg1;	// IMP=0x000000000004556f
- (id)_delegateForPersonID:(id)arg1;	// IMP=0x0000000000045481
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2 personID:(id)arg3;	// IMP=0x00000000000453f3
- (id)persistentObjectForKey:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004536a
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;	// IMP=0x000000000004532d
- (id)serverSideConfigurationForPersonID:(id)arg1;	// IMP=0x00000000000452dd
- (void)forgetEverythingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004522c
- (void)workQueueForgetEverythingAboutPersonIDs:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004510a
- (void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004502e
- (void)workQueueForgetEverythingAboutPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044da3
- (void)shutDownStateMachine:(id)arg1 forDestruction:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044c9a
- (void)_postModelShutdownForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044bbe
- (void)forgetEverythingAboutPersonID:(id)arg1;	// IMP=0x0000000000044baa
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;	// IMP=0x0000000000044ac5
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x00000000000449bb
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x00000000000448b3
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004489e
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000044760
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x000000000004474b
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x000000000004460d
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;	// IMP=0x00000000000445f8
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004451c
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000044414
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000443ff
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x00000000000442c1
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x00000000000442ac
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044159
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000440b2
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000043f9e
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043ef7
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000043def
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000043dda
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000043c9c
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x0000000000043c87
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000043b7f
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000043b6a
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000043a62
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000043a4d
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004390a
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004386c
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000043790
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000436b4
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000435d8
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x00000000000434d0
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000434bb
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x00000000000433b3
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004339e
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(_Bool)arg3 info:(id)arg4;	// IMP=0x000000000004328a
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000004326f
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004325a
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000043152
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000004313d
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000043035
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000043020
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000042f18
- (void)addAlbum:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000042f03
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000042df0
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;	// IMP=0x0000000000042ddb
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000042cd3
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000042cbe
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000042bab
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;	// IMP=0x0000000000042b96
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000042ab1
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2;	// IMP=0x0000000000042a9c
- (id)modelForPersonID:(id)arg1;	// IMP=0x00000000000429e6
- (id)existingModelForPersonID:(id)arg1;	// IMP=0x000000000004292d
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1;	// IMP=0x0000000000042890
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;	// IMP=0x0000000000042738
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;	// IMP=0x0000000000042687
- (id)personIDListeningToPushNotification;	// IMP=0x0000000000042634
- (void)deleteAlbumWithGUID:(id)arg1 inviterAddress:(id)arg2;	// IMP=0x00000000000425a8
- (void)addAlbum:(id)arg1;	// IMP=0x0000000000042479
- (void)cancelActivitiesForPersonID:(id)arg1;	// IMP=0x00000000000423c8
- (void)stopAssetDownloadsForPersonID:(id)arg1;	// IMP=0x0000000000042317
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;	// IMP=0x0000000000042266
- (void)retryOutstandingActivities;	// IMP=0x00000000000421f5
- (_Bool)hasCommandsInGroupedCommandQueue;	// IMP=0x000000000004212b
- (_Bool)isWaitingForAuth;	// IMP=0x0000000000042123
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;	// IMP=0x000000000004211d
- (void)didReceiveAuthSuccessForPersonID:(id)arg1;	// IMP=0x0000000000042117
- (void)didReceiveAuthFailureForPersonID:(id)arg1;	// IMP=0x0000000000042111
- (_Bool)isInRetryState;	// IMP=0x0000000000042047
- (void)didReceivePushNotificationForPersonID:(id)arg1;	// IMP=0x0000000000042041
- (void)didDestroyStateMachineForPersonID:(id)arg1;	// IMP=0x000000000004203b
- (void)willDestroyStateMachineForPersonID:(id)arg1;	// IMP=0x0000000000042035
- (void)didCreateStateMachineForPersonID:(id)arg1;	// IMP=0x000000000004202f
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;	// IMP=0x0000000000041f53
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;	// IMP=0x0000000000041e77
- (void)didUnidle;	// IMP=0x0000000000041da8
- (void)didIdle;	// IMP=0x0000000000041cd9
- (id)nextActivityDate;	// IMP=0x0000000000041cbc
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041c0b
- (void)mapQueueShutDownStateMachineInMap:(id)arg1 personIDs:(id)arg2 index:(unsigned long long)arg3 forDestruction:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000041a75
- (void)shutDown;	// IMP=0x0000000000041a04
- (void)start;	// IMP=0x0000000000041993
- (id)init;	// IMP=0x00000000000418a9

@end


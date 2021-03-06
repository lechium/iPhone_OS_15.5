//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASClient, ASFriendListQuery, FIUIClientToken, FIUIModel, FIUIWorkoutDataProvider, HKActivitySummaryQuery, HKHealthStore, NSCache, NSSet;
@protocol OS_dispatch_queue;

@interface ASFriendListSectionManager : NSObject
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    ASClient *_client;	// 16 = 0x10
    FIUIModel *_model;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_readWriteQueue;	// 32 = 0x20
    NSCache *_displayContextToSortedSectionsCache;	// 40 = 0x28
    NSSet *_allFriends;	// 48 = 0x30
    ASFriendListQuery *_friendListQuery;	// 56 = 0x38
    HKActivitySummaryQuery *_meQuery;	// 64 = 0x40
    FIUIWorkoutDataProvider *_workoutDataProvider;	// 72 = 0x48
    long long _meQueryRetries;	// 80 = 0x50
    long long _friendQueryRetries;	// 88 = 0x58
    FIUIClientToken *_modelQueryToken;	// 96 = 0x60
    _Bool _shouldGenerateDemoData;	// 104 = 0x68
    _Bool _hasReceivedFriendListQueryResult;	// 105 = 0x69
    _Bool _hasReceivedMeQueryResult;	// 106 = 0x6a
}

- (void).cxx_destruct;	// IMP=0x000000000000c063
- (void)_createFakeFriends;	// IMP=0x000000000000bf25
- (id)_copyFriends;	// IMP=0x000000000000be36
- (id)_queue_me;	// IMP=0x000000000000bce0
- (id)_sortFriends:(id)arg1 forDisplayMode:(long long)arg2 cacheIndex:(id)arg3;	// IMP=0x000000000000b1e5
- (id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2;	// IMP=0x000000000000b086
- (id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2;	// IMP=0x000000000000af4a
- (id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2;	// IMP=0x000000000000adfc
- (id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2;	// IMP=0x000000000000a3e6
- (id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2;	// IMP=0x0000000000009f61
- (void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009726
- (void)_queue_updateWithNewData;	// IMP=0x00000000000096eb
- (void)_queue_handleMyWorkoutsUpdate;	// IMP=0x0000000000009242
- (void)_queue_handleActivitySummaryUpdate:(id)arg1;	// IMP=0x0000000000008e97
- (void)_queue_stopQueries;	// IMP=0x0000000000008de3
- (void)_queue_startMeQuery;	// IMP=0x00000000000084b3
- (void)_queue_startFriendsQuery;	// IMP=0x0000000000008026
- (void)_queue_restartQueryAfterErrorCount:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ed0
- (_Bool)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(long long)arg2;	// IMP=0x0000000000007da4
- (void)_postFriendsListChangedNotification;	// IMP=0x0000000000007d2a
- (void)_calendarDayChangedNotification:(id)arg1;	// IMP=0x0000000000007cac
- (_Bool)hasReachedMaxNumberOfFriends;	// IMP=0x0000000000007c93
- (long long)numberOfNewFriendsAllowed;	// IMP=0x0000000000007c60
- (void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007af4
- (unsigned long long)totalNumberOfPendingRequests;	// IMP=0x0000000000007ab8
- (unsigned long long)numberOfFriendsWithCompetitionRequestsAwaitingResponseFromMe;	// IMP=0x0000000000007a4a
- (unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;	// IMP=0x0000000000007942
- (id)allDestinationsForActiveOrPendingFriends;	// IMP=0x00000000000075d7
- (id)allActiveFriendsAsRecipients;	// IMP=0x00000000000072c3
- (_Bool)hasAnyFriendsSetup;	// IMP=0x0000000000007051
- (id)allFriends;	// IMP=0x0000000000007037
- (id)me;	// IMP=0x0000000000006f40
- (id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2;	// IMP=0x0000000000006d6c
- (id)friendWithUUID:(id)arg1;	// IMP=0x0000000000006cf7
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000069c8
- (id)_sectionForDataVisibilityConditionalUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000689a
- (id)sectionForFriendsCompetingWithMe;	// IMP=0x00000000000065bb
- (id)sectionForFriendsRequestedToCompeteByMe;	// IMP=0x0000000000006505
- (id)sectionForFriendsRequestingMeToCompete;	// IMP=0x000000000000649c
- (id)sectionForFriendsWithNoHiding;	// IMP=0x000000000000641f
- (id)sectionForFriendsMyDataIsHiddenFrom;	// IMP=0x00000000000063b6
- (id)sectionForFriendsHidingDataFromMe;	// IMP=0x000000000000634d
- (id)sectionForFriendsInvitedByMe;	// IMP=0x00000000000062e4
- (id)sectionForFriendsInvitingMe;	// IMP=0x000000000000627b
- (void)enumerateValidDisplayModesForFilter:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061e6
- (id)sectionsForDisplayContext:(id)arg1;	// IMP=0x0000000000005f5c
- (_Bool)hasInitializedFriendData;	// IMP=0x0000000000005e55
- (void)_stopQueries;	// IMP=0x0000000000005df4
- (void)_startQueries;	// IMP=0x0000000000005d18
- (void)_startQueriesIfRequired;	// IMP=0x0000000000005c7d
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000005be9
- (void)dealloc;	// IMP=0x0000000000005b74
- (id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2;	// IMP=0x00000000000057dc
- (id)init;	// IMP=0x00000000000057ce

@end


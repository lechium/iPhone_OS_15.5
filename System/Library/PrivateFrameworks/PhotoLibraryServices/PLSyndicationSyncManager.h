//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol PLSyndicationSyncManagerDelegate;

@interface PLSyndicationSyncManager : NSObject
{
    NSSet *_suppportedQueryTypes;	// 8 = 0x8
    unsigned short _savedAssetTypeMask;	// 16 = 0x10
    id <PLSyndicationSyncManagerDelegate> _delegate;	// 24 = 0x18
}

+ (void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000049ffb1
+ (void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000049fcf0
- (void).cxx_destruct;	// IMP=0x000000000049ec8e
@property(readonly, nonatomic) __weak id <PLSyndicationSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncSyndicationItemsWithStartDate:(id)arg1 endDate:(id)arg2 queryType:(long long)arg3 library:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000049e42c
- (void)_updateSyncTokenWithDate:(id)arg1 queryType:(long long)arg2 library:(id)arg3 syncTokenIsCurrent:(_Bool)arg4;	// IMP=0x000000000049e29e
- (void)_processSearchableItem:(id)arg1 forQueryType:(long long)arg2 library:(id)arg3;	// IMP=0x000000000049e1d8
- (_Bool)_canHandleSearchableItem:(id)arg1 forQueryType:(long long)arg2;	// IMP=0x000000000049e075
- (void)_createOrUpdateObjectFromSearchableItem:(id)arg1 library:(id)arg2;	// IMP=0x000000000049dcf0
- (void)_processZombieItems:(id)arg1 library:(id)arg2;	// IMP=0x000000000049d9ea
- (_Bool)_deleteConversationWithSyndicationIdentifiers:(id)arg1 library:(id)arg2;	// IMP=0x000000000049d8f8
- (_Bool)_deleteGuestAssetWithSyndicationIdentifiers:(id)arg1 library:(id)arg2;	// IMP=0x000000000049d7ff
- (void)_processZombieItem:(id)arg1 library:(id)arg2;	// IMP=0x000000000049d4ba
- (_Bool)_isQueryTypeSupported:(long long)arg1;	// IMP=0x000000000049d45f
- (id)initWithQueryTypes:(id)arg1 savedAssetTypeMask:(unsigned short)arg2 delegate:(id)arg3;	// IMP=0x000000000049d3bc

@end


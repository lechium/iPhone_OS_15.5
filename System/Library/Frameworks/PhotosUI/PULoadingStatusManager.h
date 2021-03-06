//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet;
@protocol PULoadingStatusManagerDelegate;

@interface PULoadingStatusManager : NSObject
{
    struct {
        _Bool respondsToDidUpdateLoadingStatusForItem;
    } _delegateFlags;	// 8 = 0x8
    _Bool __isUpdateScheduled;	// 9 = 0x9
    id <PULoadingStatusManagerDelegate> _delegate;	// 16 = 0x10
    NSMutableSet *__invalidLoadingStatusItems;	// 24 = 0x18
    NSMapTable *__loadOperationTrackingIDsByItem;	// 32 = 0x20
    NSMapTable *__loadingStatusByItem;	// 40 = 0x28
    NSMutableDictionary *__itemByLoadOperationTrackingID;	// 48 = 0x30
    NSMutableDictionary *__loadingStatusByLoadOperationTrackingID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000021605d
@property(readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID; // @synthesize _loadingStatusByLoadOperationTrackingID=__loadingStatusByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID; // @synthesize _itemByLoadOperationTrackingID=__itemByLoadOperationTrackingID;
@property(readonly, nonatomic) NSMapTable *_loadingStatusByItem; // @synthesize _loadingStatusByItem=__loadingStatusByItem;
@property(readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem; // @synthesize _loadOperationTrackingIDsByItem=__loadOperationTrackingIDsByItem;
@property(readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems; // @synthesize _invalidLoadingStatusItems=__invalidLoadingStatusItems;
@property(nonatomic, setter=_setUpdateScheduled:) _Bool _isUpdateScheduled; // @synthesize _isUpdateScheduled=__isUpdateScheduled;
@property(nonatomic) __weak id <PULoadingStatusManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateLoadingStatusForItem:(id)arg1;	// IMP=0x0000000000215ce9
- (void)_updateLoadingStatusForItemIfNeeded:(id)arg1;	// IMP=0x0000000000215c5f
- (void)_updateLoadingStatusForItemsIfNeeded;	// IMP=0x0000000000215ad9
- (void)_invalidateLoadingStatusForItem:(id)arg1;	// IMP=0x0000000000215a54
- (void)_updateNowIfNeeded;	// IMP=0x0000000000215a24
- (void)_setNeedsUpdate;	// IMP=0x000000000021595e
- (_Bool)_needsUpdate;	// IMP=0x0000000000215916
- (void)_updateIfNeeded;	// IMP=0x0000000000215861
- (void)_resetLoadingStatusForItemIfAppropriate:(id)arg1;	// IMP=0x00000000002153a1
- (void)_setLoadingStatus:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000215263
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(id)arg2;	// IMP=0x00000000002150fb
- (void)didCancelLoadOperationWithTrackingID:(id)arg1;	// IMP=0x0000000000214f79
- (void)didCompleteLoadOperationWithTrackingID:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000214de1
- (void)didUpdateLoadOperationWithTrackingID:(id)arg1 withProgress:(double)arg2;	// IMP=0x0000000000214c90
- (id)willBeginLoadOperationWithItem:(id)arg1;	// IMP=0x0000000000214a38
- (id)loadingStatusForItem:(id)arg1;	// IMP=0x00000000002149ae
- (id)init;	// IMP=0x000000000021483a

@end


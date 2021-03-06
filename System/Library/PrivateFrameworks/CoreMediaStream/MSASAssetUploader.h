//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader
{
    _Bool _didEncounterNetworkConditionError;	// 8 = 0x8
    int _state;	// 12 = 0xc
    NSMutableArray *_itemsInFlight;	// 16 = 0x10
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;	// 24 = 0x18
    NSMutableDictionary *_assetToAssetCollectionMap;	// 32 = 0x20
    NSMutableArray *_finishedAssetCollections;	// 40 = 0x28
    NSMutableSet *_assetCollectionsWithAuthorizationError;	// 48 = 0x30
    NSMutableDictionary *_assetCollectionGUIDToRequestorContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008e735
@property(retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext; // @synthesize assetCollectionGUIDToRequestorContext=_assetCollectionGUIDToRequestorContext;
@property(retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError; // @synthesize assetCollectionsWithAuthorizationError=_assetCollectionsWithAuthorizationError;
@property(nonatomic) _Bool didEncounterNetworkConditionError; // @synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError;
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections; // @synthesize finishedAssetCollections=_finishedAssetCollections;
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap; // @synthesize assetToAssetCollectionMap=_assetToAssetCollectionMap;
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap; // @synthesize assetCollectionsToItemInFlightMap=_assetCollectionsToItemInFlightMap;
@property(retain, nonatomic) NSMutableArray *itemsInFlight; // @synthesize itemsInFlight=_itemsInFlight;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)didFinishGettingAllAssets;	// IMP=0x000000000008e596
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;	// IMP=0x000000000008e515
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;	// IMP=0x000000000008e494
- (void)didFinishPuttingAllAssets;	// IMP=0x000000000008e423
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;	// IMP=0x000000000008e35d
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;	// IMP=0x000000000008e281
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;	// IMP=0x000000000008e177
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;	// IMP=0x000000000008dfaa
- (void)workQueueStopTrackingItem:(id)arg1;	// IMP=0x000000000008dded
- (void)cancelAssetCollections:(id)arg1;	// IMP=0x000000000008dd3c
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008dc57
- (void)unregisterAssetCollections:(id)arg1;	// IMP=0x000000000008dc43
- (void)registerAssetCollections:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008db67
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000008d97f
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008d804
- (void)workQueueCancelAssetCollections:(id)arg1;	// IMP=0x000000000008d489
- (void)workQueueUploadNextBatch;	// IMP=0x000000000008bed8
- (id)_orphanedAssetCollectionError;	// IMP=0x000000000008bea8
- (void)workQueueCancel;	// IMP=0x000000000008bb59
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008baf5
- (void)workQueueStop;	// IMP=0x000000000008ba5f
- (void)_workQueueStop;	// IMP=0x000000000008b9ef
- (void)workQueueGoIdle;	// IMP=0x000000000008b8d3
- (void)workQueueRetryOutstandingActivities;	// IMP=0x000000000008b746
- (id)_pathForPersonID:(id)arg1;	// IMP=0x000000000008b739

// Remaining properties
@property(nonatomic) __weak id <MSASAssetUploaderDelegate> delegate; // @dynamic delegate;

@end


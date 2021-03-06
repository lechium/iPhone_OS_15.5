//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PLDiagnosticsProvider-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString;
@protocol OS_dispatch_queue, PUFilteredMomentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _taskId;	// 16 = 0x10
    NSMutableOrderedSet *_uncommittedContainers;	// 24 = 0x18
    NSSet *_uncommittedAssetUUIDs;	// 32 = 0x20
    NSOrderedSet *_containers;	// 40 = 0x28
    NSSet *_assetUUIDs;	// 48 = 0x30
    _Bool _hasPendingChanges;	// 56 = 0x38
    _Bool _finished;	// 57 = 0x39
    id <PUFilteredMomentsDataSourceDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000172cde
@property(readonly, nonatomic) NSSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak id <PUFilteredMomentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fetchResult;	// IMP=0x0000000000172bd9
- (void)mergePendingChanges;	// IMP=0x0000000000172b8e
- (void)_inqClearPendingChanges;	// IMP=0x0000000000172b68
- (void)_updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 taskId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001727f4
- (void)updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017270f
- (void)updateAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000172657
- (_Bool)_isCancelledWithTaskId:(unsigned long long)arg1;	// IMP=0x00000000001725c5
- (_Bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;	// IMP=0x00000000001725b8
- (id)init;	// IMP=0x0000000000172560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


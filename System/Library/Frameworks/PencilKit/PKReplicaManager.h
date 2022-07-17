//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface PKReplicaManager : NSObject
{
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;	// 8 = 0x8
    NSMutableOrderedSet *_replicaUUIDs;	// 16 = 0x10
    NSMutableDictionary *_replicaEntries;	// 24 = 0x18
    NSMutableArray *_replicaManagerErrors;	// 32 = 0x20
    CDUnknownBlockType _saveStateBlock;	// 40 = 0x28
    _Bool _dirtyTokenSet;	// 48 = 0x30
    _Bool _shouldPersist;	// 49 = 0x31
    _Bool _testMode;	// 50 = 0x32
}

+ (id)sharedReplicaManager;	// IMP=0x00000000002668f3
- (void).cxx_destruct;	// IMP=0x0000000000268ca0
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
- (void)_resetAllReplicaUUIDs;	// IMP=0x0000000000268c1b
- (id)description;	// IMP=0x0000000000268bee
- (void)_saveStateImmediately;	// IMP=0x00000000002689fe
- (void)_scheduleSaveState;	// IMP=0x0000000000268945
- (void)_setReplicasDirtyToken;	// IMP=0x0000000000268805
- (void)_loadState;	// IMP=0x0000000000268571
- (_Bool)isValidBundleIDForSaving:(id)arg1;	// IMP=0x0000000000268552
- (void)returnReplicaForDrawing:(id)arg1;	// IMP=0x0000000000267e36
- (void)persistIfNeeded;	// IMP=0x0000000000267dad
- (void)updateVersionForDrawing:(id)arg1;	// IMP=0x000000000026764d
- (id)checkoutReplicaUUIDForDrawing:(id)arg1;	// IMP=0x0000000000266aaa
- (void)_applicationWillTerminate;	// IMP=0x0000000000266a26
- (id)init;	// IMP=0x0000000000266948
@property(readonly, nonatomic) NSArray *replicaManagerErrors;

@end

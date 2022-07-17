//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlacklist : NSObject
{
    NSMutableSet *_blockIDs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSUbiquitousKeyValueStore *_kvStore;	// 24 = 0x18
    NSDate *_lastUpdateDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000039c31
- (id)description;	// IMP=0x0000000000039bd6
- (void)updateBlockedListFromStore:(id)arg1;	// IMP=0x00000000000397cb
- (void)_loadIdentifiers;	// IMP=0x00000000000395b2
- (void)_storeIdentifiers;	// IMP=0x0000000000039363
- (void)clearList;	// IMP=0x0000000000039293
- (void)unblockIdentifiers:(id)arg1;	// IMP=0x0000000000039142
- (void)blockIdentifier:(id)arg1;	// IMP=0x0000000000039007
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x0000000000038dd6
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;	// IMP=0x0000000000038c1e
- (id)init;	// IMP=0x0000000000038aac

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol NSFileProviderEnumerationObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject
{
    NSMutableOrderedSet *_toIndexItems;	// 8 = 0x8
    NSMutableOrderedSet *_deletedItemIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <NSFileProviderEnumerationObserver> _observer;	// 32 = 0x20
    unsigned long long _rank;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000017e88e
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
- (void)listItems:(CDUnknownBlockType)arg1;	// IMP=0x000000000017e7eb
- (id)description;	// IMP=0x000000000017e76c
- (unsigned long long)batchCount;	// IMP=0x000000000017e6d0
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;	// IMP=0x000000000017e68f
- (void)addIndexOfItem:(id)arg1;	// IMP=0x000000000017e508
- (id)init;	// IMP=0x000000000017e46b

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5Files32DOCItemCollectionCandidateSource : NSObject
{
    MISSING_TYPE *itemCollectionConfiguration;	// 8 = 0x8
    MISSING_TYPE *itemCollection;	// 88 = 0x58
    MISSING_TYPE *semaphore;	// 96 = 0x60
    MISSING_TYPE *updateHandler;	// 104 = 0x68
    MISSING_TYPE *prefix;	// 120 = 0x78
    MISSING_TYPE *requestID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002c88c0
- (id)init;	// IMP=0x00100000002c9510
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c94a0
- (void)collection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x00100000002cc010
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;	// IMP=0x00100000002c93c0
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;	// IMP=0x00100000002c9340
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000002c92d0
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000002cc000
- (void)collectionDidFinishGathering:(id)arg1;	// IMP=0x00100000002c9280
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x00100000002cc050
- (void)dealloc;	// IMP=0x00100000002c8850

@end

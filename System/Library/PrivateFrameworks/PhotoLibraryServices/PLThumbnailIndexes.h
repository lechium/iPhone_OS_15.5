//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;	// 8 = 0x8
    NSMutableIndexSet *_unusedIndexes;	// 16 = 0x10
    long long _usedMax;	// 24 = 0x18
    unsigned long long _fetchTimestamp;	// 32 = 0x20
}

+ (id)occupiedThumbnailIndexesWithLibrary:(id)arg1 fetchTimestampToUpdate:(unsigned long long *)arg2;	// IMP=0x00000000002215cc
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0000000000221554
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002214f1
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;	// IMP=0x000000000022145a
+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221388
+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002212fc
- (void).cxx_destruct;	// IMP=0x00000000002212d4
- (id)init;	// IMP=0x000000000022127c
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000221f10
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;	// IMP=0x0000000000221d2a
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000221c67
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000221b82

@end


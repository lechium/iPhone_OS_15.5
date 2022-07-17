//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface IKChangeSet : NSObject
{
    _Bool _reducing;	// 8 = 0x8
    NSIndexSet *_addedIndexes;	// 16 = 0x10
    NSIndexSet *_removedIndexes;	// 24 = 0x18
    NSDictionary *_movedIndexesByNewIndex;	// 32 = 0x20
    NSDictionary *_updatedIndexesByNewIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000085342
@property(readonly, nonatomic, getter=isReducing) _Bool reducing; // @synthesize reducing=_reducing;
@property(readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex; // @synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // @synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
- (id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2;	// IMP=0x000000000008526a
- (id)changeSetBySubtractingChangeSet:(id)arg1;	// IMP=0x0000000000085208
- (id)changeSetByConcatenatingChangeSet:(id)arg1;	// IMP=0x00000000000841e1
- (id)inverseChangeSet;	// IMP=0x0000000000083ed0
- (long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(_Bool)arg2;	// IMP=0x0000000000083bcb
- (long long)oldIndexForNewIndex:(long long)arg1;	// IMP=0x000000000008376f
- (long long)newIndexForOldIndex:(long long)arg1;	// IMP=0x00000000000832f5
- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;	// IMP=0x00000000000831e8

@end

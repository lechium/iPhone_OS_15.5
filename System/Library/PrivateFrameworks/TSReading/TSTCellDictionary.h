//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject
{
    TSUIntegerKeyDictionary *mDict;	// 8 = 0x8
    struct _opaque_pthread_rwlock_t mDictRWLock;	// 16 = 0x10
}

- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;	// IMP=0x000000000034cc97
- (id)allCells;	// IMP=0x000000000034cafa
- (void)removeAllCells;	// IMP=0x000000000034cac7
- (id)cellAtCellID:(CDStruct_0441cfb5)arg1;	// IMP=0x000000000034c9cc
- (void)setCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x000000000034c8d8
- (void)dealloc;	// IMP=0x000000000034c894
- (id)init;	// IMP=0x000000000034c83a

@end

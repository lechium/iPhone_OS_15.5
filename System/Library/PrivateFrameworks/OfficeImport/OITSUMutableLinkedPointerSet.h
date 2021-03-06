//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSFastEnumeration-Protocol.h>

@class OITSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
    OITSULinkedPointerSetEntry *mHead;	// 16 = 0x10
    OITSULinkedPointerSetEntry *mTail;	// 24 = 0x18
}

- (id)array;	// IMP=0x000000000024e0c2
- (unsigned long long)count;	// IMP=0x000000000024e0b4
- (void)removeAllObjects;	// IMP=0x000000000024e09f
- (void)removeObject:(id)arg1;	// IMP=0x000000000024e02e
- (void)insertFirstObject:(id)arg1;	// IMP=0x000000000024dfa7
- (void)addObject:(id)arg1;	// IMP=0x000000000024df1a
- (_Bool)hasObjects;	// IMP=0x000000000024df0c
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000024def5
- (unsigned long long)hash;	// IMP=0x000000000024dee3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024de59
- (id)firstObject;	// IMP=0x000000000024de42
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000024ddee
- (id)objectEnumeratorAfterObject:(id)arg1;	// IMP=0x000000000024dd9d
- (id)reverseObjectEnumerator;	// IMP=0x000000000024dd66
- (id)objectEnumerator;	// IMP=0x000000000024dd2f
- (void)dealloc;	// IMP=0x000000000024dcf0
- (id)init;	// IMP=0x000000000024dc97

@end


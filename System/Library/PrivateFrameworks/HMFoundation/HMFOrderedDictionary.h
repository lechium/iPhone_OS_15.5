//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFAssociativeCollection-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSMutableCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSOrderedSet;

@interface HMFOrderedDictionary : NSObject <HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_objects;	// 8 = 0x8
    NSOrderedSet *_keys;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003d483
+ (id)orderedDictionaryWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003c9b4
+ (id)orderedDictionary;	// IMP=0x000000000003c9a2
- (void).cxx_destruct;	// IMP=0x000000000003d8f3
- (id)mutableUnorderedCopy;	// IMP=0x000000000003d883
- (id)unorderedCopy;	// IMP=0x000000000003d813
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d790
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d785
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d6da
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d48b
- (id)description;	// IMP=0x000000000003d479
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d3d4
- (unsigned long long)hash;	// IMP=0x000000000003d3c2
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d29d
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d286
- (id)objectEnumerator;	// IMP=0x000000000003d270
- (id)keyEnumerator;	// IMP=0x000000000003d25a
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;	// IMP=0x000000000003d045
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003d038
- (id)objectForKey:(id)arg1;	// IMP=0x000000000003cfb5
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
@property(readonly) unsigned long long count;
- (id)initBySortingDictionary:(id)arg1 copyItems:(_Bool)arg2 keyComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000003cdc9
- (id)initBySortingDictionary:(id)arg1;	// IMP=0x000000000003cdae
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;	// IMP=0x000000000003cd93
- (id)initWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003cc96
- (id)init;	// IMP=0x000000000003cc7a
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2 copyObjects:(_Bool)arg3 copyKeys:(_Bool)arg4;	// IMP=0x000000000003cb63
- (id)initWithObjects:(id)arg1 orderedKeySet:(id)arg2;	// IMP=0x000000000003ca20

@end

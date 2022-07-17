//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLResourceTypeSet : NSObject
{
    unsigned long long _baseTypesBits;	// 8 = 0x8
    unsigned long long _extraTypeBits;	// 16 = 0x10
}

- (id)redactedDescription;	// IMP=0x00000000000c8c5c
- (id)description;	// IMP=0x00000000000c8b50
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c8b31
- (id)unionSet:(id)arg1;	// IMP=0x00000000000c8ad2
- (_Bool)intersectsWithSet:(id)arg1;	// IMP=0x00000000000c8ab5
- (id)intersectionWithSet:(id)arg1;	// IMP=0x00000000000c8a56
- (void)enumerateResourceTypesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8955
- (_Bool)containsResourceType:(unsigned long long)arg1;	// IMP=0x00000000000c8879
- (void)removeResourceType:(unsigned long long)arg1;	// IMP=0x00000000000c8797
- (void)addResourceType:(unsigned long long)arg1;	// IMP=0x00000000000c86b9
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

@end

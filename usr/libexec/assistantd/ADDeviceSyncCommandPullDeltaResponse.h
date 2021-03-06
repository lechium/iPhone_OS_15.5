//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullDeltaResponse : NSObject
{
    NSArray *_incrementalChanges;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000ae846
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aeacd
- (void).cxx_destruct;	// IMP=0x00100000000ae949
@property(readonly, copy, nonatomic) NSArray *incrementalChanges; // @synthesize incrementalChanges=_incrementalChanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000ae91c
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000ae84e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ae83b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ae798
- (unsigned long long)hash;	// IMP=0x00100000000ae782
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000ae629
- (id)description;	// IMP=0x00100000000ae615
- (id)initWithIncrementalChanges:(id)arg1;	// IMP=0x00100000000ae5a2
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aeb3c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQueryAnchor, NSArray, NSData;

@interface HKSampleIteratorQueryCursor : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_queryDescriptors;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
    HKQueryAnchor *_followingAnchor;	// 24 = 0x18
    HKQueryAnchor *_upToAndIncludingAnchor;	// 32 = 0x20
    NSArray *_distinctByKeyPaths;	// 40 = 0x28
    NSData *_state;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2e25
- (void).cxx_destruct;	// IMP=0x00000000000d325f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d3254
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d2eea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d2e2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2cc9
- (unsigned long long)hash;	// IMP=0x00000000000d2c3a
@property(readonly, copy, nonatomic) NSData *state;
@property(readonly, copy, nonatomic) NSArray *distinctByKeyPaths;
@property(readonly, copy, nonatomic) HKQueryAnchor *upToAndIncludingAnchor;
@property(readonly, copy, nonatomic) HKQueryAnchor *followingAnchor;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors;
@property(readonly, copy, nonatomic) NSArray *queryDescriptors;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6;	// IMP=0x00000000000d2a06
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5;	// IMP=0x00000000000d29ea
- (id)init;	// IMP=0x00000000000d2970

@end


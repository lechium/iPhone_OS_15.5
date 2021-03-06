//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Coordination/NSCopying-Protocol.h>
#import <Coordination/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface COClusterMember : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _stale;	// 8 = 0x8
    unsigned long long _memberType;	// 16 = 0x10
    NSDictionary *_deviceMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ea10
+ (id)memberForCurrentDevice;	// IMP=0x000000000001e563
- (void).cxx_destruct;	// IMP=0x000000000001ef3a
@property(readonly, copy, nonatomic) NSDictionary *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(nonatomic, getter=isStale) _Bool stale; // @synthesize stale=_stale;
@property(readonly, nonatomic) unsigned long long memberType; // @synthesize memberType=_memberType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001edea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ea18
- (unsigned long long)hash;	// IMP=0x000000000001e9cc
- (_Bool)isSameDeviceAsMember:(id)arg1;	// IMP=0x000000000001e93b
- (_Bool)isEqualToMember:(id)arg1;	// IMP=0x000000000001e855
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e7ee
- (id)description;	// IMP=0x000000000001e69c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e691
- (id)initWithType:(unsigned long long)arg1 deviceMetadata:(id)arg2;	// IMP=0x000000000001e613

@end


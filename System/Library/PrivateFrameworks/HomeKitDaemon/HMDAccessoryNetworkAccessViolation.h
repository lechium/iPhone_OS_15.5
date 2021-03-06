//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>
{
    NSDate *_lastViolationDate;	// 8 = 0x8
    NSDate *_lastResetDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000052221e
+ (id)noViolation;	// IMP=0x00000000005221ee
- (void).cxx_destruct;	// IMP=0x0000000000522174
@property(readonly) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property(readonly) NSDate *lastViolationDate; // @synthesize lastViolationDate=_lastViolationDate;
- (id)attributeDescriptions;	// IMP=0x000000000052201c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000521f42
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000521e77
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000521d2c
- (unsigned long long)hash;	// IMP=0x0000000000521c9f
- (id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2;	// IMP=0x0000000000521c15
@property(readonly, getter=hasCurrentViolation) _Bool currentViolation;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;	// IMP=0x0000000000521aa3

@end


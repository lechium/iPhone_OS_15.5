//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    long long _enablesProximityTracking;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000145cdd
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000014611b
- (void).cxx_destruct;	// IMP=0x0010000000145ec2
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(readonly, copy, nonatomic) ADRapportLinkDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000145df8
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000145ce5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000145cd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000145bad
- (unsigned long long)hash;	// IMP=0x0010000000145b27
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000014590a
- (id)description;	// IMP=0x00100000001458f6
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 enablesProximityTracking:(long long)arg3;	// IMP=0x0010000000145837
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000014618a

@end

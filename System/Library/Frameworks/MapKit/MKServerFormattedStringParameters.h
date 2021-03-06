//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_variableOverrides;	// 8 = 0x8
    CDStruct_57af2063 _options;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c0cdf
- (void).cxx_destruct;	// IMP=0x00000000000c0f1a
@property(readonly, copy, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;
@property(readonly, nonatomic) CDStruct_57af2063 options; // @synthesize options=_options;
- (unsigned long long)hash;	// IMP=0x00000000000c0e6b
- (_Bool)isEqualToServerFormattedStringParameters:(id)arg1;	// IMP=0x00000000000c0d5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c0cf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0ce7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c0c3a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c0ad0
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;	// IMP=0x00000000000c0a56
- (id)initWithOptions:(CDStruct_57af2063)arg1 variableOverrides:(id)arg2;	// IMP=0x00000000000c09d0

@end


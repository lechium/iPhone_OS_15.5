//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKSignedClinicalDataQRSegment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataValue;	// 8 = 0x8
    long long _position;	// 16 = 0x10
    long long _numberOfExpectedSiblings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c0bb
+ (id)segmentFromQRCodeValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001baa0
- (void).cxx_destruct;	// IMP=0x000000000001c251
@property(readonly, nonatomic) long long numberOfExpectedSiblings; // @synthesize numberOfExpectedSiblings=_numberOfExpectedSiblings;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *dataValue; // @synthesize dataValue=_dataValue;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c14d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c0c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c0b0
@property(readonly, copy, nonatomic) NSString *fullQRCodeValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001be94
- (id)initWithDataValue:(id)arg1 position:(long long)arg2 numberOfExpectedSiblings:(long long)arg3;	// IMP=0x000000000001ba17
- (id)init;	// IMP=0x000000000001b99d

@end

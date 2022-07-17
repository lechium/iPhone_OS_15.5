//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKCurrencyAmount;

@interface PKTransactionCommutePlanUnit : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    unsigned long long _planType;	// 24 = 0x18
    PKCurrencyAmount *_valueCount;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003c355d
- (void).cxx_destruct;	// IMP=0x00000000003c4038
@property(readonly, copy, nonatomic) PKCurrencyAmount *valueCount; // @synthesize valueCount=_valueCount;
@property(readonly, nonatomic) unsigned long long planType; // @synthesize planType=_planType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c3ddb
- (unsigned long long)hash;	// IMP=0x00000000003c3d50
- (id)dictionaryRepresentation;	// IMP=0x00000000003c3c17
- (id)description;	// IMP=0x00000000003c3af2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003c3989
- (id)initWithCountPlanIdentifier:(id)arg1 currencyCode:(id)arg2 value:(long long)arg3 label:(id)arg4;	// IMP=0x00000000003c3878
- (id)initWithTimedPlanIdentifier:(id)arg1 label:(id)arg2;	// IMP=0x00000000003c37d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c36af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c3616
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c3565

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@interface PKDisbursementRequest : NSObject <NSSecureCoding>
{
    NSDecimalNumber *_amount;	// 8 = 0x8
    NSString *_currencyCode;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    long long _requestSchedule;	// 32 = 0x20
    NSArray *_summaryItems;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f3623
- (void).cxx_destruct;	// IMP=0x00000000000f3776
@property(copy, nonatomic) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(nonatomic) long long requestSchedule; // @synthesize requestSchedule=_requestSchedule;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (_Bool)isEqualToDisbursementRequest:(id)arg1;	// IMP=0x00000000000f3693
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f362b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f357a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f3450

@end


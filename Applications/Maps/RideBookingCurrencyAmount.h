//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

__attribute__((visibility("hidden")))
@interface RideBookingCurrencyAmount : NSObject
{
    NSDecimalNumber *_amount;	// 8 = 0x8
    NSString *_currencyCode;	// 16 = 0x10
}

+ (id)_currencySymbolForCode:(id)arg1;	// IMP=0x00100000006f218f
+ (id)_localeForCode:(id)arg1;	// IMP=0x00100000006f1f5f
- (void).cxx_destruct;	// IMP=0x00100000002a4703
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;	// IMP=0x00100000002a4636
@property(readonly, nonatomic) NSString *currencySymbol;
- (id)formattedStringIncludeSymbol:(_Bool)arg1;	// IMP=0x00100000006f1d18
@property(readonly, nonatomic) NSString *formattedString;

@end


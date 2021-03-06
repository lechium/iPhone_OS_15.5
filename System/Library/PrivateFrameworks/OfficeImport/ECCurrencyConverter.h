//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECCurrencyConverter : NSObject
{
    NSMutableDictionary *mXlToLassoCurrencyCode;	// 8 = 0x8
    NSMutableDictionary *mLassoToXlCurrencyCode;	// 16 = 0x10
    NSMutableDictionary *mXlAccountingFormat;	// 24 = 0x18
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;	// 32 = 0x20
}

+ (id)currencyConverter;	// IMP=0x00000000003a219a
- (void).cxx_destruct;	// IMP=0x00000000003a27f0
- (int)xlAccountFormatFromLasso:(id)arg1;	// IMP=0x00000000003a2740
- (id)xlCurrencyCodeFromLasso:(id)arg1;	// IMP=0x00000000003a24c2
- (id)lassoCurrencyCodeFromXl:(id)arg1;	// IMP=0x00000000003a21b4
- (id)lassoCurrencyCodeForDollar;	// IMP=0x00000000003a4ab9
- (void)populateDictionaries;	// IMP=0x00000000003a282e

@end


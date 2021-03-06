//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_footer;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    NSNumber *_productType;	// 32 = 0x20
}

+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2 productType:(id)arg3 items:(id)arg4;	// IMP=0x0000000000038120
+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2 productType:(id)arg3;	// IMP=0x000000000003805c
+ (id)sectionWithTitle:(id)arg1 productType:(id)arg2 items:(id)arg3;	// IMP=0x0000000000038042
+ (id)sectionWithTitle:(id)arg1 productType:(id)arg2;	// IMP=0x0000000000037f9d
- (void).cxx_destruct;	// IMP=0x0000000000038545
@property(readonly, copy, nonatomic) NSNumber *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isAppleBalanceSection;
@property(readonly, nonatomic) _Bool isEMoneySection;
@property(readonly, nonatomic) _Bool isPaymentSection;
@property(readonly, nonatomic) _Bool isTransitSection;
- (id)description;	// IMP=0x000000000003824d

@end


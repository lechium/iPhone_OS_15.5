//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface UIMainPrinterUtilityCell
{
    UIView *_supplyLevelsView;	// 8 = 0x8
    _Bool _showSupplyDataUnderPrinterName;	// 16 = 0x10
    NSArray *_supplies;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c980a7
@property(nonatomic) _Bool showSupplyDataUnderPrinterName; // @synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName;
@property(retain, nonatomic) NSArray *supplies; // @synthesize supplies=_supplies;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000c97fdd
- (void)layoutSubviews;	// IMP=0x0000000000c97b41

@end

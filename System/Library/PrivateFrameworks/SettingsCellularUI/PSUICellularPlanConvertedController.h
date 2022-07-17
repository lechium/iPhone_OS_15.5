//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCellularPlanItem, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanConvertedController : PSListController
{
    CTCellularPlanItem *_plan;	// 192 = 0xc0
    PSUICellularPlanUniversalReference *_planReference;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000043571
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) CTCellularPlanItem *plan; // @synthesize plan=_plan;
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)arg1;	// IMP=0x00000000000433e6
- (id)_turnOnThisLineSpecifier;	// IMP=0x00000000000432e4
- (id)_phoneNumberSpecifier;	// IMP=0x0000000000043163
- (id)_labelSpecifier;	// IMP=0x0000000000043025
- (id)_carrierNameSpecifier;	// IMP=0x0000000000042fa4
- (id)_removeSIMSpecifier;	// IMP=0x0000000000042e8c
- (id)_phoneNumber:(id)arg1;	// IMP=0x0000000000042e1e
- (id)_planLabel:(id)arg1;	// IMP=0x0000000000042dc3
- (id)specifiers;	// IMP=0x0000000000042a76

@end

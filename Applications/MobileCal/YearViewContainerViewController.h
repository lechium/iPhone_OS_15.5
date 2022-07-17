//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactYearViewController, LargeYearViewController, MonthViewContainerViewController, NSString;

@interface YearViewContainerViewController
{
    MonthViewContainerViewController *_cachedMonthViewController;	// 8 = 0x8
    CompactYearViewController *_compactController;	// 16 = 0x10
    LargeYearViewController *_regularController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000012ff13
@property(retain, nonatomic) LargeYearViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactYearViewController *compactController; // @synthesize compactController=_compactController;
- (void)pushContentViewOfType:(long long)arg1 date:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000012fe0d
- (id)pushNextLevelMainViewControllerContainerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012fdfb
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x001000000012fdb8
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x001000000012fca1
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x001000000012fc8f
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x001000000012fb78
- (id)childViewControllerForUnknownTraits;	// IMP=0x001000000012fb66
- (id)_pushMonthViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000012f8a7
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;	// IMP=0x001000000012f7ff
- (id)currentChildViewController;	// IMP=0x001000000012f7b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

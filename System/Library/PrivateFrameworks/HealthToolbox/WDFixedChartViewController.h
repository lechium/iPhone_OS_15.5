//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDataMetadataDetailSection, HKInteractiveChartViewController, HKValueRange, NSString;

__attribute__((visibility("hidden")))
@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder>
{
    HKValueRange *_fixedRange;	// 8 = 0x8
    HKInteractiveChartViewController *_chartController;	// 16 = 0x10
    HKDataMetadataDetailSection *_metadataSection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022b3e
@property(readonly, nonatomic) HKDataMetadataDetailSection *metadataSection; // @synthesize metadataSection=_metadataSection;
@property(readonly, nonatomic) HKInteractiveChartViewController *chartController; // @synthesize chartController=_chartController;
@property(readonly, nonatomic) HKValueRange *fixedRange; // @synthesize fixedRange=_fixedRange;
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000000022b02
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000000022afc
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000022aee
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022ae6
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022ade
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022a18
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000022a0d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000229e3
- (id)cellForChart;	// IMP=0x0000000000022910
- (void)viewDidLoad;	// IMP=0x00000000000227c5
- (id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4;	// IMP=0x0000000000022662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSString, WDAddDataManualEntryItem;

@interface WDUVExposureAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateRangeEntryItem;	// 48 = 0x30
    WDAddDataManualEntryItem *_valueEntryItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000f9bc
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x000000000000f876
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f7b3
- (id)defaultEditingItem;	// IMP=0x000000000000f79e
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x000000000000f712
- (long long)numberOfSections;	// IMP=0x000000000000f707
- (id)generateHKObjects;	// IMP=0x000000000000f506
- (void)viewDidLoad;	// IMP=0x000000000000f4c3
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;	// IMP=0x000000000000f313

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSDate, NSString, WDAddDataManualEntryItem;

@interface _WDTwoPartDateRangeManualEntryItem <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_startItem;	// 40 = 0x28
    WDAddDataManualEntryItem *_endItem;	// 48 = 0x30
    NSDate *_maximumEndDate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000008737
- (void)beginEditing;	// IMP=0x000000000000871a
- (id)generateValue;	// IMP=0x0000000000008681
- (void)_endItemDidChange;	// IMP=0x00000000000085e5
- (void)_startItemDidChange;	// IMP=0x0000000000008549
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000084bd
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x0000000000008476
- (void)_setupEntryItems;	// IMP=0x00000000000082d4
- (id)tableViewCells;	// IMP=0x0000000000008242
- (id)initWithMaximumEndDate:(id)arg1;	// IMP=0x00000000000081c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


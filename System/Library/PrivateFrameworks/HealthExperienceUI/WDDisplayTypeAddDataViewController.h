//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSString, WDAddDataManualEntryItem;

@interface WDDisplayTypeAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_dateTimeEntryItem;	// 48 = 0x30
    WDAddDataManualEntryItem *_valueFieldManualEntryItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000013a5b
@property(retain, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem; // @synthesize valueFieldManualEntryItem=_valueFieldManualEntryItem;
- (void)manualEntryItemDidUpdate:(id)arg1;	// IMP=0x0000000000013825
- (void)_updateManualEntryItemWithCurrentBMI:(id)arg1;	// IMP=0x0000000000013696
- (void)_setDefaultValuesIfNecessary;	// IMP=0x0000000000013644
- (id)defaultEditingItem;	// IMP=0x000000000001362f
- (id)manualEntryItemsForSection:(long long)arg1;	// IMP=0x00000000000135b5
- (long long)numberOfSections;	// IMP=0x00000000000135aa
- (id)generateHKObjects;	// IMP=0x00000000000133bd
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013075
- (void)viewDidLoad;	// IMP=0x0000000000012f68
- (id)createValueFieldManualEntryItem;	// IMP=0x0000000000012d32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

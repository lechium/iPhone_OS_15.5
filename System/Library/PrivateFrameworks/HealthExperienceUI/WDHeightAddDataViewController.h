//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController
{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000b85a
- (id)_inchUnitString;	// IMP=0x000000000000b7e7
- (id)_feetUnitString;	// IMP=0x000000000000b774
- (_Bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;	// IMP=0x000000000000b6f4
- (id)createValueFieldManualEntryItem;	// IMP=0x000000000000b69b
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;	// IMP=0x000000000000b512

@end


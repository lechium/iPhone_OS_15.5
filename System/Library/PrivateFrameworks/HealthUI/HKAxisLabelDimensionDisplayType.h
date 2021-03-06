//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayType, HKDisplayTypeValueFormatter, HKUnitPreferenceController;

@interface HKAxisLabelDimensionDisplayType
{
    HKDisplayTypeValueFormatter *_valueFormatter;	// 24 = 0x18
    HKDisplayType *_displayType;	// 32 = 0x20
    HKUnitPreferenceController *_unitController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001aa7a9
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKDisplayTypeValueFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
- (id)stringForLocation:(id)arg1;	// IMP=0x00000000001aa673
- (id)initWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2;	// IMP=0x00000000001aa56b

@end


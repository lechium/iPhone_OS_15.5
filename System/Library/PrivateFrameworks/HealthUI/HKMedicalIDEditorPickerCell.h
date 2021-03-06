//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView;

@interface HKMedicalIDEditorPickerCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;	// 8 = 0x8
    long long _chosenValueIndex;	// 16 = 0x10
    NSArray *_possibleValues;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fa912
@property(retain, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(nonatomic) long long chosenValueIndex; // @synthesize chosenValueIndex=_chosenValueIndex;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000000fa896
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000000000fa876
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000000fa859
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000000fa84e
- (void)commitEditing;	// IMP=0x00000000000fa83c
- (void)beginEditing;	// IMP=0x00000000000fa7fb
- (void)dealloc;	// IMP=0x00000000000fa794
- (void)_hidePicker;	// IMP=0x00000000000fa757
- (void)_showPicker;	// IMP=0x00000000000fa60f
- (id)formattedValue;	// IMP=0x00000000000fa58b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


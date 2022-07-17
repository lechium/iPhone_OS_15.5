//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorPickerCell;

@interface HKEmergencyCardOrganDonorTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorPickerCell *_editableCell;	// 8 = 0x8
    _Bool _isEditing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000197b13
- (void)commitEditing;	// IMP=0x0000000000197af6
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x0000000000197ad1
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x0000000000197a5f
- (long long)editingStyleForRowAtIndex:(long long)arg1;	// IMP=0x00000000001979e7
- (_Bool)canEditRowAtIndex:(long long)arg1;	// IMP=0x00000000001979d5
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001974b7
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x00000000001973f6
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;	// IMP=0x00000000001973bb
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x0000000000197339
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x0000000000196fe8
- (id)_createEditableCell;	// IMP=0x0000000000196f0a
- (id)possibleValues;	// IMP=0x0000000000196ae9
- (_Bool)hasPresentableData;	// IMP=0x0000000000196ae1
- (id)title;	// IMP=0x0000000000196a85

@end

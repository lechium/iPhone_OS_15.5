//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorHeightCell;

@interface HKEmergencyCardHeightTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorHeightCell *_editableCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000254c07
- (void)commitEditing;	// IMP=0x0000000000254bea
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x0000000000254bc5
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;	// IMP=0x0000000000254aca
- (long long)editingStyleForRowAtIndex:(long long)arg1;	// IMP=0x0000000000254a63
- (_Bool)canEditRowAtIndex:(long long)arg1;	// IMP=0x0000000000254a51
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x0000000000254932
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;	// IMP=0x00000000002548f7
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x0000000000254875
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x000000000025445f
- (id)_createEditableCell;	// IMP=0x00000000002543bc
- (void)localeDidChange:(id)arg1;	// IMP=0x000000000025439f
- (_Bool)hasPresentableData;	// IMP=0x000000000025433c
- (id)title;	// IMP=0x00000000002542e0

@end


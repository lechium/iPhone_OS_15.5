//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>
#import <HealthUI/UIImagePickerControllerDelegate-Protocol.h>
#import <HealthUI/UINavigationControllerDelegate-Protocol.h>

@class HKMedicalIDEditorNameAndPhotoCell, NSString;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    HKMedicalIDEditorNameAndPhotoCell *_cell;	// 8 = 0x8
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007d7d0
@property(nonatomic) __weak id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x000000000007d748
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000007d704
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000000007d450
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x000000000007d3d5
- (id)_makeMedicalIDPhotoMenu;	// IMP=0x000000000007cbfd
- (void)_updateMedicalIDPhotoMenu;	// IMP=0x000000000007cb13
- (void)setData:(id)arg1;	// IMP=0x000000000007c9c1
- (void)commitEditing;	// IMP=0x000000000007c9a4
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;	// IMP=0x000000000007c91b
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;	// IMP=0x000000000007c892
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;	// IMP=0x000000000007c807
- (double)_cellFittedHeightWithWidth:(double)arg1;	// IMP=0x000000000007c76b
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x000000000007c710
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;	// IMP=0x000000000007c6b5
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x000000000007c6a3
- (void)_editPhotoTapped:(id)arg1;	// IMP=0x000000000007c622
- (id)_cell;	// IMP=0x000000000007c49b
- (id)title;	// IMP=0x000000000007c43f
- (id)initInEditMode:(_Bool)arg1;	// IMP=0x000000000007c394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


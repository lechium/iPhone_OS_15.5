//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTEditStringRow.h>

@interface PTEditStringRow (PXEditStringRow)
+ (void)_px_configureTextField:(id)arg1 withTextPlaceholder:(id)arg2 saveAction:(id)arg3 forRow:(id)arg4;	// IMP=0x00000000002735be
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 textPlaceholder:(id)arg5 textValidator:(CDUnknownBlockType)arg6 condition:(id)arg7;	// IMP=0x00000000002733f4
- (void)setValue:(id)arg1;	// IMP=0x000000000027246a
- (void)_px_updateSaveActionFromTextField;	// IMP=0x0000000000272437
- (void)_px_setEditStringRowTextFieldAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000002723f2
- (CDUnknownBlockType)_px_editStringRowTextFieldAction;	// IMP=0x00000000002723b4
- (id)_px_validatedTextFromText:(id)arg1;	// IMP=0x0000000000272310
- (void)_px_setEditStringRowTextValidationAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000002722cb
- (CDUnknownBlockType)_px_editStringRowTextValidationAction;	// IMP=0x000000000027228d
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIPickerView;

@interface _TtC18SharingViewService28B389RolePickerViewController
{
    MISSING_TYPE *rolePickerView;	// 8 = 0x8
    MISSING_TYPE *rolesLoaded;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x004000000012a250
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000012a1a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000012a0c0
- (id)initWithMainController:(id)arg1;	// IMP=0x001000000012a060
- (void)continuePressed:(id)arg1;	// IMP=0x00100000001299c0
- (void)dismissPressed:(id)arg1;	// IMP=0x0010000000129890
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000129850
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000129820
@property(nonatomic) __weak UIPickerView *rolePickerView; // @synthesize rolePickerView;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000012a2a0
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x001000000012a290
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x001000000012a300
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x001000000012a2f0

@end


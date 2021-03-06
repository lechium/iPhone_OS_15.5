//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SFRemoteAutoFillSessionHelper, _SFAppAutoFillPasswordViewController;

__attribute__((visibility("hidden")))
@interface PasswordPickerMainController
{
    NSString *_contextBundleID;	// 24 = 0x18
    NSString *_contextLocalizedAppName;	// 32 = 0x20
    NSString *_contextUnlocalizedAppName;	// 40 = 0x28
    NSArray *_contextAssociatedDomains;	// 48 = 0x30
    NSString *_contextURL;	// 56 = 0x38
    _Bool _dismissed;	// 64 = 0x40
    SFRemoteAutoFillSessionHelper *_helper;	// 72 = 0x48
    _Bool _passwordPicked;	// 80 = 0x50
    _SFAppAutoFillPasswordViewController *_vcPicker;	// 88 = 0x58
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000001a96b4
- (void).cxx_destruct;	// IMP=0x00200000001a93f9
- (void)passwordViewController:(id)arg1 selectedCredential:(id)arg2;	// IMP=0x00100000001a9290
- (void)passwordViewControllerDidFinish:(id)arg1;	// IMP=0x00100000001a9213
- (void)handlePasswordPicked:(id)arg1;	// IMP=0x00100000001a90d4
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a8fa6
- (void)dismiss:(int)arg1;	// IMP=0x00100000001a8f92
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001a8ddd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001a8bd8
- (void)_handleHomeButtonPressed;	// IMP=0x00100000001a8b6c
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000001a8a19
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a8798
- (void)_willAppearInRemoteViewController;	// IMP=0x00100000001a8705
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001a863d
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x00100000001a8635

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


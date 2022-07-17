//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, UIImage, _SBAlertController;

@interface SBAlertItem : NSObject <BSDescriptionProviding>
{
    _SBAlertController *_alertController;	// 8 = 0x8
    NSArray *_allowedBundleIDs;	// 16 = 0x10
    NSString *_iconImagePath;	// 24 = 0x18
    UIImage *_iconImage;	// 32 = 0x20
    _Bool _didEverActivate;	// 40 = 0x28
    _Bool _didEverDeactivate;	// 41 = 0x29
    _Bool _ignoreIfAlreadyDisplaying;	// 42 = 0x2a
    _Bool _didPlayPresentationSound;	// 43 = 0x2b
    _Bool _allowInSetup;	// 44 = 0x2c
    _Bool _pendInSetupIfNotAllowed;	// 45 = 0x2d
    _Bool _pendWhileKeyBagLocked;	// 46 = 0x2e
    _Bool _allowInCar;	// 47 = 0x2f
    _Bool _allowMessageInCar;	// 48 = 0x30
    _Bool _presented;	// 49 = 0x31
    _Bool _ignoresQuietMode;	// 50 = 0x32
    _Bool _suppressForKeynote;	// 51 = 0x33
    _Bool _shouldMaskIcon;	// 52 = 0x34
    unsigned long long _presentationState;	// 56 = 0x38
    UIImage *_headerImage;	// 64 = 0x40
    UIImage *_attachmentImage;	// 72 = 0x48
    NSString *_contactIdentifier;	// 80 = 0x50
    NSString *_contentType;	// 88 = 0x58
}

+ (void)activateAlertItem:(id)arg1;	// IMP=0x0000000000009234
+ (id)_alertItemsController;	// IMP=0x0000000000009213
- (void).cxx_destruct;	// IMP=0x0000000000009c3e
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(nonatomic) _Bool shouldMaskIcon; // @synthesize shouldMaskIcon=_shouldMaskIcon;
@property(retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage; // @synthesize _attachmentImage;
@property(retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage; // @synthesize _headerImage;
@property(nonatomic, getter=_isPresented, setter=_setPresented:) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic, setter=_setPresentationState:) unsigned long long _presentationState; // @synthesize _presentationState;
@property(retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath; // @synthesize iconImagePath=_iconImagePath;
@property(retain, nonatomic, setter=setIconImage:) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic, setter=_setIgnoresQuietMode:) _Bool _ignoresQuietMode; // @synthesize _ignoresQuietMode;
@property(nonatomic) _Bool allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property(nonatomic) _Bool allowInCar; // @synthesize allowInCar=_allowInCar;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) _Bool pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property(nonatomic) _Bool pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) _Bool suppressForKeynote; // @synthesize suppressForKeynote=_suppressForKeynote;
@property(nonatomic) _Bool allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) _Bool ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
- (_Bool)unlocksScreen;	// IMP=0x0000000000009ad5
- (_Bool)undimsScreen;	// IMP=0x0000000000009acd
- (_Bool)dismissOnLock;	// IMP=0x0000000000009ac5
- (void)buttonDismissed;	// IMP=0x0000000000009ab3
- (void)dismiss:(int)arg1;	// IMP=0x0000000000009aa1
- (void)dismiss;	// IMP=0x0000000000009a8f
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000009a87
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009a75
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000009a25
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000099c0
- (id)succinctDescription;	// IMP=0x0000000000009970
@property(readonly, copy) NSString *description;
- (id)_publicDescription;	// IMP=0x0000000000009902
- (_Bool)_displayActionButtonOnLockScreen;	// IMP=0x00000000000098fa
- (_Bool)_didEverActivate;	// IMP=0x00000000000098f1
- (_Bool)_hasActiveKeyboardOnScreen;	// IMP=0x000000000000985c
- (void)_noteVolumeOrLockPressed;	// IMP=0x0000000000009856
- (id)_prepareNewAlertControllerWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000000096a8
- (void)_clearAlertController;	// IMP=0x000000000000968e
- (id)_alertController;	// IMP=0x0000000000009680
- (void)_deactivationCompleted;	// IMP=0x0000000000009650
- (void)presentationStateDidChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x000000000000955c
- (void)doCleanupAfterDeactivationAnimation;	// IMP=0x0000000000009532
- (_Bool)hideOnClonedDisplay;	// IMP=0x000000000000952a
- (_Bool)dismissesOverlaysOnLockScreen;	// IMP=0x0000000000009522
- (int)alertPriority;	// IMP=0x000000000000951a
- (_Bool)allowInLoginWindow;	// IMP=0x0000000000009512
- (_Bool)behavesSuperModally;	// IMP=0x000000000000950a
- (_Bool)forcesModalAlertAppearance;	// IMP=0x00000000000094f8
- (void)didDeactivateForReason:(int)arg1;	// IMP=0x0000000000009476
- (void)willDeactivateForReason:(int)arg1;	// IMP=0x0000000000009470
- (void)deactivateForReason:(int)arg1;	// IMP=0x0000000000009417
- (void)deactivateForButton;	// IMP=0x0000000000009400
- (void)deactivate;	// IMP=0x00000000000093e9
- (void)willRelockForButtonPress:(_Bool)arg1;	// IMP=0x00000000000093e3
- (void)alertItemDidDisappear;	// IMP=0x00000000000093dd
- (void)alertItemDidAppear;	// IMP=0x00000000000093d7
- (void)didActivate;	// IMP=0x00000000000093c7
- (void)willActivate;	// IMP=0x00000000000093c1
- (void)didFailToActivate;	// IMP=0x00000000000093bb
- (id)sound;	// IMP=0x00000000000093b3
- (void)playPresentationSound;	// IMP=0x000000000000934f
- (_Bool)didPlayPresentationSound;	// IMP=0x0000000000009346
- (_Bool)reappearsAfterUnlock;	// IMP=0x000000000000933e
- (_Bool)reappearsAfterLock;	// IMP=0x0000000000009329
- (_Bool)wakeDisplay;	// IMP=0x00000000000092f0
- (_Bool)shouldShowInEmergencyCall;	// IMP=0x00000000000092e8
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000000000092e0
- (_Bool)allowLockScreenDismissal;	// IMP=0x00000000000092d8
- (_Bool)allowMenuButtonDismissal;	// IMP=0x00000000000092d0
- (void)performUnlockAction;	// IMP=0x00000000000092ca
- (id)shortLockLabel;	// IMP=0x00000000000092c2
- (id)lockLabel;	// IMP=0x00000000000092ba
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000000092b4
- (id)alertController;	// IMP=0x00000000000092a6
- (id)init;	// IMP=0x00000000000091c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

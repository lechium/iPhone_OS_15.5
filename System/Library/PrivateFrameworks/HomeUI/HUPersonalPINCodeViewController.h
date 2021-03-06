//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUPresentationDelegateHost-Protocol.h>
#import <HomeUI/UIResponderStandardEditActions-Protocol.h>

@class HFPinCodeManager, HUPersonalPINCodeItemManager, NSString;
@protocol HUPersonalPINCodeViewControllerDelegate, HUPresentationDelegate;

@interface HUPersonalPINCodeViewController <UIResponderStandardEditActions, HUPresentationDelegateHost>
{
    id <HUPresentationDelegate> _presentationDelegate;	// 8 = 0x8
    id <HUPersonalPINCodeViewControllerDelegate> _delegate;	// 16 = 0x10
    HUPersonalPINCodeItemManager *_personalPINCodeItemManager;	// 24 = 0x18
    HFPinCodeManager *_pinCodeManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002cde68
@property(readonly, nonatomic) HFPinCodeManager *pinCodeManager; // @synthesize pinCodeManager=_pinCodeManager;
@property(nonatomic) __weak HUPersonalPINCodeItemManager *personalPINCodeItemManager; // @synthesize personalPINCodeItemManager=_personalPINCodeItemManager;
@property(nonatomic) __weak id <HUPersonalPINCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)_hideSpinner;	// IMP=0x00000000002cdbea
- (void)_showSpinner;	// IMP=0x00000000002cda4d
- (void)_shareCode;	// IMP=0x00000000002cd7ca
- (void)copy:(id)arg1;	// IMP=0x00000000002cd729
- (void)openPINCodeEditor;	// IMP=0x00000000002ccf3a
- (id)currentPinCodeValue;	// IMP=0x00000000002ccd06
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002cc0d3
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002cbe8d
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000002cb9eb
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002cb9da
- (_Bool)shouldManageTextFieldForItem:(id)arg1;	// IMP=0x00000000002cb9d2
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000002cb9ca
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x00000000002cb915
- (id)initWithItem:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3;	// IMP=0x00000000002cb7b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


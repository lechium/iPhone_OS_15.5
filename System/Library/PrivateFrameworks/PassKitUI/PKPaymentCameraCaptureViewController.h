//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKCameraCaptureInstructionView, PKPaymentCardManualEntryViewController, PKPaymentProvisioningController, UIColor, UIView;
@protocol PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCameraCaptureViewController : UIViewController
{
    NSArray *_outputObjects;	// 8 = 0x8
    PKPaymentCardManualEntryViewController *_manualEntryController;	// 16 = 0x10
    id <PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;	// 24 = 0x18
    long long _context;	// 32 = 0x20
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 40 = 0x28
    UIView *_cameraView;	// 48 = 0x30
    UIView *_cameraInstructionContainerView;	// 56 = 0x38
    PKCameraCaptureInstructionView *_cameraInstructionView;	// 64 = 0x40
    unsigned long long _cameraCaptureStartTime;	// 72 = 0x48
    PKPaymentProvisioningController *_provisioningController;	// 80 = 0x50
    _Bool _hideSetupLaterButton;	// 88 = 0x58
    UIColor *_maskColor;	// 96 = 0x60
    UIColor *_maskOutlineColor;	// 104 = 0x68
    UIColor *_placementTextColor;	// 112 = 0x70
    UIColor *_capturedTextColor;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000042f867
@property(copy, nonatomic) UIColor *capturedTextColor; // @synthesize capturedTextColor=_capturedTextColor;
@property(copy, nonatomic) UIColor *placementTextColor; // @synthesize placementTextColor=_placementTextColor;
@property(copy, nonatomic) UIColor *maskOutlineColor; // @synthesize maskOutlineColor=_maskOutlineColor;
@property(copy, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) _Bool hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
- (void)_pushManualEntryViewController;	// IMP=0x000000000042f6b9
- (void)_setupLater:(id)arg1;	// IMP=0x000000000042f556
- (void)_manualEntryButtonPressed:(id)arg1;	// IMP=0x000000000042f507
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000042f37d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000042f23b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000042f1f2
- (void)viewDidLayoutSubviews;	// IMP=0x000000000042ef6d
- (void)viewDidLoad;	// IMP=0x000000000042ec70
- (void)loadView;	// IMP=0x000000000042e5db
- (void)dealloc;	// IMP=0x000000000042e5ac
- (id)initWithCameraCaptureDelegate:(id)arg1;	// IMP=0x000000000042e55b
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;	// IMP=0x000000000042e47d
- (id)init;	// IMP=0x000000000042e44e
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00000000000105f8

@end


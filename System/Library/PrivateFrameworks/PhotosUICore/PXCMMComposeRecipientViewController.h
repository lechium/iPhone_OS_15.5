//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXComposeRecipientTableViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>

@class NSProgress, NSString, PXCMMSession, PXCMMSpecManager, PXComposeRecipientTableViewController, PXComposeRecipientTableViewModel, PXUpdater, UIButton, UILabel, UIVisualEffectView;
@protocol PXCMMActionControllerDelegate;

@interface PXCMMComposeRecipientViewController : UIViewController <PXChangeObserver, PXComposeRecipientTableViewControllerDelegate, PXDiagnosticsEnvironment>
{
    PXCMMSession *_session;	// 8 = 0x8
    id <PXCMMActionControllerDelegate> _actionDelegate;	// 16 = 0x10
    PXCMMSpecManager *_specManager;	// 24 = 0x18
    PXUpdater *_updater;	// 32 = 0x20
    PXComposeRecipientTableViewModel *_tableViewModel;	// 40 = 0x28
    PXComposeRecipientTableViewController *_tableViewController;	// 48 = 0x30
    UIVisualEffectView *_footerVisualEffectView;	// 56 = 0x38
    UILabel *_privacyMessageLabel;	// 64 = 0x40
    UIButton *_sendButton;	// 72 = 0x48
    NSProgress *_actionProgress;	// 80 = 0x50
    double _maximumContentWidth;	// 88 = 0x58
    UIButton *_tapToRadarButton;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000014dd9f
@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(retain, nonatomic) NSProgress *actionProgress; // @synthesize actionProgress=_actionProgress;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *privacyMessageLabel; // @synthesize privacyMessageLabel=_privacyMessageLabel;
@property(retain, nonatomic) UIVisualEffectView *footerVisualEffectView; // @synthesize footerVisualEffectView=_footerVisualEffectView;
@property(retain, nonatomic) PXComposeRecipientTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) PXComposeRecipientTableViewModel *tableViewModel; // @synthesize tableViewModel=_tableViewModel;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXCMMSpecManager *specManager; // @synthesize specManager=_specManager;
@property(nonatomic) __weak id <PXCMMActionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000014da1c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000014d900
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000014d7df
- (void)dismissPresentedViewControllerAnimated:(_Bool)arg1 forComposeRecipientTableViewController:(id)arg2;	// IMP=0x000000000014d78c
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 forComposeRecipientTableViewController:(id)arg3;	// IMP=0x000000000014d772
- (void)composeRecipientTableViewControllerDidChangeHeight:(id)arg1;	// IMP=0x000000000014d760
- (void)_updateUserInteraction;	// IMP=0x000000000014d5cd
- (void)_updateTableView;	// IMP=0x000000000014d41d
- (void)_updateFooter;	// IMP=0x000000000014cdc8
- (void)_setNeedsUpdate;	// IMP=0x000000000014ccf9
- (void)_tapToRadarTapped:(id)arg1;	// IMP=0x000000000014cc5b
- (void)_handleActionButton:(id)arg1;	// IMP=0x000000000014c74b
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000014c699
- (void)viewWillLayoutSubviews;	// IMP=0x000000000014c4f3
- (void)viewDidLoad;	// IMP=0x000000000014bbf8
- (void)dealloc;	// IMP=0x000000000014bb55
- (id)initWithSession:(id)arg1;	// IMP=0x000000000014b760
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014b6dd
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000014b64d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

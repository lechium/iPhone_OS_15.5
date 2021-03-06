//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <PhotosUICore/PXPeopleFlowViewControllerActionDelegate-Protocol.h>
#import <PhotosUICore/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIBarButtonItem, UIViewController;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate>
{
    id <PXPeopleFlowController> _flowController;	// 8 = 0x8
    UIBarButtonItem *_cancelButton;	// 16 = 0x10
    UIBarButtonItem *_backButton;	// 24 = 0x18
    UIBarButtonItem *_nextButton;	// 32 = 0x20
    UIBarButtonItem *_doneButton;	// 40 = 0x28
    UIViewController<PXPeopleFlowViewController> *_currentViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004de81c
@property(retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) id <PXPeopleFlowController> flowController; // @synthesize flowController=_flowController;
- (void)requestDone;	// IMP=0x00000000004de729
- (void)requestCancel;	// IMP=0x00000000004de714
- (void)requestAdvanceToNextInFlow;	// IMP=0x00000000004de6ff
- (void)setAdvanceButtonEnabled:(_Bool)arg1;	// IMP=0x00000000004de674
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000004de5d1
- (_Bool)_enableBootstrapSpeedBump;	// IMP=0x00000000004de586
- (void)_updateActions;	// IMP=0x00000000004de32a
- (void)back:(id)arg1;	// IMP=0x00000000004de229
- (void)next:(id)arg1;	// IMP=0x00000000004de107
- (void)done:(id)arg1;	// IMP=0x00000000004de03b
- (void)cancel:(id)arg1;	// IMP=0x00000000004ddfb5
- (void)viewDidLoad;	// IMP=0x00000000004ddcc0
- (id)initWithFlowController:(id)arg1;	// IMP=0x00000000004ddbf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


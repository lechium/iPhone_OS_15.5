//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNAvatarCardActionsViewDelegate-Protocol.h>
#import <ContactsUI/CNCardTransitioning-Protocol.h>
#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;
@protocol CNAvatarCardActionListController, CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate>
{
    _Bool _visible;	// 8 = 0x8
    _Bool _hasHeader;	// 9 = 0x9
    _Bool _headerOnTop;	// 10 = 0xa
    CNAvatarCardController *_cardController;	// 16 = 0x10
    id <CNAvatarCardViewControllerDelegate> _delegate;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    CNAvatarCardActionsView *_legacyContactActionsView;	// 40 = 0x28
    CNContactActionsController *_actionsController;	// 48 = 0x30
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;	// 56 = 0x38
    UIView *_effectView;	// 64 = 0x40
    NSArray *_verticalConstraints;	// 72 = 0x48
    double _borderMargin;	// 80 = 0x50
    UIView *_headerContainerView;	// 88 = 0x58
    UIView *_actionsListView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000cb535
@property(retain, nonatomic) UIView *actionsListView; // @synthesize actionsListView=_actionsListView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) double borderMargin; // @synthesize borderMargin=_borderMargin;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // @synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // @synthesize legacyContactActionsView=_legacyContactActionsView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000000cb200
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x00000000000cab41
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cab2d
- (id)viewControllerForCardActionsView:(id)arg1;	// IMP=0x00000000000caa64
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;	// IMP=0x00000000000caa0b
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x00000000000ca92f
- (void)refreshActions;	// IMP=0x00000000000ca8f2
- (void)_updatePreferredSize;	// IMP=0x00000000000ca6ed
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000ca625
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000ca5ac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000ca542
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000ca48d
- (void)updateActionsViewBackgroundColor;	// IMP=0x00000000000ca3b8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ca377
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ca2ee
- (void)updateActionsControllerHeightConstraint;	// IMP=0x00000000000ca244
- (void)didAddActionsViewToHierarchy;	// IMP=0x00000000000c9f87
- (void)willAddActionsViewToHierarchy;	// IMP=0x00000000000c9ee7
@property(readonly, nonatomic) id <CNAvatarCardActionListController> actionListController;
@property(readonly, nonatomic) id <CNAvatarCardActionListOrbSupport> actionListViewController;
- (id)viewForTouchContinuation;	// IMP=0x00000000000c9dcd
- (id)actionsView;	// IMP=0x00000000000c9d0b
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (struct CGRect)_photoFrameInView:(id)arg1;	// IMP=0x00000000000c9ab5
@property(nonatomic) _Bool dismissesBeforePerforming;
@property(nonatomic) _Bool actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000c98a4
- (void)updateViewConstraints;	// IMP=0x00000000000c9612
- (void)viewDidLoad;	// IMP=0x00000000000c8917
- (void)dealloc;	// IMP=0x00000000000c88a2
- (id)initWithContacts:(id)arg1;	// IMP=0x00000000000c8600

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;

@end


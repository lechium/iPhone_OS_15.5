//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXFloatingCardGestureCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXFloatingCardViewControllerDelegate-Protocol.h>

@class NSString, PXFloatingCardGestureCoordinator, PXFloatingCardViewController, UIViewController;
@protocol PXFloatingCardContainer, PXFloatingCardLayout, PXFloatingCardPresentationControllerDelegate;

@interface PXFloatingCardPresentationController : NSObject <PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardViewControllerDelegate>
{
    _Bool _isPresenting;	// 8 = 0x8
    id <PXFloatingCardLayout> _layout;	// 16 = 0x10
    id <PXFloatingCardPresentationControllerDelegate> _delegate;	// 24 = 0x18
    UIViewController<PXFloatingCardContainer> *_containerViewController;	// 32 = 0x20
    PXFloatingCardViewController *_cardViewController;	// 40 = 0x28
    PXFloatingCardGestureCoordinator *_gestureCoordinator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000025982a
@property(retain, nonatomic) PXFloatingCardGestureCoordinator *gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(nonatomic) __weak PXFloatingCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) __weak UIViewController<PXFloatingCardContainer> *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <PXFloatingCardPresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PXFloatingCardLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
- (void)floatingCardViewControllerDismissTapped:(id)arg1;	// IMP=0x00000000002596f8
- (void)cardViewController:(id)arg1 didUpdatePosition:(unsigned long long)arg2;	// IMP=0x00000000002596ac
- (void)cardViewController:(id)arg1 didUpdateHeight:(double)arg2;	// IMP=0x000000000025965d
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;	// IMP=0x00000000002595d1
- (double)availableHeightForCardViewController:(id)arg1;	// IMP=0x0000000000259506
- (void)_removeChildViewControllerFromParent:(id)arg1;	// IMP=0x0000000000259487
- (void)_addChildViewController:(id)arg1 toParentViewController:(id)arg2;	// IMP=0x00000000002593c2
- (void)setLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002592b8
- (void)dimAnimated:(_Bool)arg1;	// IMP=0x00000000002591a4
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x0000000000258f40
- (void)_applyLayout;	// IMP=0x0000000000258daa
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002588cf
- (id)initWithContainerViewController:(id)arg1;	// IMP=0x000000000025886b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


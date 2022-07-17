//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <CarPlaySupport/BSInvalidatable-Protocol.h>
#import <CarPlaySupport/CPSPreferredFocusManaging-Protocol.h>

@class NSString, UIFocusGuide;
@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable>
{
    _Bool usePreferredItemOnNextUpdate;	// 8 = 0x8
    UIFocusGuide *_rightHandDriveGuide;	// 16 = 0x10
    id <UIFocusItem> preferredFocusItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ff18
@property(nonatomic) _Bool usePreferredItemOnNextUpdate; // @synthesize usePreferredItemOnNextUpdate;
@property(nonatomic) __weak id <UIFocusItem> preferredFocusItem; // @synthesize preferredFocusItem;
- (id)_linearFocusMovementSequences;	// IMP=0x000000000000fb03
- (_Bool)_useRightHandDriveFocusGuide;	// IMP=0x000000000000f993
- (id)_firstFocusProvidingForViewController:(id)arg1;	// IMP=0x000000000000f7cf
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000f56c
- (id)preferredFocusEnvironments;	// IMP=0x000000000000f42c
- (_Bool)restoresFocusAfterTransition;	// IMP=0x000000000000f3e8
- (id)templates;	// IMP=0x000000000000f28c
- (id)topTemplate;	// IMP=0x000000000000f1eb
- (void)dismissTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f116
- (id)presentedTemplateViewController;	// IMP=0x000000000000f003
- (void)presentActionSheetTemplate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ee76
- (void)presentTemplateViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ed43
- (void)pushTemplateViewController:(id)arg1 animated:(_Bool)arg2 presentationStyle:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000eb10
- (void)popTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ea05
- (void)popToRootTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e8d3
- (void)popToTemplate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e77e
- (id)viewControllerForTemplate:(id)arg1;	// IMP=0x000000000000e6fa
- (unsigned long long)indexOfTemplate:(id)arg1;	// IMP=0x000000000000e534
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000e4c0
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000e44c
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000e3f9
- (void)_resetRightHandDriveGuide;	// IMP=0x000000000000e3d3
@property(readonly, nonatomic) UIFocusGuide *rightHandDriveGuide; // @synthesize rightHandDriveGuide=_rightHandDriveGuide;
- (void)viewDidLoad;	// IMP=0x000000000000dd32
- (void)invalidate;	// IMP=0x000000000000dc6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

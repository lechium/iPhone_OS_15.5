//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iCloudQuotaUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

@interface ICQRemoteContaineriPhoneViewController <UIViewControllerTransitioningDelegate>
{
    struct CGSize _containerContentSize;	// 8 = 0x8
}

@property(nonatomic) struct CGSize containerContentSize; // @synthesize containerContentSize=_containerContentSize;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000002560d
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000255df
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000254f5
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000000251ab
- (struct CGRect)_dismissalFrameForContentSize:(struct CGSize)arg1;	// IMP=0x00000000000250e7
- (struct CGRect)_layoutFrameForContentSize:(struct CGSize)arg1;	// IMP=0x0000000000024ff4
- (void)_layoutContainerView:(_Bool)arg1;	// IMP=0x0000000000024def
- (void)setContainerContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000024cdc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000024aa2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000247b4
- (void)viewDidLoad;	// IMP=0x0000000000024748
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000000000246df
- (id)init;	// IMP=0x00000000000246cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


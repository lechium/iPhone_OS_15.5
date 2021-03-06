//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Messages/MSRootViewControllerProtocol-Protocol.h>
#import <Messages/MSStickerBrowserViewDataSource-Protocol.h>

@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController <MSRootViewControllerProtocol, MSStickerBrowserViewDataSource>
{
    _Bool _viewHasAppeared;	// 8 = 0x8
    MSStickerBrowserView *_stickerBrowserView;	// 16 = 0x10
    long long _stickerSize;	// 24 = 0x18
    struct CGRect _initialFrameBeforeAppearance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000046e8
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
@property(retain, nonatomic) MSStickerBrowserView *stickerBrowserView; // @synthesize stickerBrowserView=_stickerBrowserView;
@property(nonatomic) struct CGRect initialFrameBeforeAppearance; // @synthesize initialFrameBeforeAppearance=_initialFrameBeforeAppearance;
- (void)disableUserInteraction;	// IMP=0x00000000000045b2
- (void)enableUserInteraction;	// IMP=0x00000000000044ef
- (void)updateSnapshotWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000042ba
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;	// IMP=0x00000000000042b2
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;	// IMP=0x00000000000042aa
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000004268
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000004229
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000041bf
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000040f6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000409e
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000003f4f
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000003ece
- (void)loadView;	// IMP=0x0000000000003ce1
- (id)initWithStickerSize:(long long)arg1;	// IMP=0x0000000000003c7b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000003c34
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003bf1
- (id)init;	// IMP=0x0000000000003bda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


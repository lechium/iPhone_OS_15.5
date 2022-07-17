//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SVSCardContainerView, ShareAudioAcceptMainController, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface ShareAudioAcceptAskViewController : UIViewController
{
    _Bool _viewDidAppear;	// 8 = 0x8
    SVSCardContainerView *_containerView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_infoLabel;	// 32 = 0x20
    UIButton *_cancelButton;	// 40 = 0x28
    UIButton *_joinButton;	// 48 = 0x30
    ShareAudioAcceptMainController *_mainController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001d454e
@property(retain, nonatomic) ShareAudioAcceptMainController *mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void);	// IMP=0x00100000001d44cb
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SVSCardContainerView *containerView; // @synthesize containerView=_containerView;
- (void)updateProductID:(unsigned int)arg1;	// IMP=0x00100000001d415d
- (void)handleCancelButton:(id)arg1;	// IMP=0x00100000001d409c
- (void)handleJoinButton:(id)arg1;	// IMP=0x00100000001d3fdb
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001d3f57
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001d3c9a
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00100000001d3c0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

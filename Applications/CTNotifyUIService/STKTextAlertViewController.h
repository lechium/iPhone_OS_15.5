//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, STKTextSessionAction;

@interface STKTextAlertViewController
{
}

+ (_Bool)wantsTextView;	// IMP=0x0020000000004c65
- (void)dismiss;	// IMP=0x002000000000566d
- (void)dismiss:(id)arg1;	// IMP=0x00100000000055fb
- (void)accept:(id)arg1;	// IMP=0x001000000000558c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000005507
- (id)alertText;	// IMP=0x001000000000548d
- (void)rightNavigationButtonPressed;	// IMP=0x001000000000547b
- (void)leftNavigationButtonPressed;	// IMP=0x0010000000005409
- (id)newBottomBar;	// IMP=0x0010000000004ec5
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x0010000000004eb0
- (id)newTopBar;	// IMP=0x0010000000004d26
- (_Bool)_sendsResponseUponDisplay;	// IMP=0x0010000000004cb8
- (_Bool)validateAction:(id)arg1;	// IMP=0x0010000000004c6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKTextSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end

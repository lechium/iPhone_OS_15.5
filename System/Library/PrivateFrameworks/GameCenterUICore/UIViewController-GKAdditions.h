//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUICore/GKContentRefresh-Protocol.h>
#import <GameCenterUICore/GKURLHandling-Protocol.h>

@class NSString;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
+ (id)_gkKeyWindowRootViewController;	// IMP=0x0000000000022bc0
- (void)_gkConfigureFocusGuidesForNavigationBar:(id)arg1;	// IMP=0x000000000000c6e7
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000000000c66d
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000000000c5ab
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c354
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;	// IMP=0x000000000000c1e3
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000c195
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;	// IMP=0x000000000000bfff
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b52b
- (void)_gkForceNextContentUpdate;	// IMP=0x000000000000b34a
- (void)_gkResetContents;	// IMP=0x000000000000b2fd
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2e7
- (id)_gkAlertControllerForBarButtonItem:(id)arg1;	// IMP=0x0000000000023251
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;	// IMP=0x0000000000022f3a
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022dea
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4 presentationCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000022c79
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022c56
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;	// IMP=0x0000000000022c41
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023410

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

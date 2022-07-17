//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKSMSCompose-Protocol.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate-Protocol.h>

@class CKSMSComposeQueuingRemoteViewControllerProxy, CKSMSComposeRemoteViewController, NSString, UINavigationController, _UIAsyncInvocation;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate>
{
    int _entryViewInvisible;	// 8 = 0x8
    _UIAsyncInvocation *_cancellationInvocation;	// 16 = 0x10
    UINavigationController *_clientNavigationController;	// 24 = 0x18
    _Bool _safeToAdd;	// 32 = 0x20
    _Bool _didChangeStatusBarStyle;	// 33 = 0x21
    long long _savedStatusBarStyle;	// 40 = 0x28
    _Bool _firstItemWasInserted;	// 48 = 0x30
    id _delegate;	// 56 = 0x38
    CKSMSComposeRemoteViewController *_remoteViewController;	// 64 = 0x40
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;	// 72 = 0x48
}

+ (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;	// IMP=0x00000000003ead1d
+ (double)maxTrimDurationForVideo;	// IMP=0x00000000003ead13
+ (double)maxTrimDurationForAudio;	// IMP=0x00000000003ead09
+ (_Bool)acceptsMIMEType:(id)arg1;	// IMP=0x00000000003ead01
- (void).cxx_destruct;	// IMP=0x00000000003ec9a0
@property(nonatomic) _Bool firstItemWasInserted; // @synthesize firstItemWasInserted=_firstItemWasInserted;
@property(retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
@property(retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;	// IMP=0x00000000003ec901
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000003ec8ae
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003ec87f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003ec7f2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003ec72c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003ec6a5
- (void)viewDidLoad;	// IMP=0x00000000003ec5ca
- (void)_addRemoteVCIfNeeded;	// IMP=0x00000000003ec38d
- (void)setTextEntryContentsVisible:(_Bool)arg1;	// IMP=0x00000000003ec341
- (void)smsComposeControllerSendStartedWithText:(id)arg1;	// IMP=0x00000000003ec295
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ec1ba
- (void)smsComposeControllerEntryViewContentInserted;	// IMP=0x00000000003ec17e
- (void)smsComposeControllerCancelled;	// IMP=0x00000000003ec142
- (void)smsComposeControllerAppeared;	// IMP=0x00000000003ec0c5
- (void)smsComposeControllerDataInserted;	// IMP=0x00000000003ec089
- (void)setShareSheetSessionID:(id)arg1;	// IMP=0x00000000003ec017
- (void)setContentText:(id)arg1;	// IMP=0x00000000003ebfa5
- (void)setCloudPhotoIDs:(id)arg1;	// IMP=0x00000000003ebf33
- (void)setPhotoIDs:(id)arg1;	// IMP=0x00000000003ebec1
- (void)setContentURLs:(id)arg1;	// IMP=0x00000000003ebe4f
- (void)setUTIs:(id)arg1;	// IMP=0x00000000003ebddd
- (void)setUICustomizationData:(id)arg1;	// IMP=0x00000000003ebd70
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;	// IMP=0x00000000003ebcea
- (void)setGameCenterModeWithPickerBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ebc78
- (void)forceMMS;	// IMP=0x00000000003ebc3b
- (void)forceCancelComposition;	// IMP=0x00000000003ebbfe
- (void)disableCameraAttachments;	// IMP=0x00000000003ebbc1
- (void)setNavBarTitle:(id)arg1;	// IMP=0x00000000003ebb4f
- (void)setShouldIgnoreEmailsWhenSending:(_Bool)arg1;	// IMP=0x00000000003ebb03
- (void)setShouldDisableEntryField:(_Bool)arg1;	// IMP=0x00000000003ebab7
- (void)setCanEditRecipients:(_Bool)arg1;	// IMP=0x00000000003eba6b
- (void)setPendingAddresses:(id)arg1;	// IMP=0x00000000003eb9f9
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 shouldHideClearPluginButton:(_Bool)arg4 chatGUID:(id)arg5;	// IMP=0x00000000003eb92b
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 shouldHideClearPluginButton:(_Bool)arg4;	// IMP=0x00000000003eb886
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 chatGUID:(id)arg4 groupName:(id)arg5;	// IMP=0x00000000003eb7a3
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;	// IMP=0x00000000003eb709
- (_Bool)insertMessage:(id)arg1;	// IMP=0x00000000003eb63c
- (_Bool)canInsertMessage;	// IMP=0x00000000003eb2aa
- (void)showInsertedItemInEntryView;	// IMP=0x00000000003eb26d
- (void)insertItemForSendingAndCalculateEntryViewFrame:(id)arg1 withAlternateFilename:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003eb096
- (_Bool)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;	// IMP=0x00000000003eafc9
- (_Bool)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;	// IMP=0x00000000003eaed4
- (_Bool)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;	// IMP=0x00000000003eae3a
- (_Bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;	// IMP=0x00000000003ead72
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000003eacac
- (void)dealloc;	// IMP=0x00000000003eaba2
- (id)initWithNavigationController:(id)arg1;	// IMP=0x00000000003eab4a
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000003eab42
- (id)init;	// IMP=0x00000000003ea75f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

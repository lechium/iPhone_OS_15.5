//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Messages/MSConversationDelegate-Protocol.h>
#import <Messages/MSMessagesAppTranscriptPresentation-Protocol.h>
#import <Messages/MSRootViewControllerProtocol-Protocol.h>

@class MSConversation, NSString;
@protocol _MSMessageComposeExtensionImplProtocol;

@interface MSMessagesAppViewController : UIViewController <MSRootViewControllerProtocol, MSConversationDelegate, MSMessagesAppTranscriptPresentation>
{
    _Bool _isReadyForDisplay;	// 8 = 0x8
    _Bool _viewHasAppeared;	// 9 = 0x9
    MSConversation *_activeConversation;	// 16 = 0x10
    id <_MSMessageComposeExtensionImplProtocol> _appContext;	// 24 = 0x18
    struct CGRect _initialFrameBeforeAppearance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000029ff
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> appContext; // @synthesize appContext=_appContext;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(retain, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property(nonatomic) struct CGRect initialFrameBeforeAppearance; // @synthesize initialFrameBeforeAppearance=_initialFrameBeforeAppearance;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002883
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000027bc
- (void)_prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000027a6
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;	// IMP=0x00000000000027a0
- (_Bool)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2;	// IMP=0x0000000000002798
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 associatedText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002783
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000276e
@property(readonly, nonatomic) struct UIEdgeInsets _balloonMaskEdgeInsets;
- (void)contentDidLoad;	// IMP=0x0000000000002663
- (void)requestResize;	// IMP=0x0000000000002626
- (void)setReadyForDisplay;	// IMP=0x00000000000025aa
- (_Bool)displaysAfterAppearance;	// IMP=0x00000000000025a2
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000002573
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000024f5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000249d
- (void)viewDidLoad;	// IMP=0x000000000000234e
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000002348
- (void)updateSnapshotWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000021ed
- (void)didResignActiveWithConversation:(id)arg1;	// IMP=0x00000000000021e7
- (void)willResignActiveWithConversation:(id)arg1;	// IMP=0x00000000000021e1
- (void)didBecomeActiveWithConversation:(id)arg1;	// IMP=0x00000000000021db
- (void)willBecomeActiveWithConversation:(id)arg1;	// IMP=0x00000000000021d5
@property(readonly, nonatomic) unsigned long long presentationContext;
@property(readonly, nonatomic) unsigned long long presentationStyle;
- (void)requestPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000002101
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;	// IMP=0x00000000000020da
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;	// IMP=0x00000000000020b3
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000001ff5
- (void)dealloc;	// IMP=0x0000000000001f8c
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000002a91
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000002a8b
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;	// IMP=0x0000000000002a85
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;	// IMP=0x0000000000002a7f
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;	// IMP=0x0000000000002a79
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;	// IMP=0x0000000000002a73
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;	// IMP=0x0000000000002a6d
- (void)dismiss;	// IMP=0x0000000000002a30
- (void)_volumeButtonPressed:(_Bool)arg1;	// IMP=0x0000000000002ad4
- (void)_dismissAndPresentPhotosApp;	// IMP=0x0000000000002a97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


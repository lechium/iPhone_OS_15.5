//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Messages/_MSMessageComposeExtensionImplProtocol-Protocol.h>

@class MSConversation, NSMapTable, NSString, UIViewController;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppContext : NSObject <_MSMessageComposeExtensionImplProtocol>
{
    id <_MSMessageComposeExtensionImplProtocol> _context;	// 8 = 0x8
    id <_MSMessageComposeExtensionImplProtocol> _keepAliveContext;	// 16 = 0x10
    NSMapTable *_conversationsByIdentifier;	// 24 = 0x18
    id <_MSMessageComposeExtensionImplProtocol> _containingContext;	// 32 = 0x20
    MSConversation *_activeConversation;	// 40 = 0x28
}

+ (id)activeExtensionContext;	// IMP=0x00000000000060e8
- (void).cxx_destruct;	// IMP=0x0000000000008ca2
@property(readonly, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext; // @synthesize containingContext=_containingContext;
- (void)_volumeButtonPressed:(_Bool)arg1;	// IMP=0x0000000000008b7b
- (void)_prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000089d5
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;	// IMP=0x0000000000008865
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008680
- (void)endDisablingUserInteraction;	// IMP=0x000000000000867a
- (void)beginDisablingUserInteraction;	// IMP=0x0000000000008674
- (void)_hostDidBeginDeferredTeardown;	// IMP=0x000000000000866e
- (void)_requestSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008288
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;	// IMP=0x00000000000080c7
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;	// IMP=0x0000000000007f06
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;	// IMP=0x0000000000007d77
- (void)_presentationDidChangeToPresentationState:(id)arg1;	// IMP=0x0000000000007be4
- (void)_presentationWillChangeToPresentationState:(id)arg1;	// IMP=0x0000000000007a77
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007908
- (void)_conversationDidChangeWithConversationState:(id)arg1;	// IMP=0x0000000000007722
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000073a7
- (void)_resignActive;	// IMP=0x00000000000071b9
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;	// IMP=0x0000000000006d5a
- (void)contentDidLoad;	// IMP=0x0000000000006d29
- (void)requestResize;	// IMP=0x0000000000006cf8
- (void)_remoteViewDidBecomeReadyForDisplay;	// IMP=0x0000000000006cc7
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006bf4
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006b3f
- (void)dismissAndPresentPhotosApp;	// IMP=0x0000000000006b0e
- (void)dismiss;	// IMP=0x0000000000006add
- (void)requestPresentationStyleExpanded:(_Bool)arg1;	// IMP=0x0000000000006aa7
- (void)requestPresentationStyle:(unsigned long long)arg1;	// IMP=0x0000000000006a71
- (void)dragMediaItemCanceled;	// IMP=0x0000000000006a40
- (void)dragMediaItemMoved:(id)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000069a1
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006900
- (void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000683a
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000676a
- (void)stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000066e9
- (void)stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006668
- (void)stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000065e7
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
@property(readonly, nonatomic) __weak UIViewController *viewController;
- (id)updatedConversationForConversationState:(id)arg1;	// IMP=0x00000000000063d9
@property(nonatomic) unsigned long long presentationStyle;
@property(nonatomic) unsigned long long presentationContext;
@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext;
- (void)_releaseKeepAliveContext;	// IMP=0x0000000000006248
- (void)_keepContextAlive;	// IMP=0x0000000000006222
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000000613f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKTranscriptCollectionViewControllerDelegate-Protocol.h>

@class CKConversation, CKTranscriptCollectionView, NSString;

__attribute__((visibility("hidden")))
@interface CKTranscriptPreviewController <CKTranscriptCollectionViewControllerDelegate>
{
    _Bool _isInitialLayout;	// 8 = 0x8
    CKConversation *_conversation;	// 16 = 0x10
    CKTranscriptCollectionView *_collectionView;	// 24 = 0x18
    double _transcriptWidth;	// 32 = 0x20
    struct UIEdgeInsets _layoutMargins;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009f7a8
@property(nonatomic) _Bool isInitialLayout; // @synthesize isInitialLayout=_isInitialLayout;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) double transcriptWidth; // @synthesize transcriptWidth=_transcriptWidth;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3;	// IMP=0x000000000009f6d6
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3;	// IMP=0x000000000009f6d0
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000009f6c8
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000009f6c2
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000009f6ba
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(id)arg4 allowAllStyles:(_Bool)arg5;	// IMP=0x000000000009f6b4
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x000000000009f6ae
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x000000000009f6a8
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;	// IMP=0x000000000009f6a0
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;	// IMP=0x000000000009f698
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;	// IMP=0x000000000009f690
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;	// IMP=0x000000000009f688
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;	// IMP=0x000000000009f680
- (void)transcriptCollectionViewController:(id)arg1 willDeleteChatItems:(id)arg2;	// IMP=0x000000000009f67a
- (void)transcriptCollectionViewController:(id)arg1 viewedCommSafetyItemWithIndexPath:(id)arg2;	// IMP=0x000000000009f674
- (void)transcriptCollectionViewController:(id)arg1 showMessageSomeoneForItemWithIndexPath:(id)arg2;	// IMP=0x000000000009f66e
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;	// IMP=0x000000000009f660
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;	// IMP=0x000000000009f64e
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;	// IMP=0x000000000009f648
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;	// IMP=0x000000000009f642
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;	// IMP=0x000000000009f53c
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3;	// IMP=0x000000000009f534
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;	// IMP=0x000000000009f52c
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;	// IMP=0x000000000009f526
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;	// IMP=0x000000000009f520
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;	// IMP=0x000000000009f51a
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(id)arg1;	// IMP=0x000000000009f514
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;	// IMP=0x000000000009f50e
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg1;	// IMP=0x000000000009f508
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;	// IMP=0x000000000009f502
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;	// IMP=0x000000000009f4fc
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;	// IMP=0x000000000009f4f6
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;	// IMP=0x000000000009f4f0
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;	// IMP=0x000000000009f4ea
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;	// IMP=0x000000000009f4e4
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;	// IMP=0x000000000009f4de
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;	// IMP=0x000000000009f4d8
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;	// IMP=0x000000000009f4d2
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;	// IMP=0x000000000009f4cc
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009f4c6
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000009f4c0
- (id)textInputContextIdentifier;	// IMP=0x000000000009f44d
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009f0b4
- (void)loadView;	// IMP=0x000000000009ef72
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x000000000009eeb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

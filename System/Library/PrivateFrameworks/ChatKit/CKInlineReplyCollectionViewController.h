//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CKInlineReplyCollectionViewController
{
    _Bool _animatingIn;	// 8 = 0x8
    _Bool _animatingOut;	// 9 = 0x9
    NSDictionary *_currentFrameMapForNextReload;	// 16 = 0x10
    NSDictionary *_targetFrameMapForAnimateOut;	// 24 = 0x18
}

+ (id)chatItemsDidChangeNotification;	// IMP=0x00000000000f9c97
- (void).cxx_destruct;	// IMP=0x00000000000fa8ba
@property(retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut; // @synthesize targetFrameMapForAnimateOut=_targetFrameMapForAnimateOut;
@property(retain, nonatomic) NSDictionary *currentFrameMapForNextReload; // @synthesize currentFrameMapForNextReload=_currentFrameMapForNextReload;
@property(nonatomic, getter=isAnimatingOut) _Bool animatingOut; // @synthesize animatingOut=_animatingOut;
@property(nonatomic, getter=isAnimatingIn) _Bool animatingIn; // @synthesize animatingIn=_animatingIn;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000fa7ee
- (void)setCollectionViewTargetFrames:(id)arg1;	// IMP=0x00000000000fa6cc
- (void)setCollectionViewCurrentFrames:(id)arg1;	// IMP=0x00000000000fa619
- (id)overrideTargetFrameMapForLayout:(id)arg1;	// IMP=0x00000000000fa607
- (id)overrideCurrentFrameMapForLayout:(id)arg1;	// IMP=0x00000000000fa5a5
- (void)setScrollAnchor:(double)arg1;	// IMP=0x00000000000fa4f5
- (void)viewDidAppearDeferredSetup;	// IMP=0x00000000000fa446
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000fa440
- (void)loadRecentMessagesForConversation;	// IMP=0x00000000000fa294
- (void)loadEarlierMessagesForConversation;	// IMP=0x00000000000fa0e7
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x00000000000f9d25
- (id)imChatItems;	// IMP=0x00000000000f9cab
- (_Bool)_canUseOpaqueMask;	// IMP=0x00000000000f9c8f
- (id)transcriptBackgroundColor;	// IMP=0x00000000000f9c87
- (_Bool)isInline;	// IMP=0x00000000000f9c7f
- (_Bool)isModal;	// IMP=0x00000000000f9be6
- (id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(struct UIEdgeInsets)arg5;	// IMP=0x00000000000f9a10

@end


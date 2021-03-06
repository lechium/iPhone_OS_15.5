//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPeerPaymentBubbleView, PKPeerPaymentMessage;

@interface PKPeerPaymentMessagesContentRenderBubbleViewController
{
    PKPeerPaymentBubbleView *_bubbleView;	// 24 = 0x18
    PKPeerPaymentMessage *_currentMessage;	// 32 = 0x20
    _Bool _remoteFetchInProgress;	// 40 = 0x28
    struct CGSize _pendingBubbleViewSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000023ffe6
- (void)_bubbleViewLongPressed;	// IMP=0x000000000023ff53
- (void)_bubbleViewDoubleTapped;	// IMP=0x000000000023fec0
- (void)_bubbleViewPanned;	// IMP=0x000000000023fe2d
- (void)_bubbleViewSelected;	// IMP=0x000000000023fc63
- (void)_resizeBubbleViewToSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f8d4
- (void)_resizeBubbleViewToReferenceSizeAnimated;	// IMP=0x000000000023f899
- (void)_fetchStatus;	// IMP=0x000000000023ed31
- (id)generatedSnapshot;	// IMP=0x000000000023ed14
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000023ec78
- (id)bubbleView;	// IMP=0x000000000023ec63
- (_Bool)_isMessage:(id)arg1 validForTransaction:(id)arg2;	// IMP=0x000000000023ea50
- (_Bool)_isMessageFromMe:(id)arg1;	// IMP=0x000000000023e966
- (void)reloadContent;	// IMP=0x000000000023e718
- (void)loadView;	// IMP=0x000000000023e12a

@end


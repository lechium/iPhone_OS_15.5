//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKLayerDelegate-Protocol.h>

@class CALayer, CKTypingView;
@protocol IMTypingIndicatorLayerProtocol;

@interface CKTranscriptTypingIndicatorCell <CKLayerDelegate>
{
    CKTypingView *_typingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000048e512
@property(retain, nonatomic) CKTypingView *typingView; // @synthesize typingView=_typingView;
- (void)startShrinkAnimation;	// IMP=0x000000000048e492
- (void)stopPulseAnimation;	// IMP=0x000000000048e428
- (void)startPulseAnimation;	// IMP=0x000000000048e3be
- (void)startGrowAnimation;	// IMP=0x000000000048e354
@property(retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;
- (void)setTraitCollection:(id)arg1;	// IMP=0x000000000048e28c
- (void)ckLayerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000048e1eb
- (void)performRemoval:(CDUnknownBlockType)arg1;	// IMP=0x000000000048e1a8
- (void)performInsertion:(CDUnknownBlockType)arg1;	// IMP=0x000000000048e0f2
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x000000000048df71
- (void)setOrientation:(BOOL)arg1;	// IMP=0x000000000048de4c
- (void)prepareForReuse;	// IMP=0x000000000048ddbc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000048dc1c
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000031c388

@end


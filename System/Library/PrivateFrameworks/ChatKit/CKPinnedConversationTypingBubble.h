//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKPinnedConversationActivityItemView-Protocol.h>

@class CALayer, CAReplicatorLayer, CAShapeLayer, CKPinnedConversationActivityItemViewBackdropLayer, CKPinnedConversationActivityItemViewShadowLayer, CKPinnedConversationTypingBubbleActivityItem;
@protocol CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;

@interface CKPinnedConversationTypingBubble : UIView <CKPinnedConversationActivityItemView>
{
    id <CKPinnedConversationActivityItemViewDelegate> _activityItemViewDelegate;	// 8 = 0x8
    long long _activityItemViewContentScale;	// 16 = 0x10
    long long _originationHorizontalDirection;	// 24 = 0x18
    CKPinnedConversationTypingBubbleActivityItem *_typingBubbleActivityItem;	// 32 = 0x20
    long long _originationDirection;	// 40 = 0x28
    double _preferredTailAttachmentPointXCoordinate;	// 48 = 0x30
    CKPinnedConversationActivityItemViewBackdropLayer *_backdropLayer;	// 56 = 0x38
    CAShapeLayer *_backdropMaskShapeLayer;	// 64 = 0x40
    CKPinnedConversationActivityItemViewShadowLayer *_broadShadowLayer;	// 72 = 0x48
    CKPinnedConversationActivityItemViewShadowLayer *_tightShadowLayer;	// 80 = 0x50
    CALayer *_thinkingDotContainer;	// 88 = 0x58
    CAShapeLayer *_thinkingDot;	// 96 = 0x60
    CAReplicatorLayer *_thinkingDots;	// 104 = 0x68
    struct CGSize _parentAvatarViewSize;	// 112 = 0x70
    struct CGPoint _originationPoint;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000614df
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CAShapeLayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(retain, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property(retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer; // @synthesize tightShadowLayer=_tightShadowLayer;
@property(retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer; // @synthesize broadShadowLayer=_broadShadowLayer;
@property(retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // @synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer;
@property(retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(nonatomic) double preferredTailAttachmentPointXCoordinate; // @synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate;
@property(nonatomic) struct CGPoint originationPoint; // @synthesize originationPoint=_originationPoint;
@property(nonatomic) long long originationDirection; // @synthesize originationDirection=_originationDirection;
@property(readonly, nonatomic) CKPinnedConversationTypingBubbleActivityItem *typingBubbleActivityItem; // @synthesize typingBubbleActivityItem=_typingBubbleActivityItem;
@property(nonatomic) long long originationHorizontalDirection; // @synthesize originationHorizontalDirection=_originationHorizontalDirection;
@property(nonatomic) struct CGSize parentAvatarViewSize; // @synthesize parentAvatarViewSize=_parentAvatarViewSize;
@property(nonatomic) long long activityItemViewContentScale; // @synthesize activityItemViewContentScale=_activityItemViewContentScale;
@property(nonatomic) __weak id <CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate; // @synthesize activityItemViewDelegate=_activityItemViewDelegate;
- (void)_updateUserInterfaceStyles;	// IMP=0x0000000000061247
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000611f1
@property(retain, nonatomic) id <CKPinnedConversationActivityItem> activityItem;
- (void)calculateBezierPathWithOutputsForPath:(id *)arg1 largeBubbleFrame:(struct CGRect *)arg2 mediumBubbleFrame:(struct CGRect *)arg3 smallBubbleFrame:(struct CGRect *)arg4;	// IMP=0x0000000000060cfa
@property(readonly, nonatomic) _Bool supportsAlignmentWithOriginationSubAvatarFrame;
@property(readonly, nonatomic) _Bool supportsActivityItemViewContentScale;
@property(readonly, nonatomic) struct CGPoint tailAttachmentPoint;
- (unsigned long long)tailCornerAnchor;	// IMP=0x0000000000060b34
- (struct CGSize)thinkingDotContainerSize;	// IMP=0x0000000000060ace
- (double)thinkingDotSpace;	// IMP=0x0000000000060ac0
- (double)thinkingDotOpacity;	// IMP=0x0000000000060ab2
- (void)_updateThinkingDotColor;	// IMP=0x0000000000060a49
- (id)thinkingDotColor;	// IMP=0x0000000000060a30
- (double)thinkingDotDiameter;	// IMP=0x0000000000060a22
- (struct CGPoint)smallBubbleOffset;	// IMP=0x0000000000060a11
- (struct CGPoint)mediumBubbleOffset;	// IMP=0x0000000000060a00
- (struct CGSize)smallBubbleSize;	// IMP=0x00000000000609ef
- (struct CGSize)mediumBubbleSize;	// IMP=0x00000000000609de
- (double)largeBubbleCornerRadius;	// IMP=0x00000000000609d0
- (struct CGSize)largeBubbleSize;	// IMP=0x00000000000609ba
- (double)activityItemToContactItemVerticalOverlap;	// IMP=0x00000000000609ac
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000608dc
- (void)layoutSubviews;	// IMP=0x0000000000060639
- (id)initWithActivityItem:(id)arg1;	// IMP=0x000000000005fff0

@end


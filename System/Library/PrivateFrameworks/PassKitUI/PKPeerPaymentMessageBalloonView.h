//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKTranscriptPluginBalloonView, PKPeerPaymentBubbleView;

@interface PKPeerPaymentMessageBalloonView : UIView
{
    PKPeerPaymentBubbleView *_bubbleView;	// 8 = 0x8
    long long _peerPaymentType;	// 16 = 0x10
    CKTranscriptPluginBalloonView *_balloonView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028c3ef
@property(retain, nonatomic) CKTranscriptPluginBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(readonly, nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property(readonly, nonatomic) PKPeerPaymentBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)_updateTailOrientation;	// IMP=0x000000000028c1d6
- (void)layoutSubviews;	// IMP=0x000000000028c155
- (id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2;	// IMP=0x000000000028bffe

@end


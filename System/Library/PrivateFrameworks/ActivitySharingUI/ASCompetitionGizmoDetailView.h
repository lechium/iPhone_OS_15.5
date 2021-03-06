//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASCompetitionGraphView, ASCompetitionMessageBubbleView, ASCompetitionScoreView, ASCompetitionTimeRemainingLabel, NSNumber;

@interface ASCompetitionGizmoDetailView : UIView
{
    ASCompetitionScoreView *_totalScoreView;	// 8 = 0x8
    ASCompetitionScoreView *_totalWinsScoreView;	// 16 = 0x10
    ASCompetitionGraphView *_graphView;	// 24 = 0x18
    ASCompetitionTimeRemainingLabel *_timeRemainingLabel;	// 32 = 0x20
    ASCompetitionMessageBubbleView *_messageBubbleView;	// 40 = 0x28
    UIView *_timeRemainingSeparator;	// 48 = 0x30
    UIView *_totalWinsSeparator;	// 56 = 0x38
    NSNumber *_previousLayoutWidth;	// 64 = 0x40
    long long _modules;	// 72 = 0x48
    long long _type;	// 80 = 0x50
    _Bool _isInteractionEnabled;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000015fee
@property(nonatomic) _Bool isInteractionEnabled; // @synthesize isInteractionEnabled=_isInteractionEnabled;
- (_Bool)supportsSmackTalkReply;	// IMP=0x0000000000015fb9
- (void)setFriend:(id)arg1 competition:(id)arg2;	// IMP=0x0000000000015e9b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000015cea
- (void)layoutForWidth:(double)arg1;	// IMP=0x0000000000014f89
- (void)layoutSubviews;	// IMP=0x0000000000014f28
- (id)initWithDetailViewType:(long long)arg1;	// IMP=0x0000000000014a4f

@end


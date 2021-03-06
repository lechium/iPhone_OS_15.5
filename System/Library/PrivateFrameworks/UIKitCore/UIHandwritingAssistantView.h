//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIHandwritingAssistantView
{
    TUISystemInputAssistantView *_systemInputAssistantView;	// 80 = 0x50
    UIKBHandwritingCandidateView *_candidateView;	// 88 = 0x58
    UIKeyboardCandidatePocketShadow *_rightBorder;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000001342b9a
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) UIKBHandwritingCandidateView *candidateView; // @synthesize candidateView=_candidateView;
@property(retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // @synthesize systemInputAssistantView=_systemInputAssistantView;
- (void)dimKeys:(id)arg1;	// IMP=0x000000000134292d
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000134282f
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000013425f9
- (void)displayLayer:(id)arg1;	// IMP=0x00000000013425f3
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000013424a6
- (struct CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x000000000134232b
- (id)candidateList;	// IMP=0x00000000013422db
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000001341b73

@end


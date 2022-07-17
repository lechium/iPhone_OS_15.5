//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView
{
    UIDictationView *_dictationView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000948027
@property(retain, nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
- (void)removeFromSuperview;	// IMP=0x0000000000947ef5
- (void)prepareForDisplay;	// IMP=0x0000000000947d58
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x0000000000947d14
- (void)updateDictationColor;	// IMP=0x0000000000947c59
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000947c18
- (void)dealloc;	// IMP=0x0000000000947b4b
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000947ae9

@end

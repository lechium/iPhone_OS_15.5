//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextInputStringTokenizer.h>

@class TSDTextInputResponder;
@protocol TSDTextInput;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer
{
    TSDTextInputResponder *_textInputResponder;	// 8 = 0x8
}

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000196d3c
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000196c70
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000196ad3
- (id)p_moveToEndOfWordFromPosition:(id)arg1;	// IMP=0x0000000000196a64
- (id)p_moveToStartOfWordFromPosition:(id)arg1;	// IMP=0x00000000001968a5
- (id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00000000001965f0
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00000000001964d4
@property(readonly, nonatomic) id <TSDTextInput> editor;
- (id)initWithTextInput:(id)arg1;	// IMP=0x0000000000196452

@end


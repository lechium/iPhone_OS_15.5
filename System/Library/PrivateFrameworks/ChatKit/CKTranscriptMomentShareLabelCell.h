//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKTranscriptMomentShareLabelCell
{
    UILabel *_label;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedText:(id)arg2 displayScale:(double)arg3;	// IMP=0x00000000001447ea
+ (id)reuseIdentifier;	// IMP=0x00000000001447dd
- (void).cxx_destruct;	// IMP=0x000000000014490f
- (id)label;	// IMP=0x00000000001448fa
- (id)cellView;	// IMP=0x00000000001448e5
- (id)attributedText;	// IMP=0x00000000001448c8
- (void)setAttributedText:(id)arg1;	// IMP=0x00000000001448ab
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000144724
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000031caa7

@end

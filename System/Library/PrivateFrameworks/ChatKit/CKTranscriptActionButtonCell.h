//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;
@protocol CKTranscriptActionButtonCellDelegate;

__attribute__((visibility("hidden")))
@interface CKTranscriptActionButtonCell
{
    UIButton *_actionButton;	// 8 = 0x8
    id <CKTranscriptActionButtonCellDelegate> _delegate;	// 16 = 0x10
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedText:(id)arg2 displayScale:(double)arg3;	// IMP=0x00000000004521ce
+ (id)reuseIdentifier;	// IMP=0x00000000004521c1
- (void).cxx_destruct;	// IMP=0x000000000045237a
@property(nonatomic) __weak id <CKTranscriptActionButtonCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonPrimaryActionTriggered:(id)arg1;	// IMP=0x0000000000452301
- (id)label;	// IMP=0x00000000004522e4
- (id)cellView;	// IMP=0x00000000004522cf
- (id)attributedText;	// IMP=0x00000000004522b0
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000452291
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000451fc5
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000031ca07

@end

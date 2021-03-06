//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface OBPrivacyLinkButton : UIButton
{
    _Bool _largeIcon;	// 8 = 0x8
    _Bool _underlineLinks;	// 9 = 0x9
    UIImageView *_iconView;	// 16 = 0x10
    UITextView *_textView;	// 24 = 0x18
    UILabel *_buttonLabel;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    NSString *_captionText;	// 48 = 0x30
    NSString *_buttonText;	// 56 = 0x38
    struct CGSize _contentSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003746e
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool underlineLinks; // @synthesize underlineLinks=_underlineLinks;
@property _Bool largeIcon; // @synthesize largeIcon=_largeIcon;
@property(readonly) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(readonly) UITextView *textView; // @synthesize textView=_textView;
@property(readonly) UIImageView *iconView; // @synthesize iconView=_iconView;
- (_Bool)_isButtonAboveCaptionText;	// IMP=0x00000000000372b3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000371f2
- (id)labelText;	// IMP=0x0000000000036fbd
- (id)_font;	// IMP=0x0000000000036ea6
- (struct _NSRange)_rangeForButtonText;	// IMP=0x0000000000036e15
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000036e00
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000036d15
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000036c86
- (id)titleForState:(unsigned long long)arg1;	// IMP=0x0000000000036c69
- (void)_updateButtonColorWithColor:(id)arg1;	// IMP=0x0000000000036afe
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000369e2
- (void)tintColorDidChange;	// IMP=0x000000000003690b
- (void)layoutSubviews;	// IMP=0x0000000000036470
- (id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(struct CGSize)arg4 useLargeIcon:(_Bool)arg5;	// IMP=0x0000000000034185

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKTextInlineNotificationView
{
    UIView *_contentView;	// 8 = 0x8
    UIButton *_textButton;	// 16 = 0x10
    UIView *_greyOutView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f87df
@property(retain, nonatomic) UIView *greyOutView; // @synthesize greyOutView=_greyOutView;
@property(retain, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001f86f9
- (id)contentView;	// IMP=0x00000000001f86e4
- (void)_handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000001f864e
- (void)_handleTouchUpOutside:(id)arg1;	// IMP=0x00000000001f863a
- (void)_handleTouchUpInside:(id)arg1;	// IMP=0x00000000001f859a
- (void)_handleTouchDown:(id)arg1;	// IMP=0x00000000001f8583
@property(nonatomic) _Bool greyedOut; // @dynamic greyedOut;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;	// IMP=0x00000000001f813a
- (void)dealloc;	// IMP=0x00000000001f80c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f7d2c

@end


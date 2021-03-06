//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputView;

__attribute__((visibility("hidden")))
@interface _UIInputViewContent
{
    double _contentHeight;	// 120 = 0x78
    double _contentWidth;	// 128 = 0x80
    UIInputView *_inputView;	// 136 = 0x88
    unsigned long long _unclippableCorners;	// 144 = 0x90
}

@property(nonatomic) unsigned long long _unclippableCorners; // @synthesize _unclippableCorners;
- (void)_updateCornerClipping;	// IMP=0x00000000009060d1
- (struct CGSize)_contentSize;	// IMP=0x00000000009060b3
- (void)addSubview:(id)arg1;	// IMP=0x0000000000906010
- (struct CGSize)_sizeFittingContentViews;	// IMP=0x0000000000905e41
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;	// IMP=0x0000000000905cd5
- (void)_setToolbarBackgroundImage:(id)arg1;	// IMP=0x0000000000905be8
- (_Bool)_isToolbar;	// IMP=0x0000000000905b73
- (id)initWithFrame:(struct CGRect)arg1 inputView:(id)arg2;	// IMP=0x0000000000905b1a

@end


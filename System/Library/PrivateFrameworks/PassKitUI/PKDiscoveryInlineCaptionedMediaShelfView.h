//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKDiscoveryInlineMediaCaptionView, PKDiscoveryInlineMediaShelf, PKDiscoveryMedia, UIView;

@interface PKDiscoveryInlineCaptionedMediaShelfView
{
    PKDiscoveryInlineMediaShelf *_shelf;	// 8 = 0x8
    UIView *_mediaContainerView;	// 16 = 0x10
    PKDiscoveryInlineMediaCaptionView *_captionView;	// 24 = 0x18
    _Bool _isInline;	// 32 = 0x20
    double _leadingSpace;	// 40 = 0x28
    UIView *_mediaView;	// 48 = 0x30
    PKDiscoveryMedia *_media;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001be8d0
- (void)layoutSubviews;	// IMP=0x00000000001be64f
- (void)setContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001be5d9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001be41a
- (id)initWithShelf:(id)arg1 mediaView:(id)arg2;	// IMP=0x00000000001be0eb

@end


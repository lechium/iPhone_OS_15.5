//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView
{
    _Bool _photosCarouselMode;	// 8 = 0x8
    _Bool _customButtonMode;	// 9 = 0x9
    LPLinkView *_linkView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013a1b
@property(nonatomic) _Bool customButtonMode; // @synthesize customButtonMode=_customButtonMode;
@property(nonatomic) _Bool photosCarouselMode; // @synthesize photosCarouselMode=_photosCarouselMode;
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
- (void)layoutSubviews;	// IMP=0x0000000000013741
- (long long)preferredContentSizeForSize:(long long)arg1;	// IMP=0x0000000000013719
- (void)contentDidChange;	// IMP=0x00000000000136d8
- (void)_updateContent;	// IMP=0x0000000000013653

@end


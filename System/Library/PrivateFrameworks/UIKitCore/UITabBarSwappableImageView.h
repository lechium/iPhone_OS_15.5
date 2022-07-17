//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView
{
    UIImage *_value;	// 120 = 0x78
    UIImage *_alternate;	// 128 = 0x80
    UIImage *_landscapeValue;	// 136 = 0x88
    UIImage *_landscapeAlternate;	// 144 = 0x90
    _Bool _showAlternate;	// 152 = 0x98
    _Bool _showLandscape;	// 153 = 0x99
}

- (void).cxx_destruct;	// IMP=0x000000000021b5c8
- (void)setLandscape:(_Bool)arg1;	// IMP=0x000000000021b5a7
- (void)setImage:(id)arg1;	// IMP=0x000000000021b546
- (void)setAlternateImage:(id)arg1;	// IMP=0x000000000021b4e5
- (void)showAlternateImage:(_Bool)arg1;	// IMP=0x000000000021b4c4
- (void)setCurrentImage;	// IMP=0x000000000021b40b
- (void)didMoveToWindow;	// IMP=0x000000000021b3f9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000021b34c
- (id)_selectedCompactImage;	// IMP=0x000000000021b337
- (id)_selectedImage;	// IMP=0x000000000021b322
- (id)_unselectedCompactImage;	// IMP=0x000000000021b30d
- (id)_unselectedImage;	// IMP=0x000000000021b2f8
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4;	// IMP=0x000000000021b190

@end

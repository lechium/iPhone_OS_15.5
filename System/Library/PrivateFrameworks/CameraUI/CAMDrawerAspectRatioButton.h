//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton
{
    long long _aspectRatio;	// 144 = 0x90
    NSMutableDictionary *__imagesByText;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000015dd57
@property(readonly, nonatomic) NSMutableDictionary *_imagesByText; // @synthesize _imagesByText=__imagesByText;
@property(nonatomic) long long aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;	// IMP=0x000000000015dc70
- (void)updateImage;	// IMP=0x000000000015dbdb
- (id)_imageForAspectRatio:(long long)arg1;	// IMP=0x000000000015da9e
- (id)_titleForAspectRatio:(long long)arg1;	// IMP=0x000000000015da47
- (id)imageNameForCurrentState;	// IMP=0x000000000015da3f
- (void)didSelectMenuItem:(id)arg1;	// IMP=0x000000000015d978
- (id)loadMenuItems;	// IMP=0x000000000015d7fc
- (_Bool)isMenuItemSelected:(id)arg1;	// IMP=0x000000000015d796
- (long long)controlType;	// IMP=0x000000000015d747
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x000000000015d6da

@end

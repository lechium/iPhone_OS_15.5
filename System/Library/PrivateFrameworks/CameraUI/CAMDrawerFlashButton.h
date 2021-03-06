//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMDrawerFlashButton
{
    _Bool _flashUnavailable;	// 144 = 0x90
    long long _flashMode;	// 152 = 0x98
}

@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic, getter=isFlashUnavailable) _Bool flashUnavailable; // @synthesize flashUnavailable=_flashUnavailable;
- (_Bool)shouldShowSlashForCurrentState;	// IMP=0x000000000015d20f
- (_Bool)shouldUseSlash;	// IMP=0x000000000015d207
- (_Bool)isExpandable;	// IMP=0x000000000015d1f2
- (_Bool)shouldUseActiveTintForCurrentState;	// IMP=0x000000000015d1a8
- (id)imageNameForAXHUD;	// IMP=0x000000000015d15f
- (id)imageNameForCurrentState;	// IMP=0x000000000015d134
- (void)didSelectMenuItem:(id)arg1;	// IMP=0x000000000015d073
- (id)loadMenuItems;	// IMP=0x000000000015ce8d
- (_Bool)isMenuItemSelected:(id)arg1;	// IMP=0x000000000015ce04
- (void)setFlashMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000015cdbd
- (long long)controlType;	// IMP=0x000000000015cda1

@end


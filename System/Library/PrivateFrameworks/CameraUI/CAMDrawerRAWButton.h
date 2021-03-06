//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMDrawerRAWButton
{
    long long _rawMode;	// 144 = 0x90
}

@property(nonatomic, setter=setRAWMode:) long long rawMode; // @synthesize rawMode=_rawMode;
- (id)imageNameForAXHUD;	// IMP=0x000000000015ee43
- (_Bool)shouldShowSlashForCurrentState;	// IMP=0x000000000015ee2a
- (_Bool)shouldUseSlash;	// IMP=0x000000000015ee22
- (id)imageNameForCurrentState;	// IMP=0x000000000015ee15
- (void)didSelectMenuItem:(id)arg1;	// IMP=0x000000000015ed49
- (id)loadMenuItems;	// IMP=0x000000000015ebe0
- (_Bool)isMenuItemSelected:(id)arg1;	// IMP=0x000000000015eb7a
- (void)setRAWMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000015eb33
- (long long)controlType;	// IMP=0x000000000015eb14

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OBPrivacyModalNavigationController
{
    _Bool _darkMode;	// 8 = 0x8
    CDUnknownBlockType _dismissButtonPressedHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001201c
@property(copy) CDUnknownBlockType dismissButtonPressedHandler; // @synthesize dismissButtonPressedHandler=_dismissButtonPressedHandler;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000011fdd
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000011f11
- (long long)preferredUserInterfaceStyle;	// IMP=0x0000000000011ed0
- (void)_doneButtonPressed;	// IMP=0x0000000000011e31
- (void)addDismissButtonWithPressedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011c9d

@end

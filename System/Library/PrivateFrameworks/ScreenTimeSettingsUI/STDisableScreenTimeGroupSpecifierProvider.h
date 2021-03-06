//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STDisableScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_disableScreenTimeSpecifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000050df1
@property(retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier; // @synthesize disableScreenTimeSpecifier=_disableScreenTimeSpecifier;
- (void)disableScreenTime:(id)arg1;	// IMP=0x0000000000050d1a
- (id)disableScreenTimeConfirmationPrompt;	// IMP=0x0000000000050ad8
- (void)updateDisableScreenTimeSpecifier;	// IMP=0x000000000005097c
- (void)confirmDisableScreenTime:(id)arg1;	// IMP=0x0000000000050734
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000505e8
- (void)setCoordinator:(id)arg1;	// IMP=0x00000000000504da
- (id)init;	// IMP=0x0000000000050390
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000050252

@end


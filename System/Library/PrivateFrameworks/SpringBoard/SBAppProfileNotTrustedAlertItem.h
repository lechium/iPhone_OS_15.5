//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem
{
    SBApplication *_app;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002d9cfe
- (_Bool)dismissOnLock;	// IMP=0x00000000002d9cf6
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000000002d9cee
- (_Bool)forcesModalAlertAppearance;	// IMP=0x00000000002d9ce6
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000002d9a34
- (id)initWithApp:(id)arg1;	// IMP=0x00000000002d99d7

@end

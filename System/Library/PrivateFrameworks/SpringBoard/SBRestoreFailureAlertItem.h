//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBRestoreFailureAlertItem : SBAlertItem
{
}

- (_Bool)suppressForKeynote;	// IMP=0x0000000000232ebd
- (_Bool)allowInSetup;	// IMP=0x0000000000232eb5
- (_Bool)forcesModalAlertAppearance;	// IMP=0x0000000000232ead
- (_Bool)shouldShowInLockScreen;	// IMP=0x0000000000232ea5
- (_Bool)allowMenuButtonDismissal;	// IMP=0x0000000000232e9d
- (void)performUnlockAction;	// IMP=0x0000000000232e6f
- (void)restartSystemEvent;	// IMP=0x0000000000232e4c
- (void)_rebootNow;	// IMP=0x0000000000232dfe
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x0000000000232beb

@end


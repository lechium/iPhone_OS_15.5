//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBVPPAppRequiresHealingAlertItem : SBAlertItem
{
    SBApplication *_application;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000442430
- (_Bool)dismissOnLock;	// IMP=0x0000000000442428
- (_Bool)shouldShowInLockScreen;	// IMP=0x0000000000442420
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x000000000044218b
- (id)initWithApplication:(id)arg1;	// IMP=0x000000000044212e

@end


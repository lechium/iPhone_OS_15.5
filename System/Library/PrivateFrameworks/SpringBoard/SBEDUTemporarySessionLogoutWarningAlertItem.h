//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem
{
    CDUnknownBlockType _logoutActionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006cd797
@property(copy, nonatomic) CDUnknownBlockType logoutActionHandler; // @synthesize logoutActionHandler=_logoutActionHandler;
- (_Bool)forcesModalAlertAppearance;	// IMP=0x00000000006cd76d
- (_Bool)shouldShowInLockScreen;	// IMP=0x00000000006cd765
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000006cd3d3

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUSetupCodeField;

@protocol HUSetupCodeFieldDelegate <NSObject>
- (void)setupCodeFieldDidBecomeIncomplete:(HUSetupCodeField *)arg1;
- (void)setupCodeFieldDidBecomeComplete:(HUSetupCodeField *)arg1;

@optional
- (void)setupCodeFieldDidReturn:(HUSetupCodeField *)arg1;
@end


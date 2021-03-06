//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SchoolTime/NSObject-Protocol.h>

@class SCLScheduleSettings, SCLSchoolModeXPCClient, SCLState;

@protocol SCLSchoolModeXPCClientDelegate <NSObject>
- (void)clientDidChangeUnlockHistory:(SCLSchoolModeXPCClient *)arg1;
- (void)client:(SCLSchoolModeXPCClient *)arg1 didLoadScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)client:(SCLSchoolModeXPCClient *)arg1 didUpdateScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)client:(SCLSchoolModeXPCClient *)arg1 didUpdateToState:(SCLState *)arg2 fromState:(SCLState *)arg3;
@end


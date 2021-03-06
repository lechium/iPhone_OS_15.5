//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTDisableAlarmIntent;

@protocol MTDisableAlarmIntentHandling <NSObject>
- (void)handleDisableAlarm:(MTDisableAlarmIntent *)arg1 completion:(void (^)(MTDisableAlarmIntentResponse *))arg2;

@optional
- (void)confirmDisableAlarm:(MTDisableAlarmIntent *)arg1 completion:(void (^)(MTDisableAlarmIntentResponse *))arg2;
@end


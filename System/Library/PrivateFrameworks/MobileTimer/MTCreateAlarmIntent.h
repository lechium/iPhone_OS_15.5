//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class INObject, NSArray, NSDateComponents, NSString;

@interface MTCreateAlarmIntent : INIntent
{
}


// Remaining properties
@property(copy, nonatomic) NSDateComponents *dateComponents; // @dynamic dateComponents;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSArray *repeatSchedule; // @dynamic repeatSchedule;
@property(nonatomic) long long requiresAppLaunch; // @dynamic requiresAppLaunch;
@property(copy, nonatomic) INObject *time; // @dynamic time;
@end

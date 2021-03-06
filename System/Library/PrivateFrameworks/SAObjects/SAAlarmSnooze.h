//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class NSArray, NSString;

@interface SAAlarmSnooze <SAAlarmAlarmAction>
{
}

+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000e2ea
+ (id)snooze;	// IMP=0x000000000000e2d8
- (_Bool)mutatingCommand;	// IMP=0x000000000000e31e
- (_Bool)requiresResponse;	// IMP=0x000000000000e316
@property(copy, nonatomic) NSArray *alarmIds;
- (id)encodedClassName;	// IMP=0x000000000000e2cb
- (id)groupIdentifier;	// IMP=0x000000000000e2b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


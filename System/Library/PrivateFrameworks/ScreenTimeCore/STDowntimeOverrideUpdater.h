//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STDowntimeOverrideModifier;

@interface STDowntimeOverrideUpdater : NSObject
{
    id <STDowntimeOverrideModifier> _downtimeOverrideModifier;	// 8 = 0x8
}

+ (_Bool)updateActiveOverrideUsingModifier:(id)arg1 byRecomputingFromSchedule:(id)arg2 atDate:(id)arg3 inCalendar:(id)arg4 error:(id *)arg5;	// IMP=0x000000000003cfed
+ (_Bool)updateActiveOverrideOnBlueprintNow:(id)arg1 usingModifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003cf12
- (void).cxx_destruct;	// IMP=0x000000000003d2e1
@property(readonly) id <STDowntimeOverrideModifier> downtimeOverrideModifier; // @synthesize downtimeOverrideModifier=_downtimeOverrideModifier;

@end


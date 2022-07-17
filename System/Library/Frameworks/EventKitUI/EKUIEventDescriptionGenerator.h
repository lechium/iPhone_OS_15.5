//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject
{
    struct __CFDateFormatter *_dateFormatter;	// 8 = 0x8
    NSNumberFormatter *_numberFormatter;	// 16 = 0x10
}

+ (id)eventDescriptionForDrag:(id)arg1;	// IMP=0x000000000018b2f6
- (void).cxx_destruct;	// IMP=0x000000000018b382
- (_Bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;	// IMP=0x000000000018b1d8
- (id)_adjustedMinutesTillEventStarts:(id)arg1;	// IMP=0x000000000018b0d0
- (id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(_Bool)arg2 useExplicitTimes:(_Bool)arg3 followingComma:(_Bool)arg4;	// IMP=0x000000000018a9bf
- (id)_attendeesForEvent:(id)arg1 sorted:(_Bool)arg2 limitedTo:(long long)arg3;	// IMP=0x000000000018a4fb
- (id)naturalLanguageDescriptionForAttendees:(id)arg1;	// IMP=0x000000000018a0e3
- (void)dealloc;	// IMP=0x000000000018a0a4
- (id)_sharedNumberFormatter;	// IMP=0x0000000000189fe4
- (struct __CFDateFormatter *)_sharedDateFormatter;	// IMP=0x0000000000189f65

@end

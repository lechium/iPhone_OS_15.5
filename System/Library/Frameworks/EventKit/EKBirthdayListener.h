//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/CalContactsProviderDelegate-Protocol.h>

@class CalLimitingQueue;
@protocol OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate>
{
    CalLimitingQueue *_updateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_updateJobQueue;	// 16 = 0x10
    _Bool _needsReset;	// 24 = 0x18
    _Bool _shutdown;	// 25 = 0x19
}

+ (_Bool)areBirthdaysEnabled;	// IMP=0x00000000000635c7
+ (id)eventStoreProvider;	// IMP=0x00000000000634da
+ (id)sharedListener;	// IMP=0x0000000000062980
- (void).cxx_destruct;	// IMP=0x0000000000065845
- (void)reset;	// IMP=0x00000000000657f0
- (void)contactsReset;	// IMP=0x00000000000657de
- (void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3;	// IMP=0x0000000000064dde
- (void)resetAllBirthdaysInStore:(id)arg1;	// IMP=0x000000000006491d
- (void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3;	// IMP=0x00000000000647e3
- (void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4;	// IMP=0x00000000000642ab
- (id)allContactsWithBirthdays;	// IMP=0x00000000000640aa
- (id)birthdayCalendarsCreateIfNeeded:(_Bool)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(_Bool)arg5;	// IMP=0x0000000000063e0f
- (void)disableBirthdayCalendarsInStore:(id)arg1;	// IMP=0x0000000000063b6f
- (void)disableBirthdayCalendars;	// IMP=0x0000000000063ae0
- (id)birthdayCalendarsInStore:(id)arg1;	// IMP=0x000000000006390e
- (void)_localeChanged;	// IMP=0x0000000000063689
- (void)addBirthdayCalendars;	// IMP=0x000000000006361c
- (id)eventStore;	// IMP=0x000000000006356f
- (void)checkForFailures;	// IMP=0x000000000006328a
- (void)stop;	// IMP=0x00000000000631b1
- (void)start;	// IMP=0x0000000000062d32
- (id)initSingleton;	// IMP=0x00000000000629e5

@end

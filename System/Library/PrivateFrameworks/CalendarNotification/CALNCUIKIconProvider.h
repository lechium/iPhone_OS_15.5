//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNCalendarIconIdentifierProvider-Protocol.h>
#import <CalendarNotification/CALNNotificationIconProvider-Protocol.h>
#import <CalendarNotification/CalIconProvider-Protocol.h>

@class NSString;

@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider>
{
}

+ (_Bool)_parseIconIdentifier:(id)arg1 intoDateComponents:(id *)arg2 calendar:(id *)arg3 type:(long long *)arg4;	// IMP=0x0000000000028534
+ (id)sharedInstance;	// IMP=0x00000000000282aa
+ (id)_identifierEncodingAllowedCharacters;	// IMP=0x00000000000281e2
- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0000000000028844
- (id)pngDataForIconWithIdentifier:(id)arg1;	// IMP=0x000000000002832f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

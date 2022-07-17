//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADUnavailableAlarmStore : NSObject
{
}

- (void)dismissAlarmsWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000012e819
- (void)fetchAlarmsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e7ab
- (void)fetchAlarmsMeetingCriteria:(id)arg1 searchOptions:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012e73d
- (void)fetchAlarmsMatchingAnyOfQueries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e6cf
- (void)updateAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e667
- (void)deleteAlarmsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e601
- (void)addAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012e599
- (id)_createUnavailableError;	// IMP=0x001000000012e57b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDTestEventStream : NSObject
{
}

- (id)_testEvent;	// IMP=0x002000000007fa3c
- (id)eventStatusRollupSinceStartDate:(id)arg1;	// IMP=0x001000000007fa2a
- (void)startNotificationStreamWithEventsHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007f96a
- (void)updateEvent:(id)arg1;	// IMP=0x001000000007f964
@property(readonly, copy, nonatomic) NSString *eventType;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDNanoSyncStore, NSCalendar, NSDate, NSMutableArray, NSUUID, _HKExpiringCompletionTimer;

@interface HDNanoSyncRestoreSession : NSObject
{
    _Bool _finished;	// 8 = 0x8
    NSUUID *_sessionUUID;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSCalendar *_calendar;	// 32 = 0x20
    HDNanoSyncStore *_nanoSyncStore;	// 40 = 0x28
    long long _sequenceNumber;	// 48 = 0x30
    NSMutableArray *_completionHandlers;	// 56 = 0x38
    _HKExpiringCompletionTimer *_timer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000068717a
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) HDNanoSyncStore *nanoSyncStore; // @synthesize nanoSyncStore=_nanoSyncStore;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)scheduleTimeoutWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000686d18
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000686c73
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000686c5d
- (void)dealloc;	// IMP=0x0000000000686c1b
- (id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000000686ab3

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SGStorageContact, SGStorageEvent, SGStorageReminder;

@interface SGJournalEntry : NSObject
{
    unsigned long long _operation;	// 8 = 0x8
    SGStorageEvent *_event;	// 16 = 0x10
    NSArray *_eventBatch;	// 24 = 0x18
    SGStorageContact *_contact;	// 32 = 0x20
    SGStorageReminder *_reminder;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016bb92
@property(readonly, nonatomic) SGStorageReminder *reminder; // @synthesize reminder=_reminder;
@property(readonly, nonatomic) SGStorageContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) NSArray *eventBatch; // @synthesize eventBatch=_eventBatch;
@property(readonly, nonatomic) SGStorageEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (id)description;	// IMP=0x000000000016bb0a
- (_Bool)isEqualToJournalEntry:(id)arg1;	// IMP=0x000000000016ba7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016ba12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016ba07
- (id)init;	// IMP=0x000000000016b980
- (id)initWithOperation:(unsigned long long)arg1;	// IMP=0x000000000016b943
- (id)initWithOperation:(unsigned long long)arg1 reminder:(id)arg2;	// IMP=0x000000000016b854
- (id)initWithOperation:(unsigned long long)arg1 contact:(id)arg2;	// IMP=0x000000000016b765
- (id)initWithOperation:(unsigned long long)arg1 eventBatch:(id)arg2;	// IMP=0x000000000016b676
- (id)initWithOperation:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000000016b587

@end

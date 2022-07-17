//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore, NEKRecordMap;

@interface NEKEventPurger : NSObject
{
    NEKRecordMap *_recordMap;	// 8 = 0x8
    EKEventStore *_store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006eca4
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NEKRecordMap *recordMap; // @synthesize recordMap=_recordMap;
- (void)_deleteEventById:(id)arg1;	// IMP=0x001000000006e9f6
- (void)_deleteCalendarById:(id)arg1;	// IMP=0x001000000006e781
- (void)_deleteStoreById:(id)arg1;	// IMP=0x001000000006e50c
- (void)finalizeDatabasesAfterResetSync;	// IMP=0x001000000006ddf6
- (id)initWithStore:(id)arg1 recordMap:(id)arg2;	// IMP=0x001000000006dd58

@end

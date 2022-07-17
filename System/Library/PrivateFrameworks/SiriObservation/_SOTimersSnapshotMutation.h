//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriObservation/SOTimersSnapshotMutating-Protocol.h>

@class NSDate, NSDictionary, NSString, SOTimersSnapshot;

@interface _SOTimersSnapshotMutation : NSObject <SOTimersSnapshotMutating>
{
    SOTimersSnapshot *_baseModel;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSDictionary *_timersByID;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDate:1;
        unsigned int hasTimersByID:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011d1d
- (id)generate;	// IMP=0x0000000000011c1a
- (void)setTimersByID:(id)arg1;	// IMP=0x0000000000011bfa
- (void)setDate:(id)arg1;	// IMP=0x0000000000011bda
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000011b6f
- (id)init;	// IMP=0x0000000000011b5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

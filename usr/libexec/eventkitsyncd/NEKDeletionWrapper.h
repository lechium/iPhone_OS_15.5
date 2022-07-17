//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEKDeletionWrapper : NSObject
{
    int _type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_calendarIdentifier;	// 24 = 0x18
}

+ (id)deletionWrapperForSourceID:(id)arg1;	// IMP=0x0010000000014af0
+ (id)deletionWrapperForRecordID:(id)arg1 eventStore:(id)arg2;	// IMP=0x00100000000148b6
+ (id)deletionWrapperForObjectID:(id)arg1 deletedReminderAndListMapping:(id)arg2;	// IMP=0x001000000002cbb9
- (void).cxx_destruct;	// IMP=0x002000000002ade1
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
@property(readonly, copy) NSString *description;
- (int)type;	// IMP=0x001000000002acb2
- (id)calendarIdentifier;	// IMP=0x001000000002aca4
- (id)identifier;	// IMP=0x001000000002ac96
- (id)initWithIdentifier:(id)arg1 calendarIdentifier:(id)arg2 type:(int)arg3;	// IMP=0x001000000002ac04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSActivityItem, NSArray, NSDate, NSString;

@interface CLSActivity <CLSRelationable>
{
    _Bool _paused;	// 8 = 0x8
    NSDate *_activityStartDate;	// 16 = 0x10
    NSString *_primaryActivityItemIdentifier;	// 24 = 0x18
    NSString *_parentEntityName;	// 32 = 0x20
    _Bool _backgroundTimeTrackingEnabled;	// 40 = 0x28
    long long _type;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f43d
+ (id)relations;	// IMP=0x0000000000029d1d
- (void).cxx_destruct;	// IMP=0x000000000007140f
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, getter=isBackgroudTimeTrackingEnabled) _Bool backgroundTimeTrackingEnabled; // @synthesize backgroundTimeTrackingEnabled=_backgroundTimeTrackingEnabled;
@property(copy, nonatomic) NSString *parentEntityName; // @synthesize parentEntityName=_parentEntityName;
- (void)removeAllActivityItems;	// IMP=0x000000000007110a
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;	// IMP=0x0000000000070e8f
@property(readonly, nonatomic) NSArray *additionalActivityItems;
- (id)activityItemWithIdentifier:(id)arg1;	// IMP=0x0000000000070c0d
- (_Bool)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000070abd
- (_Bool)_isObjectPrimaryItem:(id)arg1;	// IMP=0x0000000000070a4e
- (void)addAdditionalActivityItem:(id)arg1;	// IMP=0x000000000007096b
- (_Bool)validatePrimaryActivityItemType:(id)arg1;	// IMP=0x00000000000708cc
@property(retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property(copy, nonatomic) NSString *primaryActivityItemIdentifier;
- (void)_generateTimeInterval;	// IMP=0x0000000000070475
- (long long)effectiveAuthorizationStatus;	// IMP=0x0000000000070435
- (void)_generatePartialTimeOnSave;	// IMP=0x00000000000702d9
- (void)resume;	// IMP=0x00000000000701a1
- (void)pause;	// IMP=0x0000000000070075
- (void)stop;	// IMP=0x000000000006fee6
- (void)start;	// IMP=0x000000000006fcb0
- (_Bool)isStarted;	// IMP=0x000000000006fc3c
- (double)runningDelta;	// IMP=0x000000000006fbab
@property(readonly, nonatomic) double duration;
@property(nonatomic) double progress;
- (void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2;	// IMP=0x000000000006f64f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f445
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f34e
- (id)_initWithTargetClass:(Class)arg1;	// IMP=0x000000000006f2e6
- (id)_init;	// IMP=0x000000000006f2b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


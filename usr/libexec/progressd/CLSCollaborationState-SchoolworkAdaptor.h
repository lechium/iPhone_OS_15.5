//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollaborationState.h>

@class MISSING_TYPE, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollaborationState (SchoolworkAdaptor)
+ (id)entityWillChangeNotificationName;	// IMP=0x00100000001789c0
+ (long long)migrationOrder;	// IMP=0x00100000001789b5
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000178690
+ (id)hashableColumnNames;	// IMP=0x0010000000177937
+ (id)entityName;	// IMP=0x001000000017792a
- (_Bool)isReturnedActivity;	// IMP=0x00100000000a8bd3
- (MISSING_TYPE *)isCompletedActivity;	// IMP=0x00100000000a8b26
- (_Bool)isIncompleteActivity;	// IMP=0x00100000000a8ac2
- (_Bool)isCompletedHandout;	// IMP=0x00100000000a8a5e
- (_Bool)isIncompleteHandout;	// IMP=0x00100000000a89fa
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000017883b
- (void)bindTo:(id)arg1;	// IMP=0x00100000001780bf
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000177c14
@property(readonly, nonatomic) unsigned long long changeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end


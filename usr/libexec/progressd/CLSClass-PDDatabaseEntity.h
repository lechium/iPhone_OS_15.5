//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSClass.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSClass (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x002000000006ddab
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006d9cb
+ (id)searchColumnName;	// IMP=0x001000000006d359
+ (id)entityName;	// IMP=0x001000000006d34c
- (void)setExpiration:(double)arg1;	// IMP=0x002000000006ddb6
- (void)bindTo:(id)arg1;	// IMP=0x001000000006d6cf
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000006d451
@property(readonly, nonatomic) NSArray *immutableColumnNames;
@property(readonly, nonatomic) NSArray *tokenizableColumnNames;
@property(readonly, nonatomic) NSArray *searchableColumnNames;

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
// Error: Property attributes should begin with the type ('T') attribute, property name: enforceImmutability
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end


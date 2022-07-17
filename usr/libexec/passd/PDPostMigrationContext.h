//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SQLiteDatabase;

@interface PDPostMigrationContext : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
    NSMutableArray *_databasePopulationOperations;	// 16 = 0x10
    NSMutableArray *_postMigrationOperations;	// 24 = 0x18
    _Bool _willRegenerateAutomaticSelectionCriteria;	// 32 = 0x20
    _Bool _willRegeneratePaymentApplications;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0020000000311140
- (void)addPaymentApplicationRegeneration;	// IMP=0x0010000000310bd8
- (void)addAutomaticSelectionCriteriaRegeneration;	// IMP=0x0010000000310671
- (void)performPostMigrationOperations;	// IMP=0x0010000000310566
- (void)performDatabasePopulationOperationsWithPasses:(id)arg1;	// IMP=0x001000000031034e
- (_Bool)hasDatabasePopulationOperations;	// IMP=0x0010000000310331
- (void)addPostMigrationOperation:(CDUnknownBlockType)arg1;	// IMP=0x00100000003102e9
- (void)addDatabasePopulationOperation:(CDUnknownBlockType)arg1;	// IMP=0x00100000003102a1
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000310201
- (id)init;	// IMP=0x00100000003101f3

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHFDataStore, HDSQLiteDatabase, NSArray, NSString, _HKBehavior;
@protocol HDDatabaseMigrationTransactionDelegate;

@interface HDDatabaseMigrationTransaction : NSObject
{
    HDSQLiteDatabase *_unprotectedDatabase;	// 8 = 0x8
    HDSQLiteDatabase *_protectedDatabase;	// 16 = 0x10
    HDHFDataStore *_HFDataStore;	// 24 = 0x18
    _HKBehavior *_behavior;	// 32 = 0x20
    NSArray *_schemaProviders;	// 40 = 0x28
    id <HDDatabaseMigrationTransactionDelegate> _delegate;	// 48 = 0x30
}

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;	// IMP=0x00000000001c169a
- (void).cxx_destruct;	// IMP=0x00000000001c1826
@property(nonatomic) __weak id <HDDatabaseMigrationTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *schemaProviders; // @synthesize schemaProviders=_schemaProviders;
@property(readonly, nonatomic) _HKBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) HDHFDataStore *HFDataStore; // @synthesize HFDataStore=_HFDataStore;
@property(readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // @synthesize protectedDatabase=_protectedDatabase;
@property(readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // @synthesize unprotectedDatabase=_unprotectedDatabase;
@property(readonly, nonatomic) long long defaultProtectionClass;
@property(readonly, copy, nonatomic) NSString *defaultDatabaseName;
@property(readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property(readonly, nonatomic) _Bool isProtectedMigration;
- (id)databaseNameForProtectionClass:(long long)arg1;	// IMP=0x00000000001c15f5
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 HFDataStore:(id)arg3 schemaProviders:(id)arg4 behavior:(id)arg5;	// IMP=0x00000000001c14d1
- (long long)migrateOrCreateSchemaWithError:(id *)arg1;	// IMP=0x00000000001c4b73

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSSet, NSString, PDDatabase, PDDatabaseBindings, PDDatabaseRow;
@protocol PDDatabaseValue;

@protocol PDDatabaseEntity <NSObject>
+ (NSString *)entityName;
+ (NSString *)identityColumnName;
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(PDDatabase *)arg3;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(PDDatabaseBindings *)arg1;
- (id)initWithDatabaseRow:(PDDatabaseRow *)arg1;

@optional
+ (NSString *)entityWillChangeNotificationName;
+ (NSString *)entityDidInsertNotificationName;
+ (long long)migrationOrder;
+ (NSArray *)hashableColumnNames;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, nonatomic) unsigned long long changeHash;
- (NSDictionary *)dictionaryRepresentation;
- (NSSet *)tokensForSearchableColumn:(NSString *)arg1 withValue:(id)arg2 tokenize:(_Bool)arg3;
- (void)willBeDeletedFromDatabase:(PDDatabase *)arg1;
@end

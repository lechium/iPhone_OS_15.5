//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext
{
    NSString *_path;	// 8 = 0x8
}

+ (id)sideTableContext;	// IMP=0x0000000000054200
- (void).cxx_destruct;	// IMP=0x00000000000552fc
- (id)_persistentStoreCoordinator;	// IMP=0x0000000000054fac
- (id)_managedObjectModel;	// IMP=0x0000000000054eb8
- (_Bool)_removeSqliteFiles;	// IMP=0x0000000000054d7d
- (id)_urlForPersistentStore;	// IMP=0x0000000000054d1a
- (id)_pathForPersistentStore;	// IMP=0x0000000000054cc3
- (id)rootDirectory;	// IMP=0x0000000000054c8f
- (void)setSetting:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000054bb0
- (id)settingForKey:(id)arg1;	// IMP=0x0000000000054b59
- (id)_settingForKey:(id)arg1;	// IMP=0x00000000000549d9
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000005482a
- (id)nextAlarmFireTime;	// IMP=0x0000000000054615
- (id)insertNewAlarm;	// IMP=0x00000000000545f2
- (void)deleteAllAlarms;	// IMP=0x00000000000544bb
- (id)_alarmsMatchingPredicate:(id)arg1;	// IMP=0x00000000000543d0
- (id)initWithConcurrencyType:(unsigned long long)arg1;	// IMP=0x0000000000054323

@end


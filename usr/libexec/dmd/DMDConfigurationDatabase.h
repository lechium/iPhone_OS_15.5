//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x004000000002a352
+ (id)newUserDatabase;	// IMP=0x001000000002a2f8
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x001000000002a287
+ (id)managedObjectModel;	// IMP=0x0010000000029fc9
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x004000000002a4ae
- (id)init;	// IMP=0x001000000002a42c
- (id)description;	// IMP=0x001000000002a0ac

@end


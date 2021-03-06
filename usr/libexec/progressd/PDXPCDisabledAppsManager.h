//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PDSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface PDXPCDisabledAppsManager : NSObject
{
    PDSQLiteDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b3a7a
- (_Bool)_migrateToVersion1:(id *)arg1;	// IMP=0x00100000000b394e
- (_Bool)_migrateIfNeeded;	// IMP=0x00100000000b382c
- (_Bool)_performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b34c7
- (_Bool)_updateAppDisabledStateForAppIdentifier:(id)arg1 toDisabled:(_Bool)arg2;	// IMP=0x00100000000b3052
- (_Bool)enableAppWithAppIdentifier:(id)arg1;	// IMP=0x00100000000b303e
- (_Bool)disableAppWithAppIdentifier:(id)arg1;	// IMP=0x00100000000b3027
- (void)_resetIfNeeded;	// IMP=0x00100000000b2e3a
- (void)reset;	// IMP=0x00100000000b2d2d
- (_Bool)setResetting:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000b2c15
@property(readonly, nonatomic, getter=isResetting) _Bool resetting;
- (id)database;	// IMP=0x00100000000b27c9
@property(readonly, nonatomic) NSArray *disabledAppIDs;
- (void)onQueueDo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b25c3
- (_Bool)isOnQueue;	// IMP=0x00100000000b25a1
- (void)dealloc;	// IMP=0x00100000000b255f
- (id)init;	// IMP=0x00100000000b247a

@end


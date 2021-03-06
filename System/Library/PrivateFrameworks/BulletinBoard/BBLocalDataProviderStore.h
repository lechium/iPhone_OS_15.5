//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBLocalDataProviderFactoryStore-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore>
{
    id <BBDataProviderStoreDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serverQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableDictionary *_dataProvidersBySectionID;	// 32 = 0x20
    NSMutableDictionary *_dataProvidersByUniversalSectionID;	// 40 = 0x28
    NSMutableArray *_localFactories;	// 48 = 0x30
}

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;	// IMP=0x00000000000566b4
- (void).cxx_destruct;	// IMP=0x0000000000058322
@property(retain, nonatomic) NSMutableArray *localFactories; // @synthesize localFactories=_localFactories;
@property(retain, nonatomic) NSMutableDictionary *dataProvidersByUniversalSectionID; // @synthesize dataProvidersByUniversalSectionID=_dataProvidersByUniversalSectionID;
@property(retain, nonatomic) NSMutableDictionary *dataProvidersBySectionID; // @synthesize dataProvidersBySectionID=_dataProvidersBySectionID;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;	// IMP=0x00000000000580ee
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;	// IMP=0x00000000000580d9
- (void)removeDataProviderWithSectionID:(id)arg1;	// IMP=0x0000000000057ff5
- (void)addDataProvider:(id)arg1 performMigration:(_Bool)arg2;	// IMP=0x0000000000057efa
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;	// IMP=0x0000000000057e52
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057ad1
- (void)removeDataProvider:(id)arg1;	// IMP=0x0000000000057a29
- (void)_queue_removeDataProvider:(id)arg1;	// IMP=0x00000000000578e3
- (id)dataProvidersForUniversalSectionID:(id)arg1;	// IMP=0x00000000000577a2
- (id)dataProviderForSectionID:(id)arg1;	// IMP=0x000000000005763c
- (void)_addDataProviderClass:(Class)arg1 performMigration:(_Bool)arg2;	// IMP=0x0000000000057583
- (void)_queue_addDataProvider:(id)arg1 performMigration:(_Bool)arg2;	// IMP=0x00000000000572d6
- (void)_loadDataProviderPluginBundle:(id)arg1 performMigration:(_Bool)arg2;	// IMP=0x0000000000056f8b
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;	// IMP=0x0000000000056bb0
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;	// IMP=0x000000000005684e
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;	// IMP=0x0000000000056724

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


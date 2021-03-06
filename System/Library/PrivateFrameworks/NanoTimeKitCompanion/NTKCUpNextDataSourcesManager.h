//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RERelevanceEngine;
@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;

@interface NTKCUpNextDataSourcesManager : NSObject
{
    RERelevanceEngine *_relevanceEngine;	// 8 = 0x8
    NSArray *_firstPartyDataSourceEntries;	// 16 = 0x10
    NSArray *_thirdPartyDataSourceEntries;	// 24 = 0x18
    NSArray *_sportsDataSourceEntries;	// 32 = 0x20
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;	// 40 = 0x28
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;	// 48 = 0x30
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 64 = 0x40
    CDStruct_f6aba300 _watchVersion;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000c88d1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate; // @synthesize sportsIdentifiersDelegate=_sportsIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate; // @synthesize thirdPartyIdentifiersDelegate=_thirdPartyIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate; // @synthesize firstPartyIdentifiersDelegate=_firstPartyIdentifiersDelegate;
@property(copy) NSArray *sportsDataSourceEntries; // @synthesize sportsDataSourceEntries=_sportsDataSourceEntries;
@property(copy) NSArray *thirdPartyDataSourceEntries; // @synthesize thirdPartyDataSourceEntries=_thirdPartyDataSourceEntries;
@property(copy) NSArray *firstPartyDataSourceEntries; // @synthesize firstPartyDataSourceEntries=_firstPartyDataSourceEntries;
@property(readonly, nonatomic) CDStruct_f6aba300 watchVersion; // @synthesize watchVersion=_watchVersion;
- (void)_buildRows;	// IMP=0x00000000000c8165
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7eea
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7ed8
- (void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c79a3
- (id)_firstPartyDataSourceEntries;	// IMP=0x00000000000c7676
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1;	// IMP=0x00000000000c68ac
- (_Bool)_isNanoWeatherAppID:(id)arg1;	// IMP=0x00000000000c6893
- (id)_preGraceThirdPartyBundleIdentifiers;	// IMP=0x00000000000c61eb
- (void)fetchIdentifiers;	// IMP=0x00000000000c61d9
- (void)_dataSourcesChangedNotification:(id)arg1;	// IMP=0x00000000000c60ed
- (void)_appsChangedNotification:(id)arg1;	// IMP=0x00000000000c6001
- (void)dealloc;	// IMP=0x00000000000c5fbc
- (id)initWatchVersion:(CDStruct_f6aba300)arg1;	// IMP=0x00000000000c5d31

@end


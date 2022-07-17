//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseObserver-Protocol.h>

@class NSHashTable, SCKDatabase, SCKStartupQueue;
@protocol OS_dispatch_queue, SCWatchlistDefaultsProviding, SCWatchlistMetadataProviding;

@interface SCWatchlist : NSObject <SCKDatabaseObserver>
{
    SCKDatabase *_database;	// 8 = 0x8
    id <SCWatchlistMetadataProviding> _metadataProvider;	// 16 = 0x10
    id <SCWatchlistDefaultsProviding> _defaultsProvider;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    SCKStartupQueue *_startupQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
}

+ (id)supportedCommands;	// IMP=0x000000000001fd52
+ (id)zoneMergeHandler;	// IMP=0x000000000001fd39
+ (id)zoneSchema;	// IMP=0x000000000001fbe6
- (void).cxx_destruct;	// IMP=0x00000000000216fa
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) SCKStartupQueue *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SCWatchlistDefaultsProviding> defaultsProvider; // @synthesize defaultsProvider=_defaultsProvider;
@property(retain, nonatomic) id <SCWatchlistMetadataProviding> metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property(retain, nonatomic) SCKDatabase *database; // @synthesize database=_database;
- (void)_enqueueStartupSequence;	// IMP=0x000000000002084a
- (id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2;	// IMP=0x00000000000204bd
- (void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4;	// IMP=0x000000000001fe23
- (void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f9c2
- (void)removeStock:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f94a
- (void)synchronize;	// IMP=0x000000000001f90d
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001f89b
- (void)addObserver:(id)arg1;	// IMP=0x000000000001f829
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f616
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f403
- (void)removeSymbol:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f220
- (void)addStock:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f014
- (void)fetchStocksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e7f2
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3;	// IMP=0x000000000001e73d
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3;	// IMP=0x000000000001e5b0

@end

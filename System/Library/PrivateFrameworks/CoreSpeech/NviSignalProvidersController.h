//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMapTable;
@protocol NviAssetsProvider;

@interface NviSignalProvidersController : NSObject
{
    id <NviAssetsProvider> _assetsProvider;	// 8 = 0x8
    NSDictionary *_dataSrcMap;	// 16 = 0x10
    NSMapTable *_sigProvidersMap;	// 24 = 0x18
    NSHashTable *_currActiveSigProvTypes;	// 32 = 0x20
    NSHashTable *_currActiveDataSourceTypes;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x000000000005612c
- (void).cxx_destruct;	// IMP=0x00000000000586b8
@property(retain, nonatomic) NSHashTable *currActiveDataSourceTypes; // @synthesize currActiveDataSourceTypes=_currActiveDataSourceTypes;
@property(retain, nonatomic) NSHashTable *currActiveSigProvTypes; // @synthesize currActiveSigProvTypes=_currActiveSigProvTypes;
@property(retain, nonatomic) NSMapTable *sigProvidersMap; // @synthesize sigProvidersMap=_sigProvidersMap;
@property(retain, nonatomic) NSDictionary *dataSrcMap; // @synthesize dataSrcMap=_dataSrcMap;
@property(retain, nonatomic) id <NviAssetsProvider> assetsProvider; // @synthesize assetsProvider=_assetsProvider;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg1;	// IMP=0x0000000000058487
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)arg1;	// IMP=0x00000000000582dd
- (void)unregisterSignalProviderDelegate:(id)arg1 forSignalType:(unsigned long long)arg2;	// IMP=0x0000000000058229
- (void)registerSignalProviderDelegate:(id)arg1 forSignalTypes:(unsigned long long)arg2;	// IMP=0x0000000000058175
- (void)_iterateSignalMask:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057fdd
- (void)stop;	// IMP=0x0000000000057faf
- (void)_stopCurrentlyRunningSignalProviders;	// IMP=0x0000000000057b06
- (void)_stopDataSources;	// IMP=0x000000000005765d
- (void)reset;	// IMP=0x00000000000574df
- (void)startWithNviContext:(id)arg1;	// IMP=0x000000000005748a
- (void)_startSignalProvidersWithContext:(id)arg1;	// IMP=0x0000000000056e56
- (void)_startDataSourcesWithContext:(id)arg1;	// IMP=0x000000000005692e
- (_Bool)_setupSignalProviders:(id)arg1;	// IMP=0x0000000000056353
- (void)dealloc;	// IMP=0x00000000000562a4
- (id)initWithAssetsProvider:(id)arg1 dataSourceMap:(id)arg2 signalProviderToDataSourceMap:(id)arg3;	// IMP=0x0000000000056154

@end

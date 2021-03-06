//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSSearchProviderContext-Protocol.h>

@class NSArray, NSDictionary, NSString, _SFSearchEngineInfo;
@protocol OS_dispatch_queue;

@interface _SFSearchEngineController : NSObject <WBSSearchProviderContext>
{
    NSArray *_searchEngines;	// 8 = 0x8
    unsigned long long _defaultSearchEngineIndex;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_searchEnginesQueue;	// 24 = 0x18
    _SFSearchEngineInfo *_defaultSearchEngine;	// 32 = 0x20
    long long _deviceType;	// 40 = 0x28
    NSString *_countryCode;	// 48 = 0x30
    NSString *_systemLanguage;	// 56 = 0x38
    NSDictionary *_templateParameterValues;	// 64 = 0x40
    NSDictionary *_carrierTemplateParameterValues;	// 72 = 0x48
}

+ (_Bool)_deviceRegionCodeIsChina;	// IMP=0x0000000000156543
+ (void)loadSystemLanguageProperties;	// IMP=0x0000000000156522
+ (id)sharedInstanceIfAvailable;	// IMP=0x000000000015647f
+ (id)sharedInstance;	// IMP=0x0000000000156447
+ (void)_initializeSharedInstance;	// IMP=0x00000000001563e1
- (void).cxx_destruct;	// IMP=0x00000000001585e6
@property(readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues; // @synthesize carrierTemplateParameterValues=_carrierTemplateParameterValues;
@property(readonly, copy, nonatomic) NSDictionary *templateParameterValues; // @synthesize templateParameterValues=_templateParameterValues;
@property(readonly, copy, nonatomic) NSString *systemLanguage; // @synthesize systemLanguage=_systemLanguage;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (_Bool)isSearchProviderEnabled:(unsigned long long)arg1;	// IMP=0x000000000015859b
@property(readonly, nonatomic) _Bool isChinaDevice;
@property(readonly, copy, nonatomic) NSString *defaultSearchEngineName;
@property(readonly, copy, nonatomic) NSArray *searchEngineNames;
@property(readonly, copy, nonatomic) NSArray *enginesAvailableForUnifiedFieldSearching;
@property(readonly, copy, nonatomic) NSArray *engines;
- (void)_getEngines:(id *)arg1 defaultSearchEngineIndex:(unsigned long long *)arg2;	// IMP=0x0000000000158120
- (void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2;	// IMP=0x0000000000157ffa
- (id)safeSearchRequestForSearchRequest:(id)arg1;	// IMP=0x0000000000157d9a
- (void)_loadSystemPropertiesForSearchEngine:(id)arg1;	// IMP=0x0000000000157b9f
- (void)_addSpecialSearchEnginesToArray:(id)arg1;	// IMP=0x0000000000157a27
- (id)engineInfoForScriptName:(id)arg1;	// IMP=0x0000000000157847
- (id)engineInfoFor:(id)arg1;	// IMP=0x0000000000157669
- (id)_existingEngineInfoFor:(id)arg1;	// IMP=0x00000000001574a4
- (void)_postDefaultSearchEngineDidChange;	// IMP=0x00000000001573ea
@property(readonly, nonatomic) _SFSearchEngineInfo *defaultSearchEngineIfPopulated;
- (id)defaultSearchEngine;	// IMP=0x00000000001572d6
- (void)_setDefaultSearchEngine:(id)arg1;	// IMP=0x0000000000157124
- (void)setDefaultSearchEngine:(id)arg1;	// IMP=0x000000000015704b
@property(readonly, copy) NSString *description;
- (void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2;	// IMP=0x0000000000156bf1
- (void)reloadSearchEngines;	// IMP=0x0000000000156b93
- (void)_populateSearchEngines;	// IMP=0x00000000001565d5
- (id)init;	// IMP=0x000000000015654d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


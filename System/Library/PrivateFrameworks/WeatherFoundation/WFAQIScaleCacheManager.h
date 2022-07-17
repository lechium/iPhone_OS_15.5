//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WFAQIScale;

@interface WFAQIScaleCacheManager : NSObject
{
    struct os_unfair_lock_s _dataSynchronizationLock;	// 8 = 0x8
    WFAQIScale *_defaultScale;	// 16 = 0x10
    NSMutableDictionary *_aqiScaleCache;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000000003eb82
- (void).cxx_destruct;	// IMP=0x000000000003f4c0
@property(readonly, nonatomic) NSMutableDictionary *aqiScaleCache; // @synthesize aqiScaleCache=_aqiScaleCache;
@property(readonly, nonatomic) struct os_unfair_lock_s dataSynchronizationLock; // @synthesize dataSynchronizationLock=_dataSynchronizationLock;
@property(readonly, nonatomic) WFAQIScale *defaultScale; // @synthesize defaultScale=_defaultScale;
- (id)_persistedInfoFromDisk;	// IMP=0x000000000003f1a9
- (id)_persistedInfoURL;	// IMP=0x000000000003f0fc
- (void)_persistInfoToDisk;	// IMP=0x000000000003efbf
- (void)clearCache;	// IMP=0x000000000003eecd
- (id)cachedScaleFromIdentifier:(id)arg1;	// IMP=0x000000000003edfb
- (void)updateCacheWithScale:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000003ecce
- (id)init;	// IMP=0x000000000003ebd7

@end

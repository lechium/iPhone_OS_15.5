//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDModeConfigurationService, NSDictionary;
@protocol DNDModeConfigurationServiceListener;

@interface ATXDNDModeConfigurationClient : NSObject
{
    DNDModeConfigurationService *_dndConfigurationService;	// 8 = 0x8
    id <DNDModeConfigurationServiceListener> _updateListener;	// 16 = 0x10
    _Bool _isCacheValid;	// 24 = 0x18
    NSDictionary *_cachedModeConfig;	// 32 = 0x20
    NSDictionary *_cachedModesByModeIdentifiers;	// 40 = 0x28
    NSDictionary *_cachedModesBySemanticType;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000000aaf39
- (void).cxx_destruct;	// IMP=0x00000000000abd47
- (id)getAllModeConfigurationsWithoutCache;	// IMP=0x00000000000abc8a
- (id)modeConfigurationForDNDModeWithUUID:(id)arg1;	// IMP=0x00000000000abb45
- (id)debug_allModeDescriptions;	// IMP=0x00000000000ab953
- (id)dndModeForATXMode:(unsigned long long)arg1;	// IMP=0x00000000000ab89c
- (id)dndSemanticTypeForATXMode:(unsigned long long)arg1;	// IMP=0x00000000000ab7ff
- (id)dndModeUUIDForDNDModeIdentifier:(id)arg1;	// IMP=0x00000000000ab6e2
- (unsigned long long)atxModeForDNDSemanticType:(long long)arg1;	// IMP=0x00000000000ab6c3
- (unsigned long long)atxModeForDNDMode:(id)arg1;	// IMP=0x00000000000ab656
- (id)dndModeForDNDModeWithUUID:(id)arg1;	// IMP=0x00000000000ab5a5
- (id)configuredModesBySemanticType;	// IMP=0x00000000000ab53a
- (id)modesByModeIdentifiers;	// IMP=0x00000000000ab4cf
- (id)configuredModes;	// IMP=0x00000000000ab464
- (void)invalidateCaches;	// IMP=0x00000000000ab432
- (void)refreshCachedConfigs;	// IMP=0x00000000000aafa5
- (id)initWithConfigurationService:(id)arg1;	// IMP=0x00000000000aad48
- (id)init;	// IMP=0x00000000000aace7

@end


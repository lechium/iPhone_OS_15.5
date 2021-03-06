//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LCServiceLoggingParameters, NSArray, NSData;

@interface LCServiceLoggingConfiguration
{
    LCServiceLoggingParameters *_defaultParameters;	// 8 = 0x8
    int _configurationVersion;	// 16 = 0x10
    NSArray *_applications;	// 24 = 0x18
    NSArray *_blacklistedBundleIdentifiers;	// 32 = 0x20
    NSArray *_denyListedCategories;	// 40 = 0x28
    struct {
        unsigned int configurationVersion:1;
    } _has;	// 48 = 0x30
    _Bool _hasDefaultParameters;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000001b3615
@property(nonatomic) _Bool hasDefaultParameters; // @synthesize hasDefaultParameters=_hasDefaultParameters;
@property(copy, nonatomic) NSArray *denyListedCategories; // @synthesize denyListedCategories=_denyListedCategories;
@property(copy, nonatomic) NSArray *blacklistedBundleIdentifiers; // @synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers;
@property(copy, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(nonatomic) int configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(retain, nonatomic) LCServiceLoggingParameters *defaultParameters; // @synthesize defaultParameters=_defaultParameters;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b2ec5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b2e07
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b291c
- (unsigned long long)hash;	// IMP=0x00000000001b286d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b2345
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b1fbb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b1fae
- (int)denyListedCategoriesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b1f5f
- (unsigned long long)denyListedCategoriesCount;	// IMP=0x00000000001b1f42
- (void)addDenyListedCategories:(int)arg1;	// IMP=0x00000000001b1eac
- (void)deleteDenyListedCategories;	// IMP=0x00000000001b1e9a
- (void)clearDenyListedCategories;	// IMP=0x00000000001b1e7d
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b1e60
- (unsigned long long)blacklistedBundleIdentifiersCount;	// IMP=0x00000000001b1e43
- (void)addBlacklistedBundleIdentifiers:(id)arg1;	// IMP=0x00000000001b1dc9
- (void)deleteBlacklistedBundleIdentifiers;	// IMP=0x00000000001b1db7
- (void)clearBlacklistedBundleIdentifiers;	// IMP=0x00000000001b1d9a
- (id)applicationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b1d7d
- (unsigned long long)applicationsCount;	// IMP=0x00000000001b1d60
- (void)addApplications:(id)arg1;	// IMP=0x00000000001b1ce6
- (void)deleteApplications;	// IMP=0x00000000001b1cd4
- (void)clearApplications;	// IMP=0x00000000001b1cb7
- (void)deleteConfigurationVersion;	// IMP=0x00000000001b1c8d
@property(nonatomic) _Bool hasConfigurationVersion;
- (void)deleteDefaultParameters;	// IMP=0x00000000001b1c34
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349175
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034913d

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface OSASystemConfiguration
{
    _Bool _appleInternal;	// 192 = 0xc0
    _Bool _carrierInstall;	// 193 = 0xc1
    _Bool _multiUserMode;	// 194 = 0xc2
    NSMutableDictionary *_submissionMetadata;	// 200 = 0xc8
    NSString *_pairedWatchOS;	// 208 = 0xd0
    NSDictionary *_logConfig;	// 216 = 0xd8
    NSSet *_logBlacklist;	// 224 = 0xe0
    NSDictionary *_submissionParams;	// 232 = 0xe8
    NSDictionary *_whitelistedDomains;	// 240 = 0xf0
    NSString *_pathRoot;	// 248 = 0xf8
    NSString *_pathContainerRoot;	// 256 = 0x100
    NSString *_pathSubmission;	// 264 = 0x108
    NSString *_pathPreferences;	// 272 = 0x110
    NSString *_pathDiagnostics;	// 280 = 0x118
    NSString *_pathCATasking;	// 288 = 0x120
    NSString *_pathAWDTasking;	// 296 = 0x128
    CDStruct_7277eab8 _logDomain;	// 304 = 0x130
}

+ (void)ensureConformanceOfFile:(int)arg1 options:(id)arg2;	// IMP=0x0000000000013105
+ (id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3;	// IMP=0x0000000000012913
+ (id)sharedInstance;	// IMP=0x0000000000010292
- (void).cxx_destruct;	// IMP=0x0000000000014a03
@property(readonly) CDStruct_7277eab8 logDomain;
- (id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3;	// IMP=0x0000000000014515
- (id)logExt:(id)arg1;	// IMP=0x0000000000014322
- (id)logPrefix:(id)arg1;	// IMP=0x0000000000014284
- (id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4;	// IMP=0x0000000000014087
- (_Bool)isAllowed:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000013fe5
- (_Bool)isWhitelisted:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000013f2e
- (id)submissionParam:(id)arg1;	// IMP=0x0000000000013ec1
@property(readonly) NSString *pathAWDTasking;
@property(readonly) NSString *pathCATasking;
@property(readonly) NSString *pathDiagnostics;
@property(readonly) NSString *pathPreferences;
- (id)logPath;	// IMP=0x00000000000138e1
- (id)pathSubmissionWithHomeDirectory:(id)arg1;	// IMP=0x0000000000013802
- (id)pathSubmissionForOwner:(id)arg1;	// IMP=0x00000000000137f0
@property(readonly) NSString *pathSubmission;
@property(readonly) NSString *pathContainerRoot;
@property(copy) NSString *pathRoot;
- (_Bool)isConfigEnabled:(id)arg1;	// IMP=0x000000000001286c
- (_Bool)usesLegacySubmission:(id)arg1;	// IMP=0x0000000000012864
- (id)getPropsForLogType:(id)arg1;	// IMP=0x00000000000127c6
- (id)getLogBlacklist;	// IMP=0x000000000001279a
- (void)onceConfig;	// IMP=0x0000000000012371
- (void)saveToPath:(id)arg1;	// IMP=0x00000000000122d5
- (void)plumbEmail:(id)arg1;	// IMP=0x00000000000122cf
- (id)internalKey;	// IMP=0x00000000000118e6
- (id)currentTaskingIDByRouting;	// IMP=0x00000000000118cd
- (id)seedGroup;	// IMP=0x000000000001182b
- (id)releaseType;	// IMP=0x0000000000011791
- (id)automatedContextURL;	// IMP=0x00000000000116ab
- (id)automatedDeviceGroup;	// IMP=0x00000000000115c5
- (id)experimentGroup;	// IMP=0x00000000000114df
- (id)getTaskingKey:(id)arg1;	// IMP=0x00000000000114c3
- (id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3;	// IMP=0x00000000000112d3
- (_Bool)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(_Bool)arg4;	// IMP=0x0000000000010e76
- (id)awdReporterKey;	// IMP=0x0000000000010dea
- (id)crashReporterKey;	// IMP=0x0000000000010d7a
- (id)serialNumber;	// IMP=0x0000000000010cf7
- (id)systemId;	// IMP=0x0000000000010c56
- (id)uiCountryCode;	// IMP=0x0000000000010b53
- (id)targetAudience;	// IMP=0x0000000000010b2e
- (id)osTrain;	// IMP=0x0000000000010b09
- (id)productReleaseString;	// IMP=0x0000000000010ae4
- (id)productNameVersionBuildString;	// IMP=0x0000000000010abf
- (id)productName;	// IMP=0x0000000000010a9a
- (id)productBuildString;	// IMP=0x0000000000010a75
- (id)buildVersion;	// IMP=0x0000000000010a50
- (id)productVersion;	// IMP=0x0000000000010a2b
- (void)sysVersionData;	// IMP=0x000000000001073d
- (id)modelCode;	// IMP=0x0000000000010628
- (id)pairedWatchOS;	// IMP=0x00000000000105e4
@property(readonly) _Bool multiUserMode;
@property(readonly) _Bool carrierInstall;
@property(readonly) _Bool appleInternal;
- (id)identifier;	// IMP=0x0000000000010387
@property(readonly) NSMutableDictionary *submissionMetadata;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00000000000101a0
- (_Bool)isProxy;	// IMP=0x0000000000010198
@property(readonly) _Bool optIn3rdParty;
@property(readonly) _Bool optInApple;

@end


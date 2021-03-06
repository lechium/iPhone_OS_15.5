//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _EARAppLmArtifact
{
    shared_ptr_f52c68bb _cachedLmData;	// 24 = 0x18
    NSString *_cachedConfigFilepath;	// 40 = 0x28
    NSString *_cachedNcsRoot;	// 48 = 0x30
    NSString *_cachedDataRoot;	// 56 = 0x38
}

+ (id)loadLmHandleFromArtifactAt:(id)arg1 configPath:(id)arg2 ncsRoot:(id)arg3;	// IMP=0x0000000000513128
+ (_Bool)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 ncsRoot:(id)arg4 dataRoot:(id)arg5 estimationRoot:(id)arg6 minimize:(_Bool)arg7 saveTo:(id)arg8;	// IMP=0x0000000000512a39
+ (_Bool)createPhraseCountsArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 rawPhraseCountsPath:(id)arg4 customPronunciationsPath:(id)arg5 saveTo:(id)arg6;	// IMP=0x0000000000512448
+ (_Bool)createEmptyArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 saveTo:(id)arg4;	// IMP=0x0000000000512035
- (id).cxx_construct;	// IMP=0x0000000000513599
- (void).cxx_destruct;	// IMP=0x0000000000513548
- (unsigned long long)getLifeCycleStage;	// IMP=0x0000000000511dd2
- (_Bool)isAdaptableToSpeechModelVersion:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000511a34
- (id)loadLmHandle;	// IMP=0x0000000000511528
- (id)loadOovs;	// IMP=0x0000000000511172
- (id)loadCustomPronData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x0000000000510cb4
- (id)loadAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x0000000000510b72
- (shared_ptr_f52c68bb)_loadRawAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x0000000000510390
- (void)_cacheLmData:(shared_ptr_f52c68bb)arg1 configFilepath:(id)arg2 ncsRoot:(id)arg3 dataRoot:(id)arg4;	// IMP=0x0000000000510280
- (shared_ptr_f52c68bb)_tryToLoadCachedLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x000000000051012e
- (id)initWithAppLmArtifact:(shared_ptr_12953206)arg1;	// IMP=0x0000000000510094
- (id)initWithPath:(id)arg1;	// IMP=0x000000000050ff42
- (id)initWithVersion:(id)arg1 andLocale:(id)arg2;	// IMP=0x000000000050fc85

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFSpeechAssetManager : NSObject
{
}

+ (void)promoteAssets;	// IMP=0x0000000000017b59
+ (void)setAssetsAsProvisional;	// IMP=0x0000000000017b15
+ (void)purgeAssetsForLanguage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000179e6
+ (id)configParametersForVoicemailWithLanguage:(id)arg1;	// IMP=0x00000000000178b7
+ (id)assetPathForLanguage:(id)arg1;	// IMP=0x0000000000017788
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(_Bool)arg2 forceUpgrade:(_Bool)arg3 detailedProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000017656
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(_Bool)arg2 forceUpgrade:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000017524
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000174f5
+ (void)fetchAssetsForLanguage:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000174d4
+ (void)installedLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000173f1
+ (id)installedLanguages;	// IMP=0x00000000000172b0
+ (id)fetchMAAssetPathForInstalledLanguage:(id)arg1;	// IMP=0x0000000000016ff9
+ (id)_assetQueryForLanguage:(id)arg1;	// IMP=0x0000000000016f6a

@end


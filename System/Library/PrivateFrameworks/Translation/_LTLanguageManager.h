//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, _LTOfflineAssetManager;
@protocol OS_dispatch_queue;

@interface _LTLanguageManager : NSObject
{
    _LTOfflineAssetManager *_assetManager;	// 8 = 0x8
    NSMutableDictionary *_assetStatusDictionary;	// 16 = 0x10
    NSArray *_localeIdentifierList;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _useCellular;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000017238
+ (void)initialize;	// IMP=0x00000000000171ea
- (void).cxx_destruct;	// IMP=0x000000000001b845
- (void)_setInstalledLocales:(id)arg1;	// IMP=0x000000000001a4c0
- (void)setInstalledLocales:(id)arg1 useCellular:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a36a
- (void)downloadAsset:(id)arg1 withStatus:(id)arg2;	// IMP=0x0000000000019a97
- (void)updateProgress;	// IMP=0x0000000000019a5c
- (id)languageToStatusDictionary;	// IMP=0x00000000000194a3
- (id)installationStatusArray;	// IMP=0x00000000000191cc
- (void)installedLocales:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018f4c
- (id)assetWithName:(id)arg1 inAssets:(id)arg2;	// IMP=0x0000000000018d2d
- (id)assetsNamesForLocale:(id)arg1;	// IMP=0x00000000000185ef
- (id)assetNamesForPairNames:(id)arg1;	// IMP=0x0000000000018122
- (id)pairNamesForLocales:(id)arg1;	// IMP=0x0000000000017c5d
- (id)identifiersInIdentifiers:(id)arg1 forAssetName:(id)arg2;	// IMP=0x000000000001792d
- (id)identifiersInIdentifiers:(id)arg1 forLanguageName:(id)arg2;	// IMP=0x00000000000175b2
- (id)description;	// IMP=0x0000000000017341
- (id)init;	// IMP=0x000000000001728d

@end

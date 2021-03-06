//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSString, _LTTranslationContext;

__attribute__((visibility("hidden")))
@interface _LTHybridEndpointerAssetInfo : NSObject
{
    MAAsset *_spgAsset;	// 8 = 0x8
    MAAsset *_sourceLanguageAsset;	// 16 = 0x10
    MAAsset *_targetLanguageAsset;	// 24 = 0x18
    _LTTranslationContext *_context;	// 32 = 0x20
    NSString *_hybridepAssetFile;	// 40 = 0x28
    NSString *_spgAssetFile;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000fb05
@property(readonly, nonatomic) NSString *spgAssetFile; // @synthesize spgAssetFile=_spgAssetFile;
@property(readonly, nonatomic) NSString *hybridepAssetFile; // @synthesize hybridepAssetFile=_hybridepAssetFile;
- (_Bool)endpointerIsAvailableWithContext:(id)arg1;	// IMP=0x000000000000fa07
- (id)endpointerModelURL:(id)arg1;	// IMP=0x000000000000f8cd
- (id)caesuraModelURL;	// IMP=0x000000000000f869
- (_Bool)isPremium:(id)arg1;	// IMP=0x000000000000f7db
- (id)getPreferredAsset:(id)arg1 orAsset:(id)arg2 withLocale:(id)arg3;	// IMP=0x000000000000f4f5
- (id)selectAsset:(id)arg1 withLocale:(id)arg2;	// IMP=0x000000000000f35c
- (id)initWithAvailableAssets:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ef73

@end


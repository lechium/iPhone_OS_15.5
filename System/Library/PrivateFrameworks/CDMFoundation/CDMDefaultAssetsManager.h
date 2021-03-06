//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSLocale, NSString;

@interface CDMDefaultAssetsManager : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSString *_assetDirPath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000de91
@property(readonly, nonatomic) NSString *assetDirPath; // @synthesize assetDirPath=_assetDirPath;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)getAbsolutePathForServiceAssetFolders:(id)arg1 customizedRoot:(id)arg2;	// IMP=0x000000000000dd38
- (id)getAbsolutePathForServiceAssetFolders:(id)arg1;	// IMP=0x000000000000dbfc
- (id)getAbsolutePathForCustomizedLocalizedAssetsRootFolder:(id)arg1;	// IMP=0x000000000000db3a
- (id)getAbsolutePathForLocalizedAssetsRootFolder;	// IMP=0x000000000000da78
- (id)getAbsolutePathForCustomizedAssetsRootFolder:(id)arg1;	// IMP=0x000000000000da5c
- (id)getAbsolutePathForAssetsRootFolder;	// IMP=0x000000000000da3f
- (void)setAssetDirPath:(id)arg1;	// IMP=0x000000000000d969
- (id)initWithLocale:(id)arg1 assetDirPath:(id)arg2;	// IMP=0x000000000000d7c0
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000000d7ac

@end


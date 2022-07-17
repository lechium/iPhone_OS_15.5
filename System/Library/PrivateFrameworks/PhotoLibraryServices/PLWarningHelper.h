//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PLPhotoLibrary;

@interface PLWarningHelper : NSObject
{
    NSArray *__assets;	// 8 = 0x8
    long long __duplicatePhotoStreamCount;	// 16 = 0x10
    long long __syndicationAssetCount;	// 24 = 0x18
    NSString *__clientName;	// 32 = 0x20
    long long __style;	// 40 = 0x28
    PLPhotoLibrary *_photoLibrary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019df2d
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) long long _style; // @synthesize _style=__style;
@property(retain, nonatomic) NSString *_clientName; // @synthesize _clientName=__clientName;
@property(nonatomic) long long _syndicationAssetCount; // @synthesize _syndicationAssetCount=__syndicationAssetCount;
@property(nonatomic) long long _duplicatePhotoStreamCount; // @synthesize _duplicatePhotoStreamCount=__duplicatePhotoStreamCount;
@property(retain, nonatomic) NSArray *_assets; // @synthesize _assets=__assets;
- (id)allWarningMessageCombinations;	// IMP=0x000000000019d92d
- (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;	// IMP=0x000000000019cd97
- (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inLibraryScopeCount:(long long)arg2 inPhotoStreamCount:(long long)arg3 iniPhotoCount:(long long)arg4 inSomeAlbumCount:(long long)arg5 affectedLocalAlbumsCount:(long long)arg6 itemKindSuffix:(id)arg7 actualDeletionCount:(long long)arg8 syndicationAssetCount:(long long)arg9;	// IMP=0x000000000019c6f1
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 duplicatePhotoStreamCount:(long long)arg2 actualDeletionCount:(long long)arg3;	// IMP=0x000000000019c450
- (id)_cloudSharedWarningTextForAssets:(id)arg1;	// IMP=0x000000000019c224
- (void)getAvalancheDeleteWarning:(id *)arg1 actualDeletionCount:(long long *)arg2 forAssets:(id)arg3;	// IMP=0x000000000019acd6
- (void)getExpungeWarningMessage:(id *)arg1 buttonTitle:(id *)arg2 forAssets:(id)arg3;	// IMP=0x000000000019a9c6
- (void)_getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3;	// IMP=0x000000000019a58e
- (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 duplicatePhotoStreamCount:(long long)arg5 syndicationAssetCount:(long long)arg6 clientName:(id)arg7 style:(long long)arg8;	// IMP=0x000000000019a4bf
- (void)_getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;	// IMP=0x000000000019a25a
- (void)getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;	// IMP=0x000000000019a162
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000019a0f7

@end

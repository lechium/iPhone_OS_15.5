//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCContentArchivable-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class AVURLAsset, FCContentArchive, NFUnfairLock, NSDictionary, NSString, NSURL;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType, FCAVAssetKeyManagerType, FCAVAssetResourceLoaderType;

@interface FCAVAsset : NSObject <NSCopying, FCContentArchivable>
{
    AVURLAsset *_asset;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_assetOptions;	// 24 = 0x18
    NFUnfairLock *_assetLock;	// 32 = 0x20
    id <FCAVAssetCacheType> _assetCache;	// 40 = 0x28
    id <FCAVAssetKeyCacheType> _assetKeyCache;	// 48 = 0x30
    id <FCAVAssetResourceLoaderType> _assetResourceLoader;	// 56 = 0x38
    id <FCAVAssetKeyManagerType> _assetKeyManager;	// 64 = 0x40
    NSURL *_remoteURL;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002ab7d8
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_resetUnderlyingAsset;	// IMP=0x00000000002ab757
@property(readonly, nonatomic) FCContentArchive *contentArchive;
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
- (unsigned long long)hash;	// IMP=0x00000000002aaf09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002aae2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002aae23
- (id)init;	// IMP=0x00000000002aaa06

@end

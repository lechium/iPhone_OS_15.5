//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject
{
    FCAssetHandle *_thumbnailAssetHandle;	// 8 = 0x8
    struct CGSize _thumbnailSize;	// 16 = 0x10
}

+ (id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize)arg2;	// IMP=0x00000000000bc981
- (void).cxx_destruct;	// IMP=0x00000000000bca66
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;

@end

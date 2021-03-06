//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICStoreFileAssetInfo, NSArray, NSData, NSString, NSURL;

@interface MPStoreFileAssetInfo : NSObject
{
    ICStoreFileAssetInfo *_internalInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051c89
@property(readonly, copy, nonatomic) NSString *playbackAuthorizationToken;
@property(readonly, nonatomic) long long protectionType;
@property(readonly, copy, nonatomic) NSData *md5;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, nonatomic) long long flavorType;
@property(readonly, copy, nonatomic) NSArray *fairPlayInfoList;
@property(readonly, copy, nonatomic) NSString *downloadKey;
@property(readonly, copy, nonatomic) NSURL *assetURL;
- (id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1;	// IMP=0x0000000000051943

@end


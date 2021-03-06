//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PUSessionInfo;

@protocol PUPhotosGridViewSupplementalToolbarDataSource <NSObject>
@property(readonly, nonatomic) PUSessionInfo *sessionInfo;
@property(readonly, nonatomic) NSArray *selectedAssets;
@property(readonly, nonatomic, getter=isAnyAssetSelected) _Bool anyAssetSelected;

@optional
@property(readonly, nonatomic, getter=isAnyAssetDownloading) _Bool anyAssetDownloading;
@end


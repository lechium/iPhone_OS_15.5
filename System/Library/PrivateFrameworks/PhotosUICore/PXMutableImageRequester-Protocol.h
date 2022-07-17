//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXImageRequester, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@protocol PXMutableImageRequester <NSObject>
@property(nonatomic) struct CGSize viewportSize;
@property(nonatomic) struct CGRect desiredContentsRect;
@property(nonatomic) struct CGSize maximumRequestSize;
@property(nonatomic) double scale;
@property(nonatomic) struct CGRect cropRect;
@property(nonatomic) struct CGSize contentSize;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
@property(retain, nonatomic) id <PXUIImageProvider> mediaProvider;
- (void)handlePreloadedImageRequester:(PXImageRequester *)arg1;
- (void)handlePreloadedImage:(UIImage *)arg1;
@end

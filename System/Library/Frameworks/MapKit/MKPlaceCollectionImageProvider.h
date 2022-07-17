//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCacheDelegate-Protocol.h>

@class GEOMapItemPhotoOptions, NSCache, NSMutableDictionary, NSString, geo_isolater;

@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate>
{
    _Bool _isRTL;	// 8 = 0x8
    geo_isolater *_helperQueue;	// 16 = 0x10
    GEOMapItemPhotoOptions *_optionsForCollectionCells;	// 24 = 0x18
    GEOMapItemPhotoOptions *_optionsForCityBricks;	// 32 = 0x20
    NSCache *_gradientImagesCache;	// 40 = 0x28
    NSCache *_downloadedImagesCache;	// 48 = 0x30
    double _screenScale;	// 56 = 0x38
    NSMutableDictionary *_downloadOperationsPair;	// 64 = 0x40
    NSMutableDictionary *_gradientOperationsPair;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000000170bd8
- (void).cxx_destruct;	// IMP=0x00000000001740db
@property(retain, nonatomic) NSMutableDictionary *gradientOperationsPair; // @synthesize gradientOperationsPair=_gradientOperationsPair;
@property(retain, nonatomic) NSMutableDictionary *downloadOperationsPair; // @synthesize downloadOperationsPair=_downloadOperationsPair;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) NSCache *downloadedImagesCache; // @synthesize downloadedImagesCache=_downloadedImagesCache;
@property(retain, nonatomic) NSCache *gradientImagesCache; // @synthesize gradientImagesCache=_gradientImagesCache;
@property(readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCityBricks; // @synthesize optionsForCityBricks=_optionsForCityBricks;
@property(readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCollectionCells; // @synthesize optionsForCollectionCells=_optionsForCollectionCells;
@property(retain, nonatomic) geo_isolater *helperQueue; // @synthesize helperQueue=_helperQueue;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x0000000000173f48
- (id)joeColorForCompactCollection:(id)arg1 usingCarouselContext:(long long)arg2;	// IMP=0x0000000000173d91
- (_Bool)isJoeColorManuallyCuratedForCuratedCollection:(id)arg1;	// IMP=0x0000000000173d20
- (id)joeColorForCuratedCollection:(id)arg1;	// IMP=0x0000000000173b8f
- (long long)photoTypeForImageSource:(long long)arg1;	// IMP=0x0000000000173b80
- (id)photoInfoWithPhoto:(id)arg1 desiredSize:(struct CGSize)arg2;	// IMP=0x0000000000173ae7
- (id)photoInfoWithPhoto:(id)arg1 desiredSize:(struct CGSize)arg2 usingOptions:(id)arg3;	// IMP=0x0000000000173acf
- (struct CGSize)desiredSizeFromFrameSize:(struct CGSize)arg1;	// IMP=0x0000000000173a5c
- (void)cancelAllOperationsForCompactImageSource:(long long)arg1;	// IMP=0x00000000001738f0
- (void)cancelAllOperationsForImageSource:(long long)arg1;	// IMP=0x00000000001736ed
- (void)loadCoverImageWithGuideLocation:(id)arg1 size:(struct CGSize)arg2 usingImageSource:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000172ac8
- (void)loadGradientCoverImageWithCuratedCollection:(id)arg1 size:(struct CGSize)arg2 contentSizeCategory:(id)arg3 usingImageSource:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000171258
- (_Bool)requiresGradientOperationForSource:(long long)arg1;	// IMP=0x0000000000171207
- (void)checkQueuesForCompactCollectionSource:(long long)arg1;	// IMP=0x00000000001710d8
- (void)checkQueuesForCollectionSource:(long long)arg1;	// IMP=0x0000000000170df8
- (id)init;	// IMP=0x0000000000170c2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

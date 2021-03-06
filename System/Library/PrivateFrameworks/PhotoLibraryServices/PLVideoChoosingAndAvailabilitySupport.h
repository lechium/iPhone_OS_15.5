//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol PLVideoChoosingAssetInformation, PLVideoChoosingOptions, PLVideoResourceContext;

@interface PLVideoChoosingAndAvailabilitySupport : NSObject
{
    NSMutableArray *_resourcesNeedingRepair;	// 8 = 0x8
    id <PLVideoResourceContext> _context;	// 16 = 0x10
    id <PLVideoChoosingAssetInformation> _assetInformation;	// 24 = 0x18
    id <PLVideoChoosingOptions> _options;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000575968
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <PLVideoChoosingOptions> options; // @synthesize options=_options;
@property(readonly, nonatomic) id <PLVideoChoosingAssetInformation> assetInformation; // @synthesize assetInformation=_assetInformation;
@property(readonly, nonatomic) id <PLVideoResourceContext> context; // @synthesize context=_context;
- (id)chooseResourceWithLoadingMode:(long long *)arg1 needsAdjustmentData:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000574ef9
- (long long)_optimalLoadingModeForResource:(id)arg1;	// IMP=0x0000000000574de0
- (_Bool)_checkIsReallyLocallyAvailableAndAddToRepairListIfNeeded:(id)arg1;	// IMP=0x0000000000574d25
- (id)_ensureOriginalsAreHighestQuality:(id)arg1;	// IMP=0x0000000000574b04
- (unsigned int)_videoQualityLevelForRequestFallbackToMediumPolicy:(long long *)arg1;	// IMP=0x00000000005748c3
- (id)_acceptableResourceVersions;	// IMP=0x0000000000574817
@property(readonly, nonatomic) NSArray *resourcesNeedingRepair;
- (id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(struct CGSize)arg4;	// IMP=0x0000000000574707

@end


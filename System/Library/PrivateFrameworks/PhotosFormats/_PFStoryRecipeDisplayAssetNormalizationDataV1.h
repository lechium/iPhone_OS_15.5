//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosFormats/_PFStoryRecipeDisplayAssetNormalizationData-Protocol.h>

@class NSDictionary, NSString;

@interface _PFStoryRecipeDisplayAssetNormalizationDataV1 : NSObject <_PFStoryRecipeDisplayAssetNormalizationData>
{
    CDStruct_3de61c9d _data;	// 8 = 0x8
}

+ (id)limits;	// IMP=0x0000000000019437
@property(readonly, nonatomic) NSDictionary *smartColorProperties;
@property(readonly, nonatomic) NSDictionary *highKeyProperties;
@property(readonly, nonatomic) NSDictionary *smartToneProperties;
@property(readonly, nonatomic) NSDictionary *tempTintProperties;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) long long version;
@property(readonly, nonatomic) const CDStruct_3de61c9d *sliderNetPackedData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000187e1
@property(readonly) unsigned long long hash;
- (id)initWithSliderNetPackedDataV1:(const CDStruct_3de61c9d *)arg1;	// IMP=0x0000000000018772

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

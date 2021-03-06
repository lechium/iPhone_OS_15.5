//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PAMediaConversionServiceDefaultImageMetadataPolicy
{
    float _lossyCompressionQuality;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019a3d
+ (id)policyWithLossyCompressionQuality:(float)arg1;	// IMP=0x0000000000019a09
+ (id)standardPolicy;	// IMP=0x000000000001990c
@property float lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001953c
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0000000000019534
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000194de
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019458
- (id)initWithLossyCompressionQuality:(float)arg1;	// IMP=0x0000000000019402
- (id)init;	// IMP=0x00000000000193e8

@end


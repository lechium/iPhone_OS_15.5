//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (MaterialKitAdditions)
+ (_Bool)mt_canUseContinuousCornersWithMaskCornerRadius:(double)arg1 boundsSize:(struct CGSize)arg2;	// IMP=0x0000000000003bd5
+ (id)mt_shadowTemplateImageWithAttributes:(CDStruct_b48b9fb5)arg1 maskCornerRadius:(double)arg2 continuousCorners:(_Bool)arg3 resizableCapInsets:(CDStruct_d2b197d1 *)arg4;	// IMP=0x0000000000003af3
+ (struct UIEdgeInsets)mt_edgeOutsetsForShadowProperties:(CDStruct_b48b9fb5)arg1;	// IMP=0x0000000000003a3c
+ (id)mt_resizableShadowTemplateImageWithAttributes:(CDStruct_b48b9fb5)arg1 maskCornerRadius:(double)arg2 continuousCorners:(_Bool)arg3;	// IMP=0x0000000000003c0d
- (id)mt_imageWithDefaultShadowAttributesForUserIntefaceStyle:(long long)arg1;	// IMP=0x0000000000004323
- (id)_mt_imageWithShadowWithAttributes:(CDStruct_b48b9fb5)arg1 userIntefaceStyle:(long long)arg2;	// IMP=0x0000000000003eec
@end


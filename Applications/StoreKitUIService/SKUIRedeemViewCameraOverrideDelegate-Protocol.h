//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemCameraViewControllerDelegate-Protocol.h"

@class SKUIRedeemCameraViewController;

@protocol SKUIRedeemViewCameraOverrideDelegate <SKUIRedeemCameraViewControllerDelegate>

@optional
- (void)overrideIPadRedeemCamera:(SKUIRedeemCameraViewController *)arg1 completion:(void (^)(SKUIRedeem *, NSError *))arg2;
@end


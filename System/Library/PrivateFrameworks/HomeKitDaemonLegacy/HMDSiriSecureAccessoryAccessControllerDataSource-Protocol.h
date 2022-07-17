//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDSiriSecureAccessoryAccessController;

@protocol HMDSiriSecureAccessoryAccessControllerDataSource
- (_Bool)currentDeviceSupportsSiriUnsecuringActionsWithNoPasscodeForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (_Bool)currentDeviceSupportsSiriUnsecuringActionsWithWatchAuthForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (_Bool)isCurrentDevicePairedWithWatchForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (long long)homeLocationForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
@end

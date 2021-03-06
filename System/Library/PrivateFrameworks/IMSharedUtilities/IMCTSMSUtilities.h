//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCTSMSUtilities : NSObject
{
}

+ (_Bool)IMMessagesFilteringSettingForPreferedSubscription;	// IMP=0x000000000005dc69
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;	// IMP=0x000000000005dc63
+ (void)IMSynchronizeMMSCapabilityToWatch:(_Bool)arg1;	// IMP=0x000000000005dc35
+ (_Bool)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(_Bool)arg3;	// IMP=0x000000000005da7b
+ (_Bool)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005da5f
+ (_Bool)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005da22
+ (_Bool)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005d86e
+ (_Bool)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005d835
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005d7b5
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;	// IMP=0x000000000005d5bb
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;	// IMP=0x000000000005d3c1
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)arg1 cellSize:(unsigned long long *)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;	// IMP=0x000000000005d192
+ (double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;	// IMP=0x000000000005cfdc
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005ceea
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005ccc6
+ (_Bool)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005ccaf
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cc8a
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cc13
+ (_Bool)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cbfc
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cbd7
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cbb5
+ (_Bool)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cbad
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005cae8
+ (_Bool)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005ca3c
+ (_Bool)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005c990
+ (_Bool)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005c979
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;	// IMP=0x000000000005c971
+ (_Bool)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005c969
+ (id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000005c900

@end


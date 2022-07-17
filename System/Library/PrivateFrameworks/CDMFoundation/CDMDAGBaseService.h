//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDMAssetConfig, CDMDynamicConfig, NSString;

@interface CDMDAGBaseService
{
    CDMAssetConfig *assetConfig;	// 24 = 0x18
    NSString *_setupLanguageCode;	// 32 = 0x20
    CDMDynamicConfig *_currentConfig;	// 40 = 0x28
}

+ (id)trialFactorName;	// IMP=0x000000000003eb41
+ (id)assetFolderNames;	// IMP=0x000000000003ea6a
- (void).cxx_destruct;	// IMP=0x000000000003ec35
- (_Bool)isAssetRequired;	// IMP=0x000000000003ec2d
- (id)getAssetConfig;	// IMP=0x000000000003ec18
- (_Bool)isEnabled;	// IMP=0x000000000003ea62
- (id)handleRequestCommandTypeNames;	// IMP=0x000000000003ea4a
- (id)setup:(id)arg1;	// IMP=0x000000000003ea32
- (_Bool)isSetupRerunNeededForRequest:(id)arg1;	// IMP=0x000000000003ea12
- (id)handle:(id)arg1;	// IMP=0x000000000003e9fa
- (void)_handleSetupRequest:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e3e6
- (void)handleCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e282
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000003e112
- (id)supportedCommands;	// IMP=0x000000000003e076

@end

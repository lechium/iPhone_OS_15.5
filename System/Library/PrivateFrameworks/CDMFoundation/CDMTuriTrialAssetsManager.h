//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, TRIClient;

@interface CDMTuriTrialAssetsManager : NSObject
{
    TRIClient *_nlTRIClient;	// 8 = 0x8
    NSArray *_namespaces;	// 16 = 0x10
    NSDictionary *_namespaceToFactors;	// 24 = 0x18
    NSDictionary *_factorToNamespace;	// 32 = 0x20
    NSLocale *_locale;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000054378
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (_Bool)promoteAssetsForFactors:(id)arg1 withFailedFactors:(id)arg2;	// IMP=0x000000000005415c
- (_Bool)promoteAssetsForNamespaces:(id)arg1;	// IMP=0x0000000000053c65
- (_Bool)setAssetsProvisionalForFactors:(id)arg1;	// IMP=0x0000000000053b60
- (_Bool)setAssetsProvisionalForNamespaces:(id)arg1;	// IMP=0x0000000000053676
- (_Bool)registerForFactors:(id)arg1 withAssetsDelegate:(id)arg2;	// IMP=0x000000000005334d
- (void)registerForFactors:(id)arg1 inNamespace:(id)arg2 withAssetsDelegate:(id)arg3;	// IMP=0x0000000000052931
- (id)getNamespacesForFactors:(id)arg1;	// IMP=0x00000000000528dd
- (_Bool)areFactorsValid:(id)arg1;	// IMP=0x00000000000526ed
- (id)filterFactors:(id)arg1 forNamespaces:(id)arg2;	// IMP=0x000000000005245e
- (id)filterFactors:(id)arg1 forNamespace:(id)arg2;	// IMP=0x00000000000522c5
- (id)getFactorNamesInNamespace:(id)arg1;	// IMP=0x000000000005201f
- (id)convertToFactorToNamespace:(id)arg1;	// IMP=0x0000000000051d4a
- (id)generateNamespaceToFactorsMapping:(id)arg1;	// IMP=0x0000000000051b28
- (id)getAbsolutePathForServiceTrialFactor:(id)arg1;	// IMP=0x0000000000051945
- (_Bool)isTrialAssetValidForSystemLocale:(id)arg1;	// IMP=0x0000000000051665
- (_Bool)isTrialAssetValid:(id)arg1;	// IMP=0x00000000000515a9
- (id)getDirectoryFactorPath:(id)arg1 inNamespace:(id)arg2;	// IMP=0x000000000005106a
- (void)fetchCompatibilityVersionForNamespace:(id)arg1;	// IMP=0x0000000000050f55
- (void)fetchCompatibilityVersion;	// IMP=0x0000000000050dfb
- (void)fetchRolloutStatusForNamespace:(id)arg1;	// IMP=0x0000000000050c35
- (void)fetchRolloutStatus;	// IMP=0x0000000000050adb
- (void)refreshTRIClient;	// IMP=0x0000000000050a85
- (void)initTRIClient;	// IMP=0x0000000000050a04
- (id)initWithLocale:(id)arg1 forNamespaces:(id)arg2;	// IMP=0x0000000000050806
- (id)initWithLocale:(id)arg1 forNamespace:(id)arg2;	// IMP=0x000000000005073a

@end


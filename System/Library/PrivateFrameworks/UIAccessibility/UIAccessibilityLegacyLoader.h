//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIAccessibilityLegacyLoader
{
}

+ (id)_accessibilityBundlesForBundle:(id)arg1;	// IMP=0x0000000000067720
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;	// IMP=0x0000000000067366
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;	// IMP=0x0000000000066e54
+ (_Bool)_accessibilityShouldSortBundlesBeforeLoading;	// IMP=0x0000000000066e4c
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;	// IMP=0x0000000000066cbc
+ (void)_accessibilityLoadSubbundles:(id)arg1;	// IMP=0x00000000000668b7
+ (id)_axBundleForBundle:(id)arg1;	// IMP=0x000000000006626b
+ (void)loadExtendedAccessibilityBundles;	// IMP=0x0000000000065d23
+ (void)initialize;	// IMP=0x0000000000065b8e

@end


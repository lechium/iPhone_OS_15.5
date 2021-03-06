//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppInstallPredicates : NSObject
{
}

+ (id)predicateForInstallFromSource:(long long)arg1 bundleID:(id)arg2 itemID:(id)arg3 error:(id *)arg4;	// IMP=0x002000000026b8b0
+ (id)predicateForActiveBootstrapWithSourceType:(long long)arg1;	// IMP=0x001000000026b79e
+ (id)restoreHardFailures;	// IMP=0x001000000026b599
+ (id)pendingRestoreSoftFailures;	// IMP=0x001000000026b41e
+ (id)pendingInstalls;	// IMP=0x001000000026b2d3
+ (id)pendingBootstrap;	// IMP=0x001000000026b188
+ (id)pendingRestoreMetadataLookup;	// IMP=0x001000000026b03f
+ (id)knownMDMInstalls;	// IMP=0x001000000026afcc
+ (id)activeRestores;	// IMP=0x001000000026ae43
+ (id)activeInstalls;	// IMP=0x001000000026adca

@end


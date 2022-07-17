//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSLookup.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupTask : AMSLookup
{
    NSArray *_identifiers;	// 8 = 0x8
    NSArray *_bundleIdentifiers;	// 16 = 0x10
    NSString *_storefrontCountryCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000049a4a
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049753
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;	// IMP=0x000000000004969f
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000495e1
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2;	// IMP=0x00000000000494f7
- (id)init;	// IMP=0x00000000000493de
- (id)callerID;	// IMP=0x00000000000492e8
- (id)sharedBag;	// IMP=0x000000000004920f

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSHRNSupport : NSObject
{
}

+ (id)vendorIDFromVendorName:(id)arg1 seedData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000cd606
+ (void)setFeatureFlagOverride:(_Bool)arg1;	// IMP=0x00000000000cd600
+ (void)setActivationRecordOverride:(_Bool)arg1;	// IMP=0x00000000000cd5fa
+ (void)setActivationRecordOverrideNil;	// IMP=0x00000000000cd5f4
+ (void)invalidateCache;	// IMP=0x00000000000cd5ee
+ (_Bool)deviceConfiguredForHRN;	// IMP=0x00000000000cd5e6

@end


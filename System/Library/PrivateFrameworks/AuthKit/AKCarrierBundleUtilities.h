//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject
{
    CoreTelephonyClient *_telephonyClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000001c3fa
- (void).cxx_destruct;	// IMP=0x000000000001cdc5
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000001cd04
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001c44f
- (id)init;	// IMP=0x000000000001c338

@end


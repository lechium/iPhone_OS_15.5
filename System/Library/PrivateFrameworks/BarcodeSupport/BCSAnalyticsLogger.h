//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BCSAnalyticsLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedLogger;	// IMP=0x00000000000118a8
- (void).cxx_destruct;	// IMP=0x00000000000121cf
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;	// IMP=0x0000000000012102
- (void)logBarcodeActivatedEventForAction:(id)arg1;	// IMP=0x00000000000120af
- (void)logBarcodeDetectedEventForAction:(id)arg1 fromBundleID:(id)arg2;	// IMP=0x0000000000012002
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2;	// IMP=0x0000000000011fee
- (id)_eventPayloadForAction:(id)arg1;	// IMP=0x0000000000011d1c
- (id)_stringForDataType:(long long)arg1;	// IMP=0x0000000000011c73
- (id)_stringForCodeType:(long long)arg1;	// IMP=0x0000000000011c57
- (void)_sendEventLazyWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000011ad2
- (void)didScanNFCTagOfType:(long long)arg1;	// IMP=0x00000000000119fa
- (void)didActivateNFCReader;	// IMP=0x00000000000119da
- (id)_initWithQueue:(id)arg1;	// IMP=0x000000000001195c

@end


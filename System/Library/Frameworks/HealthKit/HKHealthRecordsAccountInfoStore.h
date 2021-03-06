//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x000000000010077c
- (void).cxx_destruct;	// IMP=0x0000000000100912
- (id)remoteInterface;	// IMP=0x000000000010089e
- (id)exportedInterface;	// IMP=0x0000000000100894
- (void)connectionInvalidated;	// IMP=0x000000000010088e
- (void)determineMedicalRecordsAccountInfoStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000010078e
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000100686
- (id)init;	// IMP=0x000000000010060c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


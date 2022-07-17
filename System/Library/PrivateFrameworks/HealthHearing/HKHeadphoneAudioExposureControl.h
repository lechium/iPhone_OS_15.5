//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthHearing/HKHeadphoneAudioExposureControlClient-Protocol.h>
#import <HealthHearing/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKHeadphoneAudioExposureControl : NSObject <_HKXPCExportable, HKHeadphoneAudioExposureControlClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x0000000000005724
- (void).cxx_destruct;	// IMP=0x0000000000005736
- (void)overrideDoseLimit:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000055cf
- (void)fetchDoseLimitInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000054b9
- (void)insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(_Bool)arg4 synced:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000052bd
- (void)fetchInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000051a7
- (void)rebuildWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000506b
- (id)remoteInterface;	// IMP=0x0000000000005061
- (id)exportedInterface;	// IMP=0x0000000000005057
- (void)connectionInvalidated;	// IMP=0x0000000000005051
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000004f48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

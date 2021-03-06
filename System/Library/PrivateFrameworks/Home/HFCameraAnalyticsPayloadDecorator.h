//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HFCameraAnalyticsPayloadDecorator : NSObject <HFHomeManagerObserver>
{
    NSMutableDictionary *_additionalPayload;	// 8 = 0x8
}

+ (id)sharedDecorator;	// IMP=0x0000000000121c92
- (void).cxx_destruct;	// IMP=0x000000000012246b
@property(retain, nonatomic) NSMutableDictionary *additionalPayload; // @synthesize additionalPayload=_additionalPayload;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;	// IMP=0x000000000012243b
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;	// IMP=0x00000000001223ec
- (void)_updateHomeInformation:(id)arg1;	// IMP=0x0000000000121f57
- (id)decoratePayload:(id)arg1;	// IMP=0x0000000000121eae
- (void)_initialiseAdditionalPayloadForNewHome;	// IMP=0x0000000000121e11
- (void)_initialiseAdditionalPayload;	// IMP=0x0000000000121dff
- (id)init;	// IMP=0x0000000000121ce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


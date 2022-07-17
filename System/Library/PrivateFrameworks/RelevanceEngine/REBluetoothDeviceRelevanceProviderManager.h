//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REBluetoothDeviceRelevanceProviderManagerProperties-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString;

@interface REBluetoothDeviceRelevanceProviderManager <REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties>
{
    _Bool _connectedToCar;	// 8 = 0x8
    _Bool _connectedToSpeaker;	// 9 = 0x9
}

+ (_Bool)_wantsSeperateRelevanceQueue;	// IMP=0x00000000000cd904
+ (Class)_relevanceProviderClass;	// IMP=0x00000000000cd8f3
+ (id)_features;	// IMP=0x00000000000cd861
@property(readonly, nonatomic) _Bool connectedToSpeaker;
@property(readonly, nonatomic) _Bool connectedToCar;
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x00000000000cdb07
- (void)_prepareForUpdate;	// IMP=0x00000000000cda65
- (void)pause;	// IMP=0x00000000000cda12
- (void)resume;	// IMP=0x00000000000cd9bf
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x00000000000cd90c
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000cd817

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

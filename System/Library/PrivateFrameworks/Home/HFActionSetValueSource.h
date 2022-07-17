//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>
#import <Home/HFLightProfileValueSource-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class HFItemBuilder, HMActionSet, NSString;
@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding;

@interface HFActionSetValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource>
{
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;	// 8 = 0x8
    HMActionSet *_actionSet;	// 16 = 0x10
    id <HFActionSetValueSourceDelegate> _delegate;	// 24 = 0x18
}

+ (id)na_identity;	// IMP=0x00000000001a4adf
- (void).cxx_destruct;	// IMP=0x00000000001a4d3c
@property(nonatomic) __weak id <HFActionSetValueSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a4c0e
- (id)_valueForCurrentStateCharacteristic:(id)arg1;	// IMP=0x00000000001a4803
- (_Bool)_isCurrentStateCharacteristic:(id)arg1;	// IMP=0x00000000001a470c
- (id)_targetValueForCharacteristic:(id)arg1;	// IMP=0x00000000001a41f4
- (id)_actionForCharacteristic:(id)arg1;	// IMP=0x00000000001a403e
- (id)_existingActionBuilderForMediaProfile:(id)arg1;	// IMP=0x00000000001a3e27
- (id)_existingActionBuilderForCharacteristic:(id)arg1;	// IMP=0x00000000001a3c71
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;	// IMP=0x00000000001a397a
- (id)mediaProfileContainerForRouteID:(id)arg1;	// IMP=0x00000000001a382d
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;	// IMP=0x00000000001a37e1
- (_Bool)hasPendingWritesForRouteID:(id)arg1;	// IMP=0x00000000001a37d9
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(_Bool)arg2;	// IMP=0x00000000001a37d3
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;	// IMP=0x00000000001a37cb
- (void)mediaValueUpdated:(id)arg1 playbackState:(long long)arg2 playbackArchive:(id)arg3;	// IMP=0x00000000001a363f
- (void)commitTransactionWithReason:(id)arg1;	// IMP=0x00000000001a3639
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;	// IMP=0x00000000001a3633
- (id)cachedValueForCharacteristic:(id)arg1;	// IMP=0x00000000001a3621
- (id)writeValuesForCharacteristics:(id)arg1;	// IMP=0x00000000001a2a21
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;	// IMP=0x00000000001a26bb
- (id)readValuesForCharacteristics:(id)arg1;	// IMP=0x00000000001a2539
- (id)initWithActionSet:(id)arg1;	// IMP=0x00000000001a24d1
- (id)initWithActionSetBuilder:(id)arg1;	// IMP=0x00000000001a2469
- (id)_existingActionBuilderForLightProfile:(id)arg1;	// IMP=0x0000000000046973
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046960
- (id)writeNaturalLightEnabledState:(_Bool)arg1 forProfile:(id)arg2;	// IMP=0x0000000000046507
- (_Bool)isNaturalLightingEnabledForProfile:(id)arg1;	// IMP=0x0000000000046395
- (_Bool)isNaturalLightingSupportedForProfile:(id)arg1;	// IMP=0x000000000004624f

// Remaining properties
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDHAPAccessoryReader-Protocol.h>
#import <HomeKitDaemon/HMDHAPAccessoryWriter-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;

@interface HMDHAPAccessoryReaderWriter : NSObject <HMFLogging, HMDHAPAccessoryReader, HMDHAPAccessoryWriter>
{
    HMDHAPAccessoryTaskTracker *_tracker;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHAPAccessoryReaderWriterDataSource> _dataSource;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000b596bb
- (void).cxx_destruct;	// IMP=0x0000000000b59110
@property(readonly) id <HMDHAPAccessoryReaderWriterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDHAPAccessoryTaskTracker *tracker; // @synthesize tracker=_tracker;
- (id)logIdentifier;	// IMP=0x0000000000b59058
- (CDUnknownBlockType)_completionHandlerWithContext:(id)arg1;	// IMP=0x0000000000b58fce
- (_Bool)_isPrimaryResidentDevice;	// IMP=0x0000000000b58f8a
- (_Bool)_isSecondaryResidentDevice;	// IMP=0x0000000000b58f2f
- (_Bool)_isNotResidentDevice;	// IMP=0x0000000000b58eec
- (_Bool)_cannotForwardMessage:(id)arg1;	// IMP=0x0000000000b58ed0
- (void)submitWriteRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000b58ade
- (id)_defaultTaskForCurrentDeviceWithContext:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000b588cc
- (void)submitReadRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000b584c2
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg1;	// IMP=0x0000000000b58147
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000b5809b
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000b58037

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

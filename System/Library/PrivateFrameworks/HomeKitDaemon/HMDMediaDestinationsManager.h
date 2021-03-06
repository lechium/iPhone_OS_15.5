//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMediaDestinationManager-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationsMessageHandlerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationsMessageHandlerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaDestinationMessageHandler, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;

@interface HMDMediaDestinationsManager : HMFObject <HMDMediaDestinationsMessageHandlerDelegate, HMFLogging, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationManager>
{
    HMMediaDestination *_destination;	// 8 = 0x8
    HMDMediaDestinationMessageHandler *_messageHandler;	// 16 = 0x10
    id <HMDMediaDestinationsManagerDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaDestinationsManagerDelegate> _delegate;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000005716a
+ (id)deriveAudioGroupIdentifierFromDestinations:(id)arg1;	// IMP=0x0000000000057080
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1;	// IMP=0x0000000000056ec5
- (void).cxx_destruct;	// IMP=0x0000000000056809
@property __weak id <HMDMediaDestinationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) HMMediaDestination *destination; // @synthesize destination=_destination;
- (id)logIdentifier;	// IMP=0x0000000000056722
- (id)attributeDescriptions;	// IMP=0x0000000000056656
- (id)privateDescription;	// IMP=0x0000000000056644
- (void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3;	// IMP=0x0000000000056545
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x0000000000056417
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x00000000000562e9
- (_Bool)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2;	// IMP=0x00000000000562a1
- (_Bool)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2;	// IMP=0x000000000005619a
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x000000000005606b
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x0000000000055f58
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000055e18
- (id)dataSourceTargetAccessory;	// IMP=0x0000000000055cf7
- (id)dataSourceAssociatedDestinationManagers;	// IMP=0x0000000000055bd6
- (id)dataSourceAssociatedDestinations;	// IMP=0x0000000000055b7f
- (id)defaultDestination;	// IMP=0x0000000000055ace
- (id)deriveAudioDestination;	// IMP=0x00000000000558c6
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000055475
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000055023
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) NSUUID *identifier;
- (void)refreshDestination;	// IMP=0x0000000000054cdc
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000054adc
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000005496e
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000054844
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000054746

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


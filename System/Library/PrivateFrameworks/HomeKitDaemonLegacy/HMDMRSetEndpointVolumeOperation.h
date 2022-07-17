//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFObject-Protocol.h>

@class NSArray, NSError, NSNumber, NSString;
@protocol HMDMPCAssistantDiscovery, HMDMRSetEndpointVolumeOperationExternalObjectInterface;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFLogging, HMFObject>
{
    NSNumber *_volume;	// 8 = 0x8
    NSArray *_routeIDs;	// 16 = 0x10
    NSError *_partialExecutionError;	// 24 = 0x18
    id <HMDMPCAssistantDiscovery> _discovery;	// 32 = 0x20
    id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000024932b
+ (id)shortDescription;	// IMP=0x000000000024931e
- (void).cxx_destruct;	// IMP=0x0000000000247283
@property(readonly) id <HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(retain, nonatomic) id <HMDMPCAssistantDiscovery> discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) NSError *partialExecutionError; // @synthesize partialExecutionError=_partialExecutionError;
@property(readonly, copy, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)setVolumeOnEndpoint:(id)arg1 outputDeviceUID:(id)arg2;	// IMP=0x0000000000246c42
- (id)getVolumeCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2;	// IMP=0x000000000024699f
- (id)connectToEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000246708
- (id)discoverRemoteControlEndpointsForUIDs:(id)arg1;	// IMP=0x0000000000246524
- (_Bool)cancelOnSetup;	// IMP=0x0000000000245f75
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg1;	// IMP=0x0000000000245454
- (void)main;	// IMP=0x00000000002451ef
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2;	// IMP=0x000000000024516b
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2 externalObjectInterface:(id)arg3;	// IMP=0x0000000000245016

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

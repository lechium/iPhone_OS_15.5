//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, RMSubscribedStatusKeyPathUpdater;
@protocol RMClientCapabilitiesControllerDelegate;

@interface RMClientCapabilitiesController : NSObject
{
    NSDictionary *_clientCapabilitiesVersionHashByChannelType;	// 8 = 0x8
    RMSubscribedStatusKeyPathUpdater *_subscribedStatusUpdater;	// 16 = 0x10
    id <RMClientCapabilitiesControllerDelegate> _delegate;	// 24 = 0x18
}

+ (void)start;	// IMP=0x00200000000109a0
+ (id)sharedController;	// IMP=0x00100000000107f7
- (void).cxx_destruct;	// IMP=0x0020000000010eb1
@property(nonatomic) __weak id <RMClientCapabilitiesControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RMSubscribedStatusKeyPathUpdater *subscribedStatusUpdater; // @synthesize subscribedStatusUpdater=_subscribedStatusUpdater;
@property(readonly, nonatomic) NSDictionary *clientCapabilitiesVersionHashByChannelType; // @synthesize clientCapabilitiesVersionHashByChannelType=_clientCapabilitiesVersionHashByChannelType;
- (id)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000010d10
@property(readonly, nonatomic) NSSet *supportedKeyPaths;
- (void)_notifyChangesIfNeeded;	// IMP=0x0010000000010a08
- (id)initWithClientCapabilitiesVersionHashByChannelType:(id)arg1 subscribedStatusKeyPathUpdater:(id)arg2;	// IMP=0x00100000000108fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

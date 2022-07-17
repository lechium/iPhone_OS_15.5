//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTApplicationListingServiceRequests-Protocol.h>
#import <DVTInstrumentsFoundation/DTApplicationWorkspaceClient-Protocol.h>

@class NSString;

@interface DTApplicationListingService : DTXService <DTApplicationWorkspaceClient, DTApplicationListingServiceRequests>
{
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x000000000006b64f
- (void)unregisterUpdateToken:(id)arg1;	// IMP=0x000000000006b8ba
- (id)installedApplicationsMatching:(id)arg1 registerUpdateToken:(id)arg2;	// IMP=0x000000000006b738
- (void)_sendNotification:(id)arg1 install:(_Bool)arg2;	// IMP=0x000000000006b6a1
- (void)applicationUninstalled:(id)arg1;	// IMP=0x000000000006b68d
- (void)applicationInstalled:(id)arg1;	// IMP=0x000000000006b676

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

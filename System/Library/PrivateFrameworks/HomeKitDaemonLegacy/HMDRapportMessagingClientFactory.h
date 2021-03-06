//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDRapportMessagingClientFactory-Protocol.h>

@class NSString;

@interface HMDRapportMessagingClientFactory : NSObject <HMDRapportMessagingClientFactory>
{
}

- (id)newRapportDeviceClientWrapperWithClient:(id)arg1;	// IMP=0x00000000008bab93
- (id)newCompanionLinkClient;	// IMP=0x00000000008bab82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNetworkAvailabilityObserver-Protocol.h>

@class NSString;

@interface AFConnectionAvailabilityObserver : NSObject <AFNetworkAvailabilityObserver>
{
}

- (void)networkAvailability:(id)arg1 isAvailable:(_Bool)arg2;	// IMP=0x0000000000004393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

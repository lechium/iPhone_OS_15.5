//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface EKVirtualConferenceProvider : NSObject <NSExtensionRequestHandling>
{
}

- (void)invalidateURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baca
- (void)extendExpirationOfURL:(id)arg1 toExpirationDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001baba
- (void)isURLValid:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baaa
- (void)fetchVirtualConferenceForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011f3ff
- (void)fetchAvailableRoomTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f3b0
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000001b7a4
- (id)init;	// IMP=0x000000000001b6d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

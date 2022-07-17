//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class INControlHomeIntent, NSArray, NSString;

@interface HMDAssistantIntent : NSObject <HMFLogging>
{
    NSArray *_homeKitObjects;	// 8 = 0x8
    INControlHomeIntent *_intent;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000071840e
- (void).cxx_destruct;	// IMP=0x000000000071834c
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;	// IMP=0x000000000071814d
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;	// IMP=0x0000000000717fb9
- (id)_getObjectsWithUUID;	// IMP=0x0000000000717e08
- (void)_handleIntentRequestMessage:(id)arg1;	// IMP=0x0000000000717856
- (void)performWithGather:(id)arg1 message:(id)arg2;	// IMP=0x00000000007177d1
- (id)initWithIntent:(id)arg1;	// IMP=0x0000000000717766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

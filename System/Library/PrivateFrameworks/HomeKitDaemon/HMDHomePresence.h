//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, HMDHome, NSArray, NSDictionary, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>
{
    HMDHome *_home;	// 8 = 0x8
    NSDictionary *_userPresenceMap;	// 16 = 0x10
    HMDDevice *_lastUpdateByDevice;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000894643
- (void).cxx_destruct;	// IMP=0x0000000000894091
@property(readonly, nonatomic) HMDDevice *lastUpdateByDevice; // @synthesize lastUpdateByDevice=_lastUpdateByDevice;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x0000000000893ece
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x0000000000893d48
- (_Bool)isPresenceRegionKnownForUser:(id)arg1;	// IMP=0x0000000000893a85
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x00000000008937f6
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x0000000000893567
@property(readonly, nonatomic) _Bool hasPresenceRegionForAllUsers;
- (_Bool)isAnyUserAtHome;	// IMP=0x000000000089311c
- (_Bool)isNoUserAtHome;	// IMP=0x0000000000892ef5
- (id)attributeDescriptions;	// IMP=0x0000000000892de0
- (id)logIdentifier;	// IMP=0x0000000000892d04
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000892bf7
- (id)serializedIdentifierDictionary;	// IMP=0x0000000000892aec
- (id)serializedUUIDDictionary;	// IMP=0x00000000008929e1
@property(readonly, nonatomic) NSArray *authorizedUsers;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;	// IMP=0x0000000000892670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

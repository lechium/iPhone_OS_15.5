//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SubscriptionAssertion : NSManagedObject
{
}

+ (id)statusTypeIdentifierKeyPath;	// IMP=0x000000000003138c
+ (id)channelIdentifierKeyPath;	// IMP=0x000000000003137f
+ (id)applicationIdentifierKeyPath;	// IMP=0x0000000000031372
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x00000000000314cd
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x0000000000031433
+ (id)predicateForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000031399
+ (id)fetchRequest;	// IMP=0x000000000003fd16

// Remaining properties
@property(copy, nonatomic) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end


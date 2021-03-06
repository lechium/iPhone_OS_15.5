//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, NSURL, RMAuthenticationCredential, RMCommandPayload, RMConduitConfig;

@interface RMManagementSource : NSManagedObject
{
}

+ (id)fetchRequestWithAccountIdentifier:(id)arg1;	// IMP=0x0020000000046e1b
+ (id)fetchRequestWithIdentifier:(id)arg1;	// IMP=0x0010000000046d74
+ (id)fetchRequestWithDeviceChannel;	// IMP=0x0010000000046cf1
+ (id)fetchRequestWithBootstrapURI:(id)arg1 channelType:(short)arg2;	// IMP=0x0010000000046c3c
+ (id)fetchRequestWithBootstrapURI:(id)arg1;	// IMP=0x0010000000046b95
- (id)reportDetails;	// IMP=0x0020000000046ec2
- (void)awakeFromInsert;	// IMP=0x0010000000046b00

// Remaining properties
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(retain, nonatomic) NSSet *activations; // @dynamic activations;
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(retain, nonatomic) RMAuthenticationCredential *authenticationCredential; // @dynamic authenticationCredential;
@property(copy, nonatomic) NSURL *bootstrapURI; // @dynamic bootstrapURI;
@property(nonatomic) short channelType; // @dynamic channelType;
@property(retain, nonatomic) RMCommandPayload *command; // @dynamic command;
@property(retain, nonatomic) RMConduitConfig *conduitConfig; // @dynamic conduitConfig;
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enrolled; // @dynamic enrolled;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *management; // @dynamic management;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *personaIdentifier; // @dynamic personaIdentifier;
@property(retain, nonatomic) NSSet *statusSubscriptions; // @dynamic statusSubscriptions;
@property(copy, nonatomic) NSString *storeDescription; // @dynamic storeDescription;
@property(retain, nonatomic) NSSet *subscribedStatusKeyPaths; // @dynamic subscribedStatusKeyPaths;
@property(readonly) Class superclass;

@end


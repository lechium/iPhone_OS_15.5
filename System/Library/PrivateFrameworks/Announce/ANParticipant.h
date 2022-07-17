//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/ANCompanionMessage-Protocol.h>
#import <Announce/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>
{
    _Bool _isAccessory;	// 8 = 0x8
    _Bool _isEndpoint;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSString *_rapportID;	// 24 = 0x18
    NSString *_idsID;	// 32 = 0x20
    NSString *_homeKitID;	// 40 = 0x28
    NSString *_homeKitUserID;	// 48 = 0x30
    NSString *_userID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000294e
- (void).cxx_destruct;	// IMP=0x0000000000002d8e
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isEndpoint; // @synthesize isEndpoint=_isEndpoint;
@property(nonatomic) _Bool isAccessory; // @synthesize isAccessory=_isAccessory;
@property(retain, nonatomic) NSString *homeKitUserID; // @synthesize homeKitUserID=_homeKitUserID;
@property(retain, nonatomic) NSString *homeKitID; // @synthesize homeKitID=_homeKitID;
@property(retain, nonatomic) NSString *idsID; // @synthesize idsID=_idsID;
@property(retain, nonatomic) NSString *rapportID; // @synthesize rapportID=_rapportID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002a94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002956
- (id)messageForCompanion;	// IMP=0x00000000000028d1
- (id)message;	// IMP=0x0000000000002756
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000000025b0
- (void)clearIdentifiers;	// IMP=0x000000000000250b
- (id)copy;	// IMP=0x000000000000237d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000207b
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *info;
- (id)initWithSender:(id)arg1;	// IMP=0x0000000000001d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

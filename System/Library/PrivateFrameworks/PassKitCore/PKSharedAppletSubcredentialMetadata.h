//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredentialMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _localDevice;	// 8 = 0x8
    _Bool _revoked;	// 9 = 0x9
    NSString *_recipientIdentifier;	// 16 = 0x10
    NSString *_recipientHandle;	// 24 = 0x18
    NSUUID *_sharingSessionIdentifier;	// 32 = 0x20
    NSString *_groupIdentifier;	// 40 = 0x28
    PKAppletSubcredentialEntitlement *_entitlement;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032a59e
+ (id)metadataWithSharingRequest:(id)arg1 andInvitationReceipt:(id)arg2;	// IMP=0x000000000032a40d
- (void).cxx_destruct;	// IMP=0x000000000032a994
@property(retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSUUID *sharingSessionIdentifier; // @synthesize sharingSessionIdentifier=_sharingSessionIdentifier;
@property(nonatomic, getter=isRevoked) _Bool revoked; // @synthesize revoked=_revoked;
@property(copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(nonatomic, getter=isLocalDevice) _Bool localDevice; // @synthesize localDevice=_localDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032a811
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032a680
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032a5a6
- (id)description;	// IMP=0x000000000032a533

@end

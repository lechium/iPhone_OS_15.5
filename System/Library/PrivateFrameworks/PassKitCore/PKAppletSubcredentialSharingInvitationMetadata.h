//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding>
{
    _Bool _shouldRequestInvitation;	// 8 = 0x8
    NSString *_anonymizationSalt;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000271961
- (void).cxx_destruct;	// IMP=0x0000000000271aa8
@property(nonatomic) _Bool shouldRequestInvitation; // @synthesize shouldRequestInvitation=_shouldRequestInvitation;
@property(retain, nonatomic) NSString *anonymizationSalt; // @synthesize anonymizationSalt=_anonymizationSalt;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002719dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000271969
- (id)description;	// IMP=0x0000000000271901

@end


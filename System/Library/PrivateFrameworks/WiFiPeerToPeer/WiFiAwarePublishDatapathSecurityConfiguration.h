//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSArray, NSData;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>
{
    NSArray *_pmkList;	// 8 = 0x8
    NSArray *_passphraseList;	// 16 = 0x10
    NSData *_pmkID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009458
- (void).cxx_destruct;	// IMP=0x000000000000a38c
@property(readonly, nonatomic) NSData *pmkID; // @synthesize pmkID=_pmkID;
@property(readonly, nonatomic) NSArray *passphraseList; // @synthesize passphraseList=_passphraseList;
@property(readonly, nonatomic) NSArray *pmkList; // @synthesize pmkList=_pmkList;
- (id)description;	// IMP=0x0000000000009fa1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009d22
- (id)initWithPMK:(id)arg1 andPMKID:(id)arg2;	// IMP=0x0000000000009bff
- (id)initWithPMKList:(id)arg1 passphraseList:(id)arg2;	// IMP=0x0000000000009b37
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009543
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009460

@end


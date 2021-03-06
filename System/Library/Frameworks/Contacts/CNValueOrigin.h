//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedApplicationName;	// 8 = 0x8
    NSString *_donationIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a63f6
- (void).cxx_destruct;	// IMP=0x00000000000a6585
@property(readonly, copy, nonatomic) NSString *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedApplicationName; // @synthesize localizedApplicationName=_localizedApplicationName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a64c3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a63fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a63eb
- (unsigned long long)hash;	// IMP=0x00000000000a6292
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6070
- (id)description;	// IMP=0x00000000000a5f84
- (id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2;	// IMP=0x00000000000a5ebc
- (id)init;	// IMP=0x00000000000a5e7f

@end


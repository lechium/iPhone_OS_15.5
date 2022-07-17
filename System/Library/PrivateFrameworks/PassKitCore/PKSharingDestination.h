//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_destinationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f9c55
- (void).cxx_destruct;	// IMP=0x00000000003f9f89
- (id)_name;	// IMP=0x00000000003f9ebd
- (id)description;	// IMP=0x00000000003f9e36
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f9dd4
- (unsigned long long)hash;	// IMP=0x00000000003f9d6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f9d11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f9cee
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f9c5d
- (id)idsDestination;	// IMP=0x00000000003f9bec
- (id)initWithDestinationIdentifier:(id)arg1;	// IMP=0x00000000003f9b81

@end

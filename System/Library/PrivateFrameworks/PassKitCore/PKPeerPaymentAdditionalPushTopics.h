//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_preferences;	// 8 = 0x8
    NSString *_associatedAccounts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017e64c
- (void).cxx_destruct;	// IMP=0x000000000017e7ce
@property(copy, nonatomic) NSString *associatedAccounts; // @synthesize associatedAccounts=_associatedAccounts;
@property(copy, nonatomic) NSString *preferences; // @synthesize preferences=_preferences;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017e72e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017e654
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017e5bf
- (id)description;	// IMP=0x000000000017e522
- (unsigned long long)hash;	// IMP=0x000000000017e4ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017e428
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017e36c

@end


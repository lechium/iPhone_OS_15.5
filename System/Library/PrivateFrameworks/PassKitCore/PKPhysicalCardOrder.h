//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPhysicalCardOrder : NSObject <NSSecureCoding>
{
    unsigned long long _reason;	// 8 = 0x8
    NSString *_nameOnCard;	// 16 = 0x10
    NSString *_artworkIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c565f
- (void).cxx_destruct;	// IMP=0x00000000001c582d
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c575d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c5667

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSAccountProviderResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_authenticationScheme;	// 8 = 0x8
    NSString *_status;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003593c
- (void).cxx_destruct;	// IMP=0x0000000000035b0d
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
- (id)description;	// IMP=0x0000000000035a7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035a23
- (unsigned long long)hash;	// IMP=0x00000000000359ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003599a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035944
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000358bc
- (id)init;	// IMP=0x0000000000035858

@end


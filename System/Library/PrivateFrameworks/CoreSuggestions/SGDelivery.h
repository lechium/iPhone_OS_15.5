//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SGDelivery <NSSecureCoding>
{
    NSURL *_parentURL;	// 8 = 0x8
    NSString *_externalIdentifier;	// 16 = 0x10
    unsigned long long _provider;	// 24 = 0x18
    NSString *_trackingNumber;	// 32 = 0x20
}

+ (id)deliveryForEntity:(id)arg1 origin:(id)arg2;	// IMP=0x0000000000074c8d
+ (id)deliveryForEntity:(id)arg1 store:(id)arg2;	// IMP=0x0000000000074b06
+ (unsigned long long)providerForString:(id)arg1;	// IMP=0x0000000000074994
+ (id)stringForProvider:(unsigned long long)arg1;	// IMP=0x00000000000748f4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000748ec
- (void).cxx_destruct;	// IMP=0x00000000000748aa
@property(readonly, nonatomic) NSString *trackingNumber; // @synthesize trackingNumber=_trackingNumber;
@property(readonly, nonatomic) unsigned long long provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, nonatomic) NSURL *parentURL; // @synthesize parentURL=_parentURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007478d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007449f
- (id)description;	// IMP=0x0000000000074458
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 parentURL:(id)arg3 provider:(unsigned long long)arg4 trackingNumber:(id)arg5;	// IMP=0x0000000000074031
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074026

@end


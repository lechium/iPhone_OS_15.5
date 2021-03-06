//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSCopying-Protocol.h>
#import <WatchListKit/WLKCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WLKServerConfigurationResponse : NSObject <WLKCoding, NSCopying>
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    unsigned long long _environmentHash;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005e4f
- (void).cxx_destruct;	// IMP=0x00000000000062c4
@property(readonly, nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)_expirationDateFromResponse:(id)arg1;	// IMP=0x00000000000061f8
- (id)_routes;	// IMP=0x00000000000061a1
- (id)_requiredRequestKVPMap;	// IMP=0x000000000000614a
- (id)_VPPAInfo;	// IMP=0x00000000000060f3
- (id)_applicationProperties;	// IMP=0x00000000000060d6
- (id)_userProperties;	// IMP=0x00000000000060b9
- (id)_utskProperties;	// IMP=0x000000000000609c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005fb5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005e57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005dbd
- (id)description;	// IMP=0x0000000000005c80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005a37
- (unsigned long long)hash;	// IMP=0x0000000000005993
- (_Bool)isValidIgnoringExpiration;	// IMP=0x000000000000592e
- (_Bool)isValid;	// IMP=0x000000000000588d
- (id)dictionaryRepresentation;	// IMP=0x0000000000005734
- (id)serverRouteNamed:(id)arg1;	// IMP=0x0000000000005687
- (id)requiredRequestKeyValuePairsForType:(id)arg1;	// IMP=0x0000000000005604
- (id)utsc;	// IMP=0x00000000000055ad
@property(readonly, nonatomic, getter=isActiveUser) _Bool activeUser;
@property(readonly, nonatomic) NSDictionary *features;
@property(readonly, copy, nonatomic) NSString *utsk;
@property(readonly, nonatomic) long long vppaStatus;
@property(readonly, copy, nonatomic) NSNumber *vppaSessionDurationInMillis;
@property(readonly, nonatomic) NSString *vppaStatusString;
@property(readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
- (id)configurationResponseByReplacingUTSK:(id)arg1;	// IMP=0x0000000000005040
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;	// IMP=0x0000000000004f54
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000004e19

@end


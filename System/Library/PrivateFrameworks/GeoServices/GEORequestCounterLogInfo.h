//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000315f21
+ (id)counterLogInfoWithDictionary:(id)arg1;	// IMP=0x0000000000315ed4
- (void).cxx_destruct;	// IMP=0x0000000000317015
- (id)description;	// IMP=0x0000000000316fd4
- (void)_appendFormattedCSVStringTo:(id)arg1;	// IMP=0x0000000000316c67
- (void)_appendFormattedStringTo:(id)arg1;	// IMP=0x00000000003164ab
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) unsigned long long usedInterfaceTypes;
@property(readonly, nonatomic) NSDate *end;
@property(readonly, nonatomic) NSDate *start;
@property(readonly, nonatomic) unsigned long long recvBytes;
@property(readonly, nonatomic) unsigned long long xmitBytes;
@property(readonly, nonatomic) NSString *resultString;
@property(readonly, nonatomic) unsigned char result;
@property(readonly, nonatomic) NSString *requestTypeString;
@property(readonly, nonatomic) CDStruct_d1a7ebee requestType;
@property(readonly, nonatomic) NSString *appID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003160df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003160bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000315f9c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000315f29

@end

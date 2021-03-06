//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSString;

@interface AWDProactiveModelFittingModelInfo : PBCodable <NSCopying>
{
    NSString *_locale;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

+ (id)modelInfoFromPlanId:(id)arg1;	// IMP=0x0000000000010d0c
+ (id)modelInfoFromSessionDescriptor:(id)arg1;	// IMP=0x0000000000010c30
- (void).cxx_destruct;	// IMP=0x00000000000249c7
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000248d5
- (unsigned long long)hash;	// IMP=0x0000000000024868
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000246ac
- (void)copyTo:(id)arg1;	// IMP=0x0000000000024629
- (void)writeTo:(id)arg1;	// IMP=0x00000000000245af
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000245a2
- (id)dictionaryRepresentation;	// IMP=0x00000000000244f8
- (id)description;	// IMP=0x0000000000024449
@property(readonly, nonatomic) _Bool hasLocale;
@property(readonly, nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasName;

@end


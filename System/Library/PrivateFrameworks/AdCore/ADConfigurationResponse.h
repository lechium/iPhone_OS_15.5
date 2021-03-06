//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADConfigurationResponse : PBCodable <NSCopying>
{
    int _bannerProxyType;	// 8 = 0x8
    NSString *_configVersion;	// 16 = 0x10
    NSMutableArray *_theConfigurations;	// 24 = 0x18
    NSString *_resourceConnectProxyURL;	// 32 = 0x20
    NSString *_resourceProxyURL;	// 40 = 0x28
    struct {
        unsigned int bannerProxyType:1;
    } _has;	// 48 = 0x30
}

+ (Class)theConfigurationType;	// IMP=0x000000000000a425
- (void).cxx_destruct;	// IMP=0x000000000000b69a
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property(retain, nonatomic) NSString *resourceProxyURL; // @synthesize resourceProxyURL=_resourceProxyURL;
@property(retain, nonatomic) NSMutableArray *theConfigurations; // @synthesize theConfigurations=_theConfigurations;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000b415
- (unsigned long long)hash;	// IMP=0x000000000000b368
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b20b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000af83
- (void)copyTo:(id)arg1;	// IMP=0x000000000000ae39
- (void)writeTo:(id)arg1;	// IMP=0x000000000000ac79
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000ac6c
- (id)dictionaryRepresentation;	// IMP=0x000000000000a63f
- (id)description;	// IMP=0x000000000000a590
@property(readonly, nonatomic) _Bool hasConfigVersion;
- (int)StringAsBannerProxyType:(id)arg1;	// IMP=0x000000000000a519
- (id)bannerProxyTypeAsString:(int)arg1;	// IMP=0x000000000000a4c4
@property(nonatomic) _Bool hasBannerProxyType;
@property(nonatomic) int bannerProxyType; // @synthesize bannerProxyType=_bannerProxyType;
@property(readonly, nonatomic) _Bool hasResourceConnectProxyURL;
@property(readonly, nonatomic) _Bool hasResourceProxyURL;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000a408
- (unsigned long long)theConfigurationsCount;	// IMP=0x000000000000a3eb
- (void)addTheConfiguration:(id)arg1;	// IMP=0x000000000000a381
- (void)clearTheConfigurations;	// IMP=0x000000000000a364

@end


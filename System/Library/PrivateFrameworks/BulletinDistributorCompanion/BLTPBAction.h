//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying>
{
    int _activationMode;	// 8 = 0x8
    BLTPBAppearance *_appearance;	// 16 = 0x10
    int _behavior;	// 24 = 0x18
    NSData *_behaviorParameters;	// 32 = 0x20
    NSData *_behaviorParametersNulls;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSString *_launchURL;	// 56 = 0x38
    struct {
        unsigned int behavior:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000048426
@property(retain, nonatomic) NSData *behaviorParametersNulls; // @synthesize behaviorParametersNulls=_behaviorParametersNulls;
@property(retain, nonatomic) NSData *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property(nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) int activationMode; // @synthesize activationMode=_activationMode;
@property(retain, nonatomic) BLTPBAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000048235
- (unsigned long long)hash;	// IMP=0x000000000004814b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047fa5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047e5d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000047d71
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047c79
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000047c6c
- (id)dictionaryRepresentation;	// IMP=0x000000000004770c
- (id)description;	// IMP=0x000000000004765d
@property(readonly, nonatomic) _Bool hasBehaviorParametersNulls;
@property(readonly, nonatomic) _Bool hasBehaviorParameters;
@property(nonatomic) _Bool hasBehavior;
@property(readonly, nonatomic) _Bool hasLaunchURL;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

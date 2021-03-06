//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable
{
    NSString *_comment;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSString *_incidentId;	// 24 = 0x18
    NSMutableArray *_screenshots;	// 32 = 0x20
}

+ (Class)screenshotsType;	// IMP=0x002000000007aefe
- (void).cxx_destruct;	// IMP=0x002000000007be05
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007bbb6
- (unsigned long long)hash;	// IMP=0x001000000007bb32
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ba06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007b7c3
- (void)copyTo:(id)arg1;	// IMP=0x001000000007b696
- (void)writeTo:(id)arg1;	// IMP=0x001000000007b4fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007b4f0
- (id)dictionaryRepresentation;	// IMP=0x001000000007afe8
- (id)description;	// IMP=0x001000000007af39
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(readonly, nonatomic) _Bool hasComment;
- (id)screenshotsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007aee1
- (unsigned long long)screenshotsCount;	// IMP=0x001000000007aec4
- (void)addScreenshots:(id)arg1;	// IMP=0x001000000007ae5a
- (void)clearScreenshots;	// IMP=0x001000000007ae3d
@property(readonly, nonatomic) _Bool hasEmail;

@end


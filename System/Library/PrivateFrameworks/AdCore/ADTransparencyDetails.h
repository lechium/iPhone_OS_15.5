//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying>
{
    NSString *_transparencyDetailsUnavailableMessage;	// 8 = 0x8
    NSString *_transparencyRendererPayload;	// 16 = 0x10
    NSString *_transparencyRendererURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000075c8
@property(retain, nonatomic) NSString *transparencyRendererURL; // @synthesize transparencyRendererURL=_transparencyRendererURL;
@property(retain, nonatomic) NSString *transparencyRendererPayload; // @synthesize transparencyRendererPayload=_transparencyRendererPayload;
@property(retain, nonatomic) NSString *transparencyDetailsUnavailableMessage; // @synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000074d6
- (unsigned long long)hash;	// IMP=0x0000000000007469
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007371
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000072ad
- (void)copyTo:(id)arg1;	// IMP=0x000000000000722a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000071b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000071a3
- (id)dictionaryRepresentation;	// IMP=0x0000000000006f72
- (id)description;	// IMP=0x0000000000006ec3
@property(readonly, nonatomic) _Bool hasTransparencyRendererURL;
@property(readonly, nonatomic) _Bool hasTransparencyRendererPayload;
@property(readonly, nonatomic) _Bool hasTransparencyDetailsUnavailableMessage;

@end


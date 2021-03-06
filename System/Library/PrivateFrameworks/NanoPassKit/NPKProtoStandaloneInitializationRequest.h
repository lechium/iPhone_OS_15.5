//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneImageSize, NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneImageSize *_passImageSize;	// 8 = 0x8
    NPKProtoStandaloneImageSize *_passThumbnailImageSize;	// 16 = 0x10
    NPKProtoStandaloneRequestHeader *_requestHeader;	// 24 = 0x18
    NSString *_userLanguageCode;	// 32 = 0x20
    _Bool _useSimulatedFlowController;	// 40 = 0x28
    struct {
        unsigned int useSimulatedFlowController:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000006dbd1
@property(retain, nonatomic) NPKProtoStandaloneImageSize *passThumbnailImageSize; // @synthesize passThumbnailImageSize=_passThumbnailImageSize;
@property(retain, nonatomic) NPKProtoStandaloneImageSize *passImageSize; // @synthesize passImageSize=_passImageSize;
@property(retain, nonatomic) NSString *userLanguageCode; // @synthesize userLanguageCode=_userLanguageCode;
@property(nonatomic) _Bool useSimulatedFlowController; // @synthesize useSimulatedFlowController=_useSimulatedFlowController;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006da25
- (unsigned long long)hash;	// IMP=0x000000000006d975
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d806
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d6f9
- (void)copyTo:(id)arg1;	// IMP=0x000000000006d63b
- (void)writeTo:(id)arg1;	// IMP=0x000000000006d576
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006d569
- (id)dictionaryRepresentation;	// IMP=0x000000000006d099
- (id)description;	// IMP=0x000000000006cfea
@property(readonly, nonatomic) _Bool hasPassThumbnailImageSize;
@property(readonly, nonatomic) _Bool hasPassImageSize;
@property(readonly, nonatomic) _Bool hasUserLanguageCode;
@property(nonatomic) _Bool hasUseSimulatedFlowController;

@end


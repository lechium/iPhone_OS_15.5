//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseReaderModeRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneRequestHeader *_requestHeader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011b29a
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011b21b
- (unsigned long long)hash;	// IMP=0x000000000011b1fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011b164
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011b0ec
- (void)copyTo:(id)arg1;	// IMP=0x000000000011b0c9
- (void)writeTo:(id)arg1;	// IMP=0x000000000011b084
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011b077
- (id)dictionaryRepresentation;	// IMP=0x000000000011ae2c
- (id)description;	// IMP=0x000000000011ad7d

@end


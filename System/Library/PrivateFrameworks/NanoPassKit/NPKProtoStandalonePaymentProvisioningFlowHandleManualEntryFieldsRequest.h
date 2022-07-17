//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_manualEntryFields;	// 8 = 0x8
    NPKProtoStandaloneRequestHeader *_requestHeader;	// 16 = 0x10
}

+ (Class)manualEntryFieldsType;	// IMP=0x000000000000b83c
- (void).cxx_destruct;	// IMP=0x000000000000c49f
@property(retain, nonatomic) NSMutableArray *manualEntryFields; // @synthesize manualEntryFields=_manualEntryFields;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000c2c4
- (unsigned long long)hash;	// IMP=0x000000000000c277
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c1af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bfd6
- (void)copyTo:(id)arg1;	// IMP=0x000000000000befa
- (void)writeTo:(id)arg1;	// IMP=0x000000000000bda5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000bd98
- (id)dictionaryRepresentation;	// IMP=0x000000000000b8fc
- (id)description;	// IMP=0x000000000000b84d
- (id)manualEntryFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000b81f
- (unsigned long long)manualEntryFieldsCount;	// IMP=0x000000000000b802
- (void)addManualEntryFields:(id)arg1;	// IMP=0x000000000000b798
- (void)clearManualEntryFields;	// IMP=0x000000000000b77b

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPasscodeUpgradeFlowShouldExitRequest : PBRequest <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    _Bool _passcodeChanged;	// 16 = 0x10
    _Bool _pending;	// 17 = 0x11
    struct {
        unsigned int passcodeChanged:1;
        unsigned int pending:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000013e688
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool passcodeChanged; // @synthesize passcodeChanged=_passcodeChanged;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013e5bc
- (unsigned long long)hash;	// IMP=0x000000000013e544
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e384
- (void)copyTo:(id)arg1;	// IMP=0x000000000013e2fd
- (void)writeTo:(id)arg1;	// IMP=0x000000000013e26f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013e262
- (id)dictionaryRepresentation;	// IMP=0x000000000013de83
- (id)description;	// IMP=0x000000000013ddd4
@property(nonatomic) _Bool hasPending;
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasPasscodeChanged;

@end


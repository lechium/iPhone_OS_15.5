//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBShowDialogEvent : PBCodable <NSCopying>
{
    NSString *_automationType;	// 8 = 0x8
    NSString *_dialogType;	// 16 = 0x10
    NSString *_dismissalType;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_presentationStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000346a4f
@property(retain, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(retain, nonatomic) NSString *dismissalType; // @synthesize dismissalType=_dismissalType;
@property(retain, nonatomic) NSString *presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSString *dialogType; // @synthesize dialogType=_dialogType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003468e4
- (unsigned long long)hash;	// IMP=0x0000000000346841
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003466e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003465c9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000346506
- (void)writeTo:(id)arg1;	// IMP=0x0000000000346452
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000346445
- (id)dictionaryRepresentation;	// IMP=0x000000000034634d
- (id)description;	// IMP=0x000000000034629e
@property(readonly, nonatomic) _Bool hasAutomationType;
@property(readonly, nonatomic) _Bool hasDismissalType;
@property(readonly, nonatomic) _Bool hasPresentationStyle;
@property(readonly, nonatomic) _Bool hasDialogType;
@property(readonly, nonatomic) _Bool hasKey;

@end


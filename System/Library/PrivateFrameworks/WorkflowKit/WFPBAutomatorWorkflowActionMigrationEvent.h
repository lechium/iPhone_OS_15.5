//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBAutomatorWorkflowActionMigrationEvent : PBCodable <NSCopying>
{
    NSString *_automatorActionIdentifier;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    CDStruct_c267e6e8 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000002f9524
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *automatorActionIdentifier; // @synthesize automatorActionIdentifier=_automatorActionIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f9458
- (unsigned long long)hash;	// IMP=0x00000000002f93e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f92e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f9224
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f91a1
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f911f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f9112
- (id)dictionaryRepresentation;	// IMP=0x00000000002f902b
- (id)description;	// IMP=0x00000000002f8f7c
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasAutomatorActionIdentifier;
@property(readonly, nonatomic) _Bool hasKey;

@end


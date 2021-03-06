//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying>
{
    NSString *_actionIdentifier;	// 8 = 0x8
    NSString *_automationType;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSString *_runSource;	// 32 = 0x20
    NSString *_shortcutSource;	// 40 = 0x28
    _Bool _completed;	// 48 = 0x30
    _Bool _didRunRemotely;	// 49 = 0x31
    struct {
        unsigned int completed:1;
        unsigned int didRunRemotely:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000335bef
@property(nonatomic) _Bool didRunRemotely; // @synthesize didRunRemotely=_didRunRemotely;
@property(retain, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(retain, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000335a31
- (unsigned long long)hash;	// IMP=0x0000000000335935
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000335750
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003355f6
- (void)copyTo:(id)arg1;	// IMP=0x00000000003354ef
- (void)writeTo:(id)arg1;	// IMP=0x00000000003353ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003353e0
- (id)dictionaryRepresentation;	// IMP=0x0000000000335226
- (id)description;	// IMP=0x0000000000335177
@property(nonatomic) _Bool hasDidRunRemotely;
@property(readonly, nonatomic) _Bool hasAutomationType;
@property(readonly, nonatomic) _Bool hasShortcutSource;
@property(readonly, nonatomic) _Bool hasActionIdentifier;
@property(nonatomic) _Bool hasCompleted;
@property(readonly, nonatomic) _Bool hasRunSource;
@property(readonly, nonatomic) _Bool hasKey;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMTriggerCondition, NSMutableArray, NSString;

@interface ICIAMMessageRule : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_requiredApplicationContextBundleIdentifier;	// 16 = 0x10
    int _ruleOperator;	// 24 = 0x18
    NSMutableArray *_subrules;	// 32 = 0x20
    ICIAMTriggerCondition *_triggerCondition;	// 40 = 0x28
    NSString *_triggerEventName;	// 48 = 0x30
    int _type;	// 56 = 0x38
    struct {
        unsigned int ruleOperator:1;
        unsigned int type:1;
    } _has;	// 60 = 0x3c
}

+ (Class)subrulesType;	// IMP=0x000000000011efb4
- (void).cxx_destruct;	// IMP=0x000000000011eb85
@property(retain, nonatomic) NSString *requiredApplicationContextBundleIdentifier; // @synthesize requiredApplicationContextBundleIdentifier=_requiredApplicationContextBundleIdentifier;
@property(retain, nonatomic) NSString *triggerEventName; // @synthesize triggerEventName=_triggerEventName;
@property(retain, nonatomic) ICIAMTriggerCondition *triggerCondition; // @synthesize triggerCondition=_triggerCondition;
@property(retain, nonatomic) NSMutableArray *subrules; // @synthesize subrules=_subrules;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011e89d
- (unsigned long long)hash;	// IMP=0x000000000011e7b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011e5ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e344
- (void)copyTo:(id)arg1;	// IMP=0x000000000011e1ba
- (void)writeTo:(id)arg1;	// IMP=0x000000000011dfbf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011dfb2
- (id)dictionaryRepresentation;	// IMP=0x000000000011dbbb
- (id)description;	// IMP=0x000000000011db0c
@property(readonly, nonatomic) _Bool hasRequiredApplicationContextBundleIdentifier;
@property(readonly, nonatomic) _Bool hasTriggerEventName;
@property(readonly, nonatomic) _Bool hasTriggerCondition;
- (id)subrulesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011dab0
- (unsigned long long)subrulesCount;	// IMP=0x000000000011da93
- (void)addSubrules:(id)arg1;	// IMP=0x000000000011da29
- (void)clearSubrules;	// IMP=0x000000000011da0c
- (int)StringAsRuleOperator:(id)arg1;	// IMP=0x000000000011d9aa
- (id)ruleOperatorAsString:(int)arg1;	// IMP=0x000000000011d955
@property(nonatomic) _Bool hasRuleOperator;
@property(nonatomic) int ruleOperator; // @synthesize ruleOperator=_ruleOperator;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000011d88f
- (id)typeAsString:(int)arg1;	// IMP=0x000000000011d83a
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

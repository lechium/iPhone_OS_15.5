//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeContent-Protocol.h>

@class NSArray, NSString, _INPBHomeFilter;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_actions;	// 8 = 0x8
    _INPBHomeFilter *_filter;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000133a1
+ (Class)actionsType;	// IMP=0x0000000000013390
- (void).cxx_destruct;	// IMP=0x000000000001313e
@property(retain, nonatomic) _INPBHomeFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)dictionaryRepresentation;	// IMP=0x0000000000012e95
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012b8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012acc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012a3a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001293b
- (void)writeTo:(id)arg1;	// IMP=0x000000000001279b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001278e
@property(readonly, nonatomic) _Bool hasFilter;
- (id)actionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000012748
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActions:(id)arg1;	// IMP=0x00000000000126b1
- (void)clearActions;	// IMP=0x0000000000012694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


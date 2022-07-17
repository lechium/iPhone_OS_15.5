//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGTitleSpecPeopleArgument
{
    unsigned long long _type;	// 8 = 0x8
    NSSet *_personNodes;	// 16 = 0x10
}

+ (id)argumentWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2;	// IMP=0x0000000000395d83
+ (id)argumentWithPeopleType:(unsigned long long)arg1;	// IMP=0x0000000000395d4d
- (void).cxx_destruct;	// IMP=0x0000000000395d3a
@property(readonly) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)_personNodesWithMomentNodes:(id)arg1;	// IMP=0x0000000000395b45
- (id)_personTitleWithFeature:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000395951
- (id)_personTitleWithMomentNodes:(id)arg1;	// IMP=0x000000000039587a
- (id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3;	// IMP=0x00000000003956e3
- (id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;	// IMP=0x0000000000395675
- (id)_birthdayTitleWithMomentNodes:(id)arg1;	// IMP=0x00000000003954ee
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;	// IMP=0x0000000000394fec
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;	// IMP=0x0000000000394f00
- (id)initWithPeopleType:(unsigned long long)arg1;	// IMP=0x0000000000394ebc
- (id)_initWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2;	// IMP=0x0000000000394e5a

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Fitness/FIDictionaryRepresentable-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface FIIntervalWorkoutDefinition : NSObject <FIDictionaryRepresentable>
{
    NSString *_name;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSArray *_sets;	// 24 = 0x18
}

+ (id)intervalWorkoutDefinition;	// IMP=0x0000000000013fc3
+ (id)definitionFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013961
- (void).cxx_destruct;	// IMP=0x00000000000149e1
@property(readonly, nonatomic) NSArray *sets; // @synthesize sets=_sets;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)byRemovingIntervalDefinitionAtIndexPath:(id)arg1;	// IMP=0x00000000000148c9
- (id)byReplacingIntervalDefinitionAtIndexPath:(id)arg1 withIntervalDefinition:(id)arg2;	// IMP=0x00000000000147a7
- (id)byInsertingIntervalDefinition:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000001468a
- (id)byAddingIntervalDefinition:(id)arg1 toSetIndex:(unsigned long long)arg2;	// IMP=0x00000000000145aa
- (id)byRemovingSetDefinitionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000144b6
- (id)byReplacingSetDefinitionAtIndex:(unsigned long long)arg1 withSetDefinition:(id)arg2;	// IMP=0x0000000000014394
- (id)byInsertingSetDefinition:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000014272
- (id)byAddingSetDefinition:(id)arg1;	// IMP=0x0000000000014176
- (id)byChangingName:(id)arg1;	// IMP=0x00000000000140c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000013e51
- (id)intervalDefinitionForIntervalAtIndex:(long long)arg1;	// IMP=0x00000000000137c2
@property(readonly, nonatomic) unsigned long long intervalCount; // @dynamic intervalCount;
- (id)initWithName:(id)arg1 identifier:(id)arg2 sets:(id)arg3;	// IMP=0x00000000000135d7

@end

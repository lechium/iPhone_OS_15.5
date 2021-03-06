//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface NLXSchemaCDMNLContext
{
    NSArray *_activeTasks;	// 8 = 0x8
    NSArray *_executedTasks;	// 16 = 0x10
    NSArray *_salientEntities;	// 24 = 0x18
    NSArray *_systemDialogActs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007b686
@property(copy, nonatomic) NSArray *systemDialogActs; // @synthesize systemDialogActs=_systemDialogActs;
@property(copy, nonatomic) NSArray *salientEntities; // @synthesize salientEntities=_salientEntities;
@property(copy, nonatomic) NSArray *executedTasks; // @synthesize executedTasks=_executedTasks;
@property(copy, nonatomic) NSArray *activeTasks; // @synthesize activeTasks=_activeTasks;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007ae5e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007ada0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007a481
- (unsigned long long)hash;	// IMP=0x000000000007a3fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079f41
- (void)writeTo:(id)arg1;	// IMP=0x0000000000079b84
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000079106
- (id)systemDialogActsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000790e9
- (unsigned long long)systemDialogActsCount;	// IMP=0x00000000000790cc
- (void)addSystemDialogActs:(id)arg1;	// IMP=0x0000000000079052
- (void)deleteSystemDialogActs;	// IMP=0x0000000000079040
- (void)clearSystemDialogActs;	// IMP=0x0000000000079023
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000079006
- (unsigned long long)salientEntitiesCount;	// IMP=0x0000000000078fe9
- (void)addSalientEntities:(id)arg1;	// IMP=0x0000000000078f6f
- (void)deleteSalientEntities;	// IMP=0x0000000000078f5d
- (void)clearSalientEntities;	// IMP=0x0000000000078f40
- (id)executedTasksAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078f23
- (unsigned long long)executedTasksCount;	// IMP=0x0000000000078f06
- (void)addExecutedTasks:(id)arg1;	// IMP=0x0000000000078e8c
- (void)deleteExecutedTasks;	// IMP=0x0000000000078e7a
- (void)clearExecutedTasks;	// IMP=0x0000000000078e5d
- (id)activeTasksAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078e40
- (unsigned long long)activeTasksCount;	// IMP=0x0000000000078e23
- (void)addActiveTasks:(id)arg1;	// IMP=0x0000000000078da9
- (void)deleteActiveTasks;	// IMP=0x0000000000078d97
- (void)clearActiveTasks;	// IMP=0x0000000000078d7a
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000334f59
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000334f21

@end


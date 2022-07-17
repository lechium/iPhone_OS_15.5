//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, MISSING_TYPE, NSData;
@protocol PQLInjecting;

@interface CPLPrequeliteTodoVar
{
    NSData *_setHasCompletedGenerationSQL;	// 8 = 0x8
    id <PQLInjecting> _hasSomethingTodoConstantInjection;	// 16 = 0x10
    NSData *_hasSomethingTodoSQL;	// 24 = 0x18
    id <PQLInjecting> _setHasSomethingTodo;	// 32 = 0x20
    CPLPrequeliteVariable *_currentGenerationVar;	// 40 = 0x28
    CPLPrequeliteVariable *_targetGenerationVar;	// 48 = 0x30
    CPLPrequeliteVariable *_lastCompletionDateVar;	// 56 = 0x38
    CPLPrequeliteVariable *_expirationIntervalVar;	// 64 = 0x40
}

+ (id)todoVariableWithName:(id)arg1 defaultExpirationInterval:(double)arg2;	// IMP=0x00400000000643e7
+ (id)todoVariableWithName:(id)arg1;	// IMP=0x00100000000643d2
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000064f90
@property(readonly, nonatomic) CPLPrequeliteVariable *expirationIntervalVar; // @synthesize expirationIntervalVar=_expirationIntervalVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *lastCompletionDateVar; // @synthesize lastCompletionDateVar=_lastCompletionDateVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *targetGenerationVar; // @synthesize targetGenerationVar=_targetGenerationVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *currentGenerationVar; // @synthesize currentGenerationVar=_currentGenerationVar;
@property(readonly, nonatomic) id <PQLInjecting> setHasSomethingTodo; // @synthesize setHasSomethingTodo=_setHasSomethingTodo;
- (id)setHasCompletedGeneration:(long long)arg1 now:(id)arg2;	// IMP=0x0010000000064e83
- (id)hasSomethingTodoNow:(id)arg1;	// IMP=0x0010000000064def
- (id)setHasCompletedGeneration:(long long)arg1;	// IMP=0x0010000000064d84
@property(readonly, nonatomic) id <PQLInjecting> hasSomethingTodo;
- (id)initWithName:(id)arg1 defaultExpirationInterval:(double)arg2;	// IMP=0x0010000000064442

@end

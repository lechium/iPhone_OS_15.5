//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TMLMetaContext, TMLMetaObject;

@interface TMLParser : NSObject
{
    TMLMetaContext *_context;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSString *_lastIdent;	// 24 = 0x18
    _Bool _methodDeclaration;	// 32 = 0x20
    NSString *_declarationType;	// 40 = 0x28
    NSMutableSet *_declarationAttributes;	// 48 = 0x30
    NSString *_methodSelector;	// 56 = 0x38
    NSMutableArray *_activeTokens;	// 64 = 0x40
    TMLMetaObject *_activeObject;	// 72 = 0x48
    NSMutableArray *_objectStack;	// 80 = 0x50
    NSString *_filename;	// 88 = 0x58
    unsigned int _lineNo;	// 96 = 0x60
    NSString *_basePath;	// 104 = 0x68
    NSMutableDictionary *_macros;	// 112 = 0x70
    NSMutableSet *_preprocessorMacros;	// 120 = 0x78
    NSMutableSet *_functionIdentifiers;	// 128 = 0x80
    _Bool _lookaheadInFunction;	// 136 = 0x88
    NSString *_lookaheadCurrentIdent;	// 144 = 0x90
    _Bool _lookaheadOnly;	// 152 = 0x98
    _Bool _lookaheadComplete;	// 153 = 0x99
    _Bool _strict;	// 154 = 0x9a
    NSString *_error;	// 160 = 0xa0
}

+ (_Bool)isBuiltinObject:(id)arg1;	// IMP=0x0000000000025864
+ (id)unescapeString:(id)arg1;	// IMP=0x000000000002573f
+ (id)previousNonSpaceToken:(id)arg1;	// IMP=0x0000000000025683
+ (id)varsInCurrentScope:(id)arg1;	// IMP=0x00000000000244c4
+ (id)transformBreakpoints:(id)arg1 lineNo:(int)arg2 filename:(id)arg3;	// IMP=0x0000000000024223
+ (id)transformObjectCreation:(id)arg1;	// IMP=0x0000000000023907
+ (id)transformAccessors:(id)arg1;	// IMP=0x0000000000022f57
+ (id)transformFunction:(id)arg1;	// IMP=0x00000000000227a6
- (void).cxx_destruct;	// IMP=0x000000000002597b
@property(nonatomic) _Bool strict; // @synthesize strict=_strict;
@property(readonly, nonatomic) NSString *error; // @synthesize error=_error;
- (id)compileFunction:(id)arg1 bodyOnly:(_Bool)arg2 localVars:(id)arg3;	// IMP=0x00000000000246d3
- (id)compileFunction:(id)arg1 bodyOnly:(_Bool)arg2;	// IMP=0x00000000000246be
- (id)compileExpression:(id)arg1;	// IMP=0x00000000000217cc
- (void)commitMethod;	// IMP=0x0000000000021347
- (void)commitSignal;	// IMP=0x0000000000020f32
- (void)commitMacro;	// IMP=0x000000000002079f
- (void)commitPragma;	// IMP=0x000000000001fcb6
- (void)commitFunction;	// IMP=0x000000000001fb34
- (void)commitImplements;	// IMP=0x000000000001fa48
- (void)commitInitializer;	// IMP=0x000000000001f8c9
- (void)commitProperty;	// IMP=0x000000000001ec75
- (void)commitObject;	// IMP=0x000000000001ea6c
- (unsigned long long)blockValueDepth;	// IMP=0x000000000001e96a
- (void)addToken:(unsigned long long)arg1 text:(const char *)arg2;	// IMP=0x000000000001e804
- (_Bool)consumeToken:(unsigned long long)arg1 text:(const char *)arg2;	// IMP=0x000000000001d631
- (void)teardown;	// IMP=0x000000000001d5a0
- (void)setup;	// IMP=0x000000000001d4bd
- (_Bool)parseTokens:(id)arg1 startingLine:(unsigned long long)arg2;	// IMP=0x000000000001d134
- (_Bool)parseFunctionLookaheadWithString:(id)arg1 basePath:(id)arg2 filename:(id)arg3;	// IMP=0x000000000001ce4d
- (_Bool)parseFunctionLookaheadWithFile:(id)arg1;	// IMP=0x000000000001cb32
- (_Bool)parseString:(id)arg1 basePath:(id)arg2 filename:(id)arg3;	// IMP=0x000000000001c7ae
- (_Bool)parseString:(id)arg1 basePath:(id)arg2;	// IMP=0x000000000001c799
- (_Bool)parseString:(id)arg1;	// IMP=0x000000000001c785
- (_Bool)parseFile:(id)arg1;	// IMP=0x000000000001c3c1
- (void)addPreprocessorMacro:(id)arg1;	// IMP=0x000000000001c352
- (id)initWithContext:(id)arg1;	// IMP=0x000000000001c2e0

@end

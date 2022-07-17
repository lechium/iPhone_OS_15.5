//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/NSPredicateVisitor-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor>
{
    NSMutableDictionary *_filter;	// 8 = 0x8
    NSMutableDictionary *_pids;	// 16 = 0x10
    NSMutableDictionary *_processes;	// 24 = 0x18
    NSMutableDictionary *_processImagePaths;	// 32 = 0x20
    NSMutableDictionary *_subsystems;	// 40 = 0x28
    NSMutableDictionary *_categories;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002e841
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000002e840
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000002e83f
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000002e7ee
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x000000000002e727
- (unsigned long long)flagsForPredicate:(id)arg1;	// IMP=0x000000000002e6f8
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x000000000002e4fc
- (void)addCategory:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002e3e0
- (void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002e2c4
- (void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002e1a8
- (void)addProcess:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002e08c
- (void)addProcessID:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002df52
@property(readonly, nonatomic) NSData *data;
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000002dda0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSPredicate, _CDContextualKeyPath, _DKEvent;

@protocol BMCoreDuetMediaUsageStore
- (_Bool)saveKnowledgeEvent:(_DKEvent *)arg1 error:(id *)arg2;
- (NSArray *)removeObjectsMatchingPredicate:(NSPredicate *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (_Bool)addContextValue:(id)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
@end


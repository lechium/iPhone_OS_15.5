//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EMSearchableIndexQueryGenerator-Protocol.h>

@class NSString;

@interface _EMCompoundQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>
{
}

- (long long)operandFromPredicate:(id)arg1;	// IMP=0x0000000000078dd8
- (id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3;	// IMP=0x0000000000078990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


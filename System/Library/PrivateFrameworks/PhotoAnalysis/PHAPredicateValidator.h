//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PHAPredicateValidator : NSObject
{
    NSSet *_allowedKeyPaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027454
@property(retain) NSSet *allowedKeyPaths; // @synthesize allowedKeyPaths=_allowedKeyPaths;
- (_Bool)validateValue:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027096
- (_Bool)validateExpression:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026f28
- (_Bool)validatePredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026c6f

@end

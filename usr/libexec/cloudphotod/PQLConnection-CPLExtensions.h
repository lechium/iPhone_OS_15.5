//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@interface PQLConnection (CPLExtensions)
+ (id)cplInjectionFor:(id)arg1 isNotInIndexSet:(id)arg2;	// IMP=0x0010000000046e39
+ (id)cplInjectionFor:(id)arg1 isInIndexSet:(id)arg2;	// IMP=0x0010000000046dc6
- (_Bool)cplRegisterIndexSetMatch;	// IMP=0x0020000000046d20
- (_Bool)_cplRegisterDeterministicFunction:(id)arg1 nArgs:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046b29
- (id)cplFetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0010000000046a88
- (id)cplFetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x00100000000469e7
- (id)cplFetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x001000000004694a
- (id)cplFetch:(id)arg1;	// IMP=0x00100000000468a6
- (_Bool)cplExecute:(id)arg1;	// IMP=0x0010000000046802
- (id)lastCPLError;	// IMP=0x0010000000046732
@end


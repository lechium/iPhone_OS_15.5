//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _RESwizzleInterface : NSObject
{
}

+ (id)_configuredObjects;	// IMP=0x00000000000b69e7
- (void)_re_swizzled_relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b73f3
- (void)_re_swizzled_relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b72b8
- (void)_re_swizzled_gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b71a4
- (void)_re_swizzled_fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7090
- (void)_re_swizzled_fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6f7c
- (void)_re_swizzled_availableRelevanceEngines:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6e9a
- (void)_re_swizzled_relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b6d31
- (void)_re_swizzled_relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b6bf6
- (void)_re_runAfterEngineIsLoaded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6a4c

@end


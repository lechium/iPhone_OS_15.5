//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface HRInternalStateProvider : NSObject
{
    MISSING_TYPE *accountStore;	// 8 = 0x8
    MISSING_TYPE *conceptStore;	// 16 = 0x10
    MISSING_TYPE *healthRecordsStore;	// 24 = 0x18
    MISSING_TYPE *healthExperienceStore;	// 32 = 0x20
    MISSING_TYPE *recordCounts;	// 72 = 0x48
    MISSING_TYPE *sub;	// 80 = 0x50
    MISSING_TYPE *loadState;	// 88 = 0x58
    MISSING_TYPE *changeHandler;	// 112 = 0x70
    MISSING_TYPE *isObserving;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000139c20
- (id)init;	// IMP=0x000000000013cf20
- (void)fetchJSONWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013b4c0
- (void)dealloc;	// IMP=0x0000000000139c00
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000139ab0
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000001399d0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityMergeConflict
{
    NSDictionary *_ancestorSnapshot;	// 8 = 0x8
}

@property(retain) NSDictionary *ancestorSnapshot; // @synthesize ancestorSnapshot=_ancestorSnapshot;
- (void)dealloc;	// IMP=0x000000000026d793
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;	// IMP=0x000000000026d75c

@end

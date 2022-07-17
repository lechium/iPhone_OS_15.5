//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNAutocompleteProbeProvider;

@interface CNAutocompleteUsageMonitor : NSObject
{
    id <CNAutocompleteProbeProvider> _probeProvider;	// 8 = 0x8
}

+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;	// IMP=0x000000000000518f
+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;	// IMP=0x000000000000510c
- (void).cxx_destruct;	// IMP=0x00000000000056f0
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
- (void)userSawNumberOfResults:(unsigned long long)arg1 forBatch:(unsigned long long)arg2 includingNumberOfSuggestions:(unsigned long long)arg3 forRequest:(id)arg4;	// IMP=0x00000000000055ce
- (void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;	// IMP=0x00000000000054c5
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;	// IMP=0x00000000000052b6
- (id)initWithProbeProvider:(id)arg1;	// IMP=0x000000000000524b
- (id)init;	// IMP=0x00000000000051f1

@end

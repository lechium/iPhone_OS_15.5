//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SPZKWSearchQueryTask
{
    NSArray *_mutableSections;	// 8 = 0x8
    unsigned long long _queryID;	// 16 = 0x10
}

+ (int)maxSuggestedApps;	// IMP=0x00000000000024aa
+ (void)initialize;	// IMP=0x0000000000002246
- (void).cxx_destruct;	// IMP=0x00000000000033c7
@property unsigned long long queryID; // @synthesize queryID=_queryID;
- (id)unsafeSessionEntityString;	// IMP=0x000000000000339d
- (id)unsafeSections;	// IMP=0x0000000000003378
- (void)start;	// IMP=0x0000000000002528
- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;	// IMP=0x0000000000002280

@end


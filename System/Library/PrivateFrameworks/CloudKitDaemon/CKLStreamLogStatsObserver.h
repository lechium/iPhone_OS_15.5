//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver
{
    NSMutableDictionary *_totalSizeByLine;	// 8 = 0x8
    NSMutableDictionary *_totalCountByLine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000697a1
@property(retain) NSMutableDictionary *totalCountByLine; // @synthesize totalCountByLine=_totalCountByLine;
@property(retain) NSMutableDictionary *totalSizeByLine; // @synthesize totalSizeByLine=_totalSizeByLine;
- (void)finish;	// IMP=0x0000000000068f68
- (void)eventMatched:(id)arg1;	// IMP=0x0000000000068d1d
- (id)initWithLogTypes:(unsigned long long)arg1;	// IMP=0x0000000000068c9a

@end

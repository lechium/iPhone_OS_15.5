//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADCapData.h>

@interface ADCapData (GenericSession)
- (id)clickCountByLineMaxClickElements:(unsigned long long)arg1 expirationClickThreshold:(double)arg2;	// IMP=0x000000000000d74b
- (id)impressionCountByLineWithMaxFrequencyElements:(unsigned long long)arg1 expirationFrequencyThreshold:(double)arg2;	// IMP=0x000000000000d5a1
- (void)cleanDownloadArrayWithMaxClickElements:(unsigned long long)arg1 expirationClickThreshold:(double)arg2;	// IMP=0x000000000000d441
- (id)clickCountByLine;	// IMP=0x000000000000ea29
- (id)impressionCountByLine;	// IMP=0x000000000000e7f9
- (void)cleanDownloadArray;	// IMP=0x000000000000e613
@end


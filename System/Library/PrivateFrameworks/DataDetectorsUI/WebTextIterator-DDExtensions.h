//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WebTextIterator.h>

@interface WebTextIterator (DDExtensions)
+ (id)dd_iteratorForDocument:(id)arg1;	// IMP=0x0000000000026c50
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(_Bool *)arg5 relevantResults:(id *)arg6 URLificationBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000025785
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2;	// IMP=0x00000000000251e7
- (struct __DDScanQuery *)dd_newQueryStopRange:(id *)arg1;	// IMP=0x0000000000024f62
- (_Bool)dd_checkCurrentRangeAgainstString:(struct __CFString *)arg1;	// IMP=0x0000000000026d36
@end

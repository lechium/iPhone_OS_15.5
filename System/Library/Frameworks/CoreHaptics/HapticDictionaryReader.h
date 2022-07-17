//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001aa28
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001a529
- (id)parseParam:(id)arg1;	// IMP=0x000000000001a03d
- (id)parseEventParams:(id)arg1;	// IMP=0x0000000000019bb7
- (id)parseEvent:(id)arg1;	// IMP=0x00000000000190c8
- (_Bool)parseEventsAndParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018748
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x000000000001818a
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017ae8
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001773d
- (id)readPatternID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000174b3

@end

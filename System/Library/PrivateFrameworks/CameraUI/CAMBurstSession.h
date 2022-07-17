//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject
{
    _Bool _finalized;	// 8 = 0x8
    unsigned long long _estimatedCount;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    CIBurstImageSet *__burstImageSet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c3ec4
@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
@property(nonatomic, getter=_isFinalized, setter=_setFinalized:) _Bool finalized; // @synthesize finalized=_finalized;
@property(nonatomic, setter=_setCount:) unsigned long long count; // @synthesize count=_count;
@property(nonatomic, setter=_setEstimatedCount:) unsigned long long estimatedCount; // @synthesize estimatedCount=_estimatedCount;
- (void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2;	// IMP=0x00000000001c3d4d
- (void)addStillImageCaptureResult:(id)arg1;	// IMP=0x00000000001c3c62
- (id)performBurstAnalysisForDevice:(long long)arg1;	// IMP=0x00000000001c3b25
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;	// IMP=0x00000000001c39fb
- (id)init;	// IMP=0x00000000001c398c

@end

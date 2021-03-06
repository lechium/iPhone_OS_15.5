//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSProgress, NSString;

@interface ODRTagsRequest : NSObject
{
    double _lastEnhancedProgressReport;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    NSMutableDictionary *_tagRequests;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005dbb0
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly) NSString *logKey; // @synthesize logKey=_logKey;
- (void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned long long)arg3;	// IMP=0x001000000005d66e
- (id)initWithProgress:(id)arg1;	// IMP=0x001000000005d57a

@end


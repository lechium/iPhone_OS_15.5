//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCCaptionsTranscriptionSegment-Protocol.h>

@class NSString;

@interface AVCCaptionsToken : NSObject <VCCaptionsTranscriptionSegment>
{
    NSString *_text;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    struct _NSRange _range;	// 24 = 0x18
}

@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;	// IMP=0x000000000025439e
- (void)dealloc;	// IMP=0x0000000000254340
- (id)initWithText:(id)arg1 confidence:(double)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000254249

@end


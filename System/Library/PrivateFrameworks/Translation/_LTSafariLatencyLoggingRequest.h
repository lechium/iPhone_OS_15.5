//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/_LTLoggingRequest-Protocol.h>

@class NSDictionary, NSString, _LTLocalePair;

@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest>
{
    _LTLocalePair *_localePair;	// 8 = 0x8
    double _start;	// 16 = 0x10
    double _firstResponse;	// 24 = 0x18
    double _firstParagraphComplete;	// 32 = 0x20
    double _progressComplete;	// 40 = 0x28
    double _pageComplete;	// 48 = 0x30
    NSString *_processName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d89c
- (void).cxx_destruct;	// IMP=0x000000000001dd79
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) double pageComplete; // @synthesize pageComplete=_pageComplete;
@property(readonly, nonatomic) double progressComplete; // @synthesize progressComplete=_progressComplete;
@property(readonly, nonatomic) double firstParagraphComplete; // @synthesize firstParagraphComplete=_firstParagraphComplete;
@property(readonly, nonatomic) double firstResponse; // @synthesize firstResponse=_firstResponse;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(copy, nonatomic) _LTLocalePair *localePair; // @synthesize localePair=_localePair;
@property(readonly, nonatomic) NSDictionary *dict;
- (void)markPageComplete;	// IMP=0x000000000001da92
- (void)markProgressDone;	// IMP=0x000000000001da27
- (void)markFirstParagraphComplete;	// IMP=0x000000000001d9bc
- (void)markResponse;	// IMP=0x000000000001d951
- (id)init;	// IMP=0x000000000001d8a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d6a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

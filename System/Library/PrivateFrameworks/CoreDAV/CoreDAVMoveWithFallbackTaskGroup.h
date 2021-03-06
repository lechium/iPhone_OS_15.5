//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString, NSURL;

@interface CoreDAVMoveWithFallbackTaskGroup
{
    NSURL *_sourceURL;	// 88 = 0x58
    NSURL *_destinationURL;	// 96 = 0x60
    NSString *_previousETag;	// 104 = 0x68
    _Bool _useFallback;	// 112 = 0x70
    int _overwrite;	// 116 = 0x74
    NSData *_dataPayload;	// 120 = 0x78
    NSString *_dataContentType;	// 128 = 0x80
    NSDictionary *_responseHeaders;	// 136 = 0x88
    NSString *_nextETag;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000726ad
@property(readonly, nonatomic) NSString *nextETag; // @synthesize nextETag=_nextETag;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSString *dataContentType; // @synthesize dataContentType=_dataContentType;
@property(retain, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) _Bool useFallback; // @synthesize useFallback=_useFallback;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)_completedPutTask:(id)arg1;	// IMP=0x0000000000071e8a
- (void)_completedMoveTask:(id)arg1;	// IMP=0x00000000000718c8
- (void)startTaskGroup;	// IMP=0x0000000000071588
- (id)description;	// IMP=0x00000000000714a7
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4;	// IMP=0x0000000000071287

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTQssAckResponse;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechStreamingStreamingResponse
{
}

@property(copy, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a1a1
- (id)init;	// IMP=0x000000000012a113

@end

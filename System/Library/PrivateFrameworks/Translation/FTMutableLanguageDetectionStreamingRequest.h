//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTFinishAudio, FTStartLanguageDetectionRequest;

__attribute__((visibility("hidden")))
@interface FTMutableLanguageDetectionStreamingRequest
{
}

@property(copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(copy, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a79a
- (id)init;	// IMP=0x000000000012a70c

@end


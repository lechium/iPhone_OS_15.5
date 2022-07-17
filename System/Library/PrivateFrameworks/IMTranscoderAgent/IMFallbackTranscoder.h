//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMFallbackTranscoder_AudioMessage;

@interface IMFallbackTranscoder : NSObject
{
    IMFallbackTranscoder_AudioMessage *_audioTranscoder;	// 8 = 0x8
}

@property(retain, nonatomic) IMFallbackTranscoder_AudioMessage *audioTranscoder; // @synthesize audioTranscoder=_audioTranscoder;
- (void)_transcodeAudioMessageContents:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000edbf
- (void)_transcodeAutoloopContents:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e9fc
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e983
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 inFileURL:(id)arg4 fallBack:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000000e1ac
- (id)_findPluginFallbackEncoder:(id)arg1 withBalloonBundleID:(id)arg2;	// IMP=0x000000000000de32
- (void)dealloc;	// IMP=0x000000000000ddf7

@end

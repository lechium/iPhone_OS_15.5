//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class VSAudioData;

@protocol SVXAudioStreamingListening <NSObject>

@optional
- (void)audioStreamDidProvideBuffer:(VSAudioData *)arg1;
- (void)audioStreamWillBeginWithAudioSessionID:(unsigned int)arg1;
@end


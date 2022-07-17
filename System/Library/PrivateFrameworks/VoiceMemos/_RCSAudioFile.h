//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCSAudioFile-Protocol.h>

@class AVAudioFormat, NSDictionary, NSString, NSURL, RCSSavedRecordingAccessToken;

__attribute__((visibility("hidden")))
@interface _RCSAudioFile : NSObject <RCSAudioFile>
{
    RCSSavedRecordingAccessToken *_fileToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000413cd
@property(retain, nonatomic) RCSSavedRecordingAccessToken *fileToken; // @synthesize fileToken=_fileToken;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

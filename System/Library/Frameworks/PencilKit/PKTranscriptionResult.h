//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKTranscriptionResult : NSObject
{
    NSString *_transcription;	// 8 = 0x8
    _Bool _didShowHUD;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014ae30
@property(readonly, nonatomic) _Bool didShowHUD; // @synthesize didShowHUD=_didShowHUD;
@property(readonly, copy, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
- (id)initWithTranscription:(id)arg1 didShowHUD:(_Bool)arg2;	// IMP=0x000000000014ada7

@end


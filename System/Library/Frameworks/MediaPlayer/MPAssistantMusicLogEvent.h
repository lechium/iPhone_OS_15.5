//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAssistantLogEvent-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent>
{
    unsigned int _sessionID;	// 8 = 0x8
    NSString *_siriSessionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050a7f
@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSMutableDictionary *eventPayload;
@property(readonly, nonatomic) long long eventCode;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


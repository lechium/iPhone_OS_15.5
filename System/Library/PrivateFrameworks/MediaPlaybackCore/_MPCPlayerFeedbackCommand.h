//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerFeedbackCommand-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerFeedbackCommand <MPCPlayerFeedbackCommand>
{
    _Bool _value;	// 16 = 0x10
    unsigned int _command;	// 20 = 0x14
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_localizedShortTitle;	// 32 = 0x20
    long long _presentationStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001389a9
@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) unsigned int command; // @synthesize command=_command;
- (id)changeValue:(_Bool)arg1;	// IMP=0x000000000013874c
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;	// IMP=0x000000000013870a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

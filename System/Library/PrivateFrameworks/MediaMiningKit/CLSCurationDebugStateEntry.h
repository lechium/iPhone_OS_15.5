//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSCurationDebugStateEntry : NSObject
{
    unsigned long long _state;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSString *_agent;	// 24 = 0x18
    NSString *_stage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009a683
@property(readonly) NSString *stage; // @synthesize stage=_stage;
@property(readonly) NSString *agent; // @synthesize agent=_agent;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4;	// IMP=0x000000000009a57a

@end


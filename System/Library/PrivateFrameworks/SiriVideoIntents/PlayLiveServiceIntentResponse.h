//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSString;

@interface PlayLiveServiceIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x00000000001611c0
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000161030
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000160f70
- (id)init;	// IMP=0x0000000000160ed0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000160df0
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSString *punchoutUrl; // @dynamic punchoutUrl;

@end


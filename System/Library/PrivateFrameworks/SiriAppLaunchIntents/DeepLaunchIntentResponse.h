//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE;

@interface DeepLaunchIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x0000000000063380
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000631f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000063130
- (id)init;	// IMP=0x0000000000063050
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000062f50
@property(nonatomic) long long code; // @synthesize code;

@end


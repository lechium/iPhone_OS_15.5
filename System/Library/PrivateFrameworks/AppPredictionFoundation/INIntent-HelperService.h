//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@interface INIntent (HelperService)
+ (id)atx_createIntentWithIntentType:(id)arg1 intentData:(id)arg2;	// IMP=0x00000000000045b5
+ (_Bool)shouldDenyConnectionForCurrentProcess;	// IMP=0x00000000000030fd
- (_Bool)atx_supportsBackgroundExecution;	// IMP=0x00000000000042e8
- (_Bool)atx_isEligibleForWidgets;	// IMP=0x0000000000003fa3
- (long long)atx_indexingHash;	// IMP=0x0000000000003cde
- (id)atx_subtitleWithEfficientLocalization;	// IMP=0x000000000000398a
- (id)atx_titleWithEfficientLocalization;	// IMP=0x0000000000003636
- (id)atx_titleWithoutLocalizing;	// IMP=0x0000000000003206
- (unsigned long long)atx_titleLengthWithoutLocalizing;	// IMP=0x00000000000031c2
@end

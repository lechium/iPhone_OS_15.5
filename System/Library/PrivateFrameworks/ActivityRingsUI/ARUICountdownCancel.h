//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownCancel <ARUICountdownAnimation>
{
}

+ (id)identifier;	// IMP=0x0000000000001de2
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001e09
- (id)identifier;	// IMP=0x0000000000001def
- (void)cancel;	// IMP=0x0000000000001ddc
- (_Bool)cancelable;	// IMP=0x0000000000001dd4
- (id)timingFunction;	// IMP=0x0000000000001da5
- (double)duration;	// IMP=0x0000000000001d97
- (double)delay;	// IMP=0x0000000000001d8e

@end

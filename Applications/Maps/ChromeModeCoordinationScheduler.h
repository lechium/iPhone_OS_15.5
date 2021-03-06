//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeModeOperation, ChromeViewController;

__attribute__((visibility("hidden")))
@interface ChromeModeCoordinationScheduler : NSObject
{
    ChromeModeOperation *_deferredOperation;	// 8 = 0x8
    ChromeViewController *_chromeViewController;	// 16 = 0x10
    CDUnknownBlockType _fallbackBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000873d5d
- (void)commit;	// IMP=0x0010000000873bf8
- (void)setFallbackBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000873b80
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000087391d
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x00100000008738a4

@end


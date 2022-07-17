//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface ProgressController : NSObject
{
    _Bool _progressShowing;	// 8 = 0x8
    int _loadingCount;	// 12 = 0xc
    NSTimer *_hideSpinnerTimer;	// 16 = 0x10
}

+ (id)sharedProgressController;	// IMP=0x00000000000210e2
- (void).cxx_destruct;	// IMP=0x0000000000021302
- (void)suspend;	// IMP=0x00000000000212e8
- (void)setLoadingData:(_Bool)arg1;	// IMP=0x00000000000211e8
- (void)_showSpinner;	// IMP=0x00000000000211af
- (void)_hideSpinner;	// IMP=0x0000000000021179
- (void)_setHideSpinnerTimer:(id)arg1;	// IMP=0x0000000000021125
- (void)userScrolled;	// IMP=0x000000000002111f

@end

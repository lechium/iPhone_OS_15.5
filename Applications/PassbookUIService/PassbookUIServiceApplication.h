//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSNumber;

@interface PassbookUIServiceApplication : UIApplication
{
    NSNumber *_statusBarHeightOverride;	// 8 = 0x8
}

+ (_Bool)shouldBackgroundMainThreadOnSuspendedLaunch;	// IMP=0x0040000000001f43
- (void).cxx_destruct;	// IMP=0x0020000000001f70
@property(retain, nonatomic) NSNumber *statusBarHeightOverride; // @synthesize statusBarHeightOverride=_statusBarHeightOverride;
- (double)statusBarHeight;	// IMP=0x0010000000001eee

@end

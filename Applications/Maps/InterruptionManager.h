//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIAlertController, UIViewController;

__attribute__((visibility("hidden")))
@interface InterruptionManager : NSObject
{
    UIAlertController *_locationServicesAlertView;	// 8 = 0x8
    CDUnknownBlockType _locationServicesAlertDismissalBlock;	// 16 = 0x10
    _Bool _displayingError;	// 24 = 0x18
    _Bool _isShowingCurrentLocationError;	// 25 = 0x19
    _Bool _isShowingLocationServicesAuthorizationPrompt;	// 26 = 0x1a
    unsigned int _postAlertSearchType;	// 28 = 0x1c
    UIViewController *_chromeViewController;	// 32 = 0x20
}

+ (id)localizedLocationAuthorizationTitle;	// IMP=0x004000000014d1f6
+ (id)localizedLocationAuthorizationMessage;	// IMP=0x001000000014d198
- (void).cxx_destruct;	// IMP=0x002000000014ef14
@property(nonatomic) __weak UIViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void)_locationAuthorizationDismissed:(id)arg1;	// IMP=0x001000000014ee66
- (MISSING_TYPE *)isShowingLocationServicesAlert;	// IMP=0x001000000014ee58
- (void)reportCurrentLocationFailure;	// IMP=0x001000000014ed4a
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(unsigned int)arg3;	// IMP=0x001000000014ebd7
- (CDUnknownBlockType)presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000014d540
- (id)presentNavSafetyAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000014d2e6

@end

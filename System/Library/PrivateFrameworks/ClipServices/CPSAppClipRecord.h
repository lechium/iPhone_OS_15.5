//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface CPSAppClipRecord : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_userNotificationGranted;	// 16 = 0x10
    NSNumber *_locationConfirmationGranted;	// 24 = 0x18
    long long _locationConfirmationState;	// 32 = 0x20
    double _lastProxCardLaunchTime;	// 40 = 0x28
    double _lastVersionCheckTime;	// 48 = 0x30
    double _lastInstallTime;	// 56 = 0x38
    NSString *_fullApplicationName;	// 64 = 0x40
    NSString *_fullApplicationCaption;	// 72 = 0x48
    NSURL *_fullApplicationStoreURL;	// 80 = 0x50
    id _debug_fullApplicationIcon;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001f628
@property(retain, nonatomic, setter=debug_setFullApplicationIcon:) id debug_fullApplicationIcon; // @synthesize debug_fullApplicationIcon=_debug_fullApplicationIcon;
@property(retain, nonatomic) NSURL *fullApplicationStoreURL; // @synthesize fullApplicationStoreURL=_fullApplicationStoreURL;
@property(copy, nonatomic) NSString *fullApplicationCaption; // @synthesize fullApplicationCaption=_fullApplicationCaption;
@property(copy, nonatomic) NSString *fullApplicationName; // @synthesize fullApplicationName=_fullApplicationName;
@property(nonatomic) double lastInstallTime; // @synthesize lastInstallTime=_lastInstallTime;
@property(nonatomic) double lastVersionCheckTime; // @synthesize lastVersionCheckTime=_lastVersionCheckTime;
@property(nonatomic) double lastProxCardLaunchTime; // @synthesize lastProxCardLaunchTime=_lastProxCardLaunchTime;
@property(nonatomic) long long locationConfirmationState; // @synthesize locationConfirmationState=_locationConfirmationState;
@property(copy, nonatomic) NSNumber *locationConfirmationGranted; // @synthesize locationConfirmationGranted=_locationConfirmationGranted;
@property(copy, nonatomic) NSNumber *userNotificationGranted; // @synthesize userNotificationGranted=_userNotificationGranted;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithSQLiteRow:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000001f288
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000001f1d6

@end

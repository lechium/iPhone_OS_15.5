//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SBUIRemoteAlertHostInterface;

@interface HUHomeControlServiceContext : NSObject
{
    id <SBUIRemoteAlertHostInterface> _remoteViewControllerProxy;	// 8 = 0x8
    NSString *_homeIdentifier;	// 16 = 0x10
    NSString *_roomIdentifier;	// 24 = 0x18
    unsigned long long _serviceType;	// 32 = 0x20
    NSString *_homeName;	// 40 = 0x28
    NSString *_roomName;	// 48 = 0x30
    NSURL *_defaultActionURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000155c4c
@property(copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *roomIdentifier; // @synthesize roomIdentifier=_roomIdentifier;
@property(retain, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(retain, nonatomic) id <SBUIRemoteAlertHostInterface> remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
- (id)_initWithUserInfo:(id)arg1;	// IMP=0x000000000015577b
- (id)userInfo;	// IMP=0x00000000001554af
- (id)initWithAlertConfigurationContext:(id)arg1;	// IMP=0x0000000000155459
- (id)initWithServiceType:(unsigned long long)arg1 home:(id)arg2 room:(id)arg3;	// IMP=0x0000000000155309
- (id)initWithServiceType:(unsigned long long)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3;	// IMP=0x0000000000155264

@end


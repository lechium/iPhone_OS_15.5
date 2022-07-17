//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying>
{
    NSMutableDictionary *_userNotificationDictionary;	// 8 = 0x8
    long long _alertLevel;	// 16 = 0x10
    double _timeoutInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000086dae
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) long long alertLevel; // @synthesize alertLevel=_alertLevel;
- (void)_setBoolValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0000000000086d57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086cd5
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *otherButtonTitle;
@property(copy, nonatomic) NSString *message;
@property(nonatomic) _Bool forcesModalAppearance;
@property(nonatomic) _Bool displaysAsTopMost;
@property(nonatomic) _Bool displaysActionButtonOnLockScreen;
@property(copy, nonatomic) NSString *defaultButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle;
@property(nonatomic) _Bool allowInCar;
- (struct __CFUserNotification *)createCFUserNotification;	// IMP=0x0000000000086851
- (id)initWithStoreDialog:(id)arg1;	// IMP=0x0000000000086648
- (id)init;	// IMP=0x000000000008659c

@end

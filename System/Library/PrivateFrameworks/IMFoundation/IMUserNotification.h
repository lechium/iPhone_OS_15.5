//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMUserNotification : NSObject
{
    id _reserved;	// 8 = 0x8
}

+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;	// IMP=0x000000000001ed4d
+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5;	// IMP=0x000000000001ecbb
- (void).cxx_destruct;	// IMP=0x000000000001f28a
- (void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2;	// IMP=0x000000000001f1ed
@property(readonly, retain, nonatomic) NSDictionary *responseInformation;
@property(readonly, nonatomic) unsigned long long responseFlags;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(nonatomic) _Bool usesNotificationCenter;
@property(nonatomic) _Bool requireUserInteraction;
@property(nonatomic) _Bool showInLockScreen;
@property(retain, nonatomic) NSString *representedApplicationBundle;
@property(readonly, nonatomic) unsigned long long response;
@property(readonly, retain, nonatomic) NSDictionary *displayInformation;
@property(readonly, nonatomic) unsigned long long displayFlags;
@property(readonly, nonatomic) double timeout;
@property(readonly, retain, nonatomic) id identifier;
- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4;	// IMP=0x000000000001ea68

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol BCSAction;

__attribute__((visibility("hidden")))
@interface BCSNotificationIcon : NSObject
{
    id <BCSAction> _action;	// 8 = 0x8
}

+ (id)nfcIcon;	// IMP=0x00000000000173e6
+ (id)qrCodeIcon;	// IMP=0x0000000000017396
- (void).cxx_destruct;	// IMP=0x00000000000181ef
- (id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2;	// IMP=0x0000000000017cc9
- (id)_clipIconURLForAction:(id)arg1 scale:(double)arg2;	// IMP=0x000000000001774e
@property(readonly, copy, nonatomic) NSURL *imageURL;
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000017436

@end

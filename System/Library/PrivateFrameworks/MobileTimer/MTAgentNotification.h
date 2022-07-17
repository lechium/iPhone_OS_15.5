//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTPowerAssertion, NSString;

@interface MTAgentNotification : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    MTPowerAssertion *_powerAssertion;	// 24 = 0x18
}

+ (id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;	// IMP=0x00000000000651cb
+ (id)notificationWithType:(long long)arg1 name:(id)arg2;	// IMP=0x00000000000651b6
- (void).cxx_destruct;	// IMP=0x0000000000065401
@property(retain, nonatomic) MTPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)dealloc;	// IMP=0x000000000006537b
- (void)releaseAssertion;	// IMP=0x0000000000065344
- (id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;	// IMP=0x000000000006522d

@end

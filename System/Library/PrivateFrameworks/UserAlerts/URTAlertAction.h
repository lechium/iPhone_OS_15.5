//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserAlerts/NSSecureCoding-Protocol.h>

@class NSString;

@interface URTAlertAction : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003c33
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003b24
- (void).cxx_destruct;	// IMP=0x0000000000003d59
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003ccc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003c3b
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003b90

@end

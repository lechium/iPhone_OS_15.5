//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSSecureCoding-Protocol.h>

@class NSString;

@interface STGenericIntentTopic : NSObject <NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000525e
- (void).cxx_destruct;	// IMP=0x000000000000534a
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005289
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005266

@end

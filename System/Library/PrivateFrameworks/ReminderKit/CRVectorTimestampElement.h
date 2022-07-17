//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface CRVectorTimestampElement : NSObject <NSSecureCoding>
{
    unsigned long long _clock;	// 8 = 0x8
    unsigned long long _subclock;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f7d98
@property(nonatomic) unsigned long long subclock; // @synthesize subclock=_subclock;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7e4b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f7da0
- (long long)rem_compareToVectorTimestampElement:(id)arg1;	// IMP=0x00000000000f7cb5

@end

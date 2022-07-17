//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HMTriggerPolicy : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002124c1
- (void).cxx_destruct;	// IMP=0x00000000002124b1
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002124a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002123ef
- (id)_initWithIdentifier:(id)arg1;	// IMP=0x0000000000212384
- (id)init;	// IMP=0x0000000000212376

@end

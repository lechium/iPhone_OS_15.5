//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>
{
    unsigned int _nextWildIndex;	// 8 = 0x8
    NSDate *_desiredKeyRollDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ed1e
@property(readonly) unsigned int nextWildIndex; // @synthesize nextWildIndex=_nextWildIndex;
@property(readonly) NSDate *desiredKeyRollDate; // @synthesize desiredKeyRollDate=_desiredKeyRollDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ed94
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ed26
- (id)description;	// IMP=0x000000000004eced
- (id)encodeConfiguration;	// IMP=0x000000000004ec7a
- (void)dealloc;	// IMP=0x000000000004ec3f
- (id)initWithDesiredNextKeyRollDate:(id)arg1 nextWildIndex:(unsigned int)arg2;	// IMP=0x000000000004ebdd
- (id)init;	// IMP=0x000000000004ebc5

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SiriAnalyticsLogicalTimeStamp : NSObject
{
    unsigned long long _nanoSecondsSinceBoot;	// 8 = 0x8
    NSUUID *_clockIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000eac1
@property(readonly, nonatomic) NSUUID *clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
@property(readonly, nonatomic) unsigned long long nanoSecondsSinceBoot; // @synthesize nanoSecondsSinceBoot=_nanoSecondsSinceBoot;
- (id)loggingRepresentation;	// IMP=0x000000000000e9f6
- (id)initWithMachAbsoluteTime:(unsigned long long)arg1 clockIdentifier:(id)arg2;	// IMP=0x000000000000e978
- (id)init;	// IMP=0x000000000000e96a

@end


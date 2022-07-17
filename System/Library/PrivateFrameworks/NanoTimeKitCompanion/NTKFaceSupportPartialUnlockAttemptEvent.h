//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NTKFaceSupportPartialUnlockAttemptEvent : NSObject
{
    NSDate *_creationDate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _method;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002409c
@property(readonly, nonatomic) unsigned long long method; // @synthesize method=_method;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)unlockAttemptWithStatus:(unsigned long long)arg1 errorCode:(long long)arg2;	// IMP=0x0000000000023f79
- (id)initWithIdentifier:(id)arg1 method:(unsigned long long)arg2;	// IMP=0x0000000000023e85

@end

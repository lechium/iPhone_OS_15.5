//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSDate;
@protocol MSBackoffManagerDelegate;

@interface MSBackoffManager : NSObject <NSSecureCoding>
{
    id <MSBackoffManagerDelegate> _delegate;	// 8 = 0x8
    double _initialInterval;	// 16 = 0x10
    double _backoffFactor;	// 24 = 0x18
    double _randomizeFactor;	// 32 = 0x20
    double _maxBackoffInterval;	// 40 = 0x28
    double _currentInterval;	// 48 = 0x30
    NSDate *_nextExpiryDate;	// 56 = 0x38
    NSDate *_retryAfterDate;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038fd9
- (void).cxx_destruct;	// IMP=0x0000000000038fb1
@property(retain) NSDate *retryAfterDate; // @synthesize retryAfterDate=_retryAfterDate;
@property(nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property(nonatomic) double maxBackoffInterval; // @synthesize maxBackoffInterval=_maxBackoffInterval;
@property(nonatomic) double randomizeFactor; // @synthesize randomizeFactor=_randomizeFactor;
@property(nonatomic) double backoffFactor; // @synthesize backoffFactor=_backoffFactor;
@property(nonatomic) double initialInterval; // @synthesize initialInterval=_initialInterval;
@property(nonatomic) id <MSBackoffManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038c72
- (void)_complainAboutMissingKeyInArchive:(id)arg1;	// IMP=0x0000000000038bdf
- (id)copyParameters;	// IMP=0x00000000000389d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000388a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038696
- (void)backoff;	// IMP=0x0000000000038524
- (void)reset;	// IMP=0x0000000000038489
- (void)didReceiveRetryAfterDate:(id)arg1;	// IMP=0x00000000000382db
@property(retain) NSDate *nextExpiryDate;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;	// IMP=0x000000000003804e

@end


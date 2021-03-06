//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject
{
    _CDRateLimiter *_rateLimiter;	// 8 = 0x8
    unsigned long long _lifespanInSeconds;	// 16 = 0x10
    unsigned long long _maxNumberStored;	// 24 = 0x18
    unsigned long long _timeResolutionInSeconds;	// 32 = 0x20
    unsigned long long _maxNumberOfRecipients;	// 40 = 0x28
    unsigned long long _maxNumberOfKeywords;	// 48 = 0x30
    unsigned long long _maxNumberOfAttachments;	// 56 = 0x38
}

+ (id)specialPolicyForFirstPartyApps;	// IMP=0x000000000006281c
+ (id)defaultPolicyForCalls;	// IMP=0x00000000000627de
+ (id)defaultPolicyForMessages;	// IMP=0x0000000000062755
+ (id)defaultPolicyForMeetings;	// IMP=0x00000000000626db
+ (id)defaultPolicyForEmail;	// IMP=0x0000000000062640
+ (id)defaultPolicy;	// IMP=0x0000000000062549
+ (unsigned long long)defaultMaxNumberOfAttachments;	// IMP=0x000000000006253e
+ (unsigned long long)defaultMaxNumberOfKeywords;	// IMP=0x0000000000062533
+ (unsigned long long)defaultMaxNumberOfRecipients;	// IMP=0x0000000000062528
+ (unsigned long long)defaultMaxNumberStored;	// IMP=0x000000000006251d
+ (unsigned long long)defaultTimeResolutionInSeconds;	// IMP=0x0000000000062515
+ (unsigned long long)defaultLifespan;	// IMP=0x000000000006250a
+ (id)policyFromDictionary:(id)arg1;	// IMP=0x0000000000062170
+ (id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;	// IMP=0x0000000000061ce3
- (void).cxx_destruct;	// IMP=0x0000000000062955
@property unsigned long long maxNumberOfAttachments; // @synthesize maxNumberOfAttachments=_maxNumberOfAttachments;
@property unsigned long long maxNumberOfKeywords; // @synthesize maxNumberOfKeywords=_maxNumberOfKeywords;
@property unsigned long long maxNumberOfRecipients; // @synthesize maxNumberOfRecipients=_maxNumberOfRecipients;
@property unsigned long long timeResolutionInSeconds; // @synthesize timeResolutionInSeconds=_timeResolutionInSeconds;
@property unsigned long long maxNumberStored; // @synthesize maxNumberStored=_maxNumberStored;
@property unsigned long long lifespanInSeconds; // @synthesize lifespanInSeconds=_lifespanInSeconds;
@property(retain) _CDRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
- (id)description;	// IMP=0x0000000000061e17
- (id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;	// IMP=0x0000000000061d6d

@end


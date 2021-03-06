//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AMSPromise, NSError, NSString, NSURL;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSURL *_privacyPolicyURL;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    AMSPromise *_outstandingPromise;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001568e2
@property(retain) AMSPromise *outstandingPromise; // @synthesize outstandingPromise=_outstandingPromise;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(getter=isFinished) _Bool finished;
@property(getter=isExecuting) _Bool executing;
- (_Bool)isAsynchronous;	// IMP=0x00000000001566e4
- (void)start;	// IMP=0x0000000000156616
- (void)_performLookup;	// IMP=0x0000000000155f8e
- (void)cancel;	// IMP=0x0000000000155e2c
- (id)debugDescription;	// IMP=0x0000000000155d4d
- (id)description;	// IMP=0x0000000000155ca3
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000155c29
- (id)init;	// IMP=0x0000000000155baf

@end


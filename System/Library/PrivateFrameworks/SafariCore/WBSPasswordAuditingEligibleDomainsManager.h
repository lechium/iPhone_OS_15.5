//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface WBSPasswordAuditingEligibleDomainsManager : NSObject
{
    NSSet *_domainsIneligibleForPasswordAuditing;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000065be9
@property(copy) NSSet *domainsIneligibleForPasswordAuditing; // @synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)arg1;	// IMP=0x0000000000065b3c
- (id)init;	// IMP=0x0000000000065b2e

@end


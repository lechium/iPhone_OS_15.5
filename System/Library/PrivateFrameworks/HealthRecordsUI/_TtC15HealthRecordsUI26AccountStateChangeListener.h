//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKClinicalAccountStoreStateChangeListener-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI26AccountStateChangeListener : NSObject <HKClinicalAccountStoreStateChangeListener>
{
    MISSING_TYPE *_latestChange;	// 0 = 0x0
    MISSING_TYPE *handler;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001823c0
- (id)init;	// IMP=0x00000000001820c0
- (void)clinicalAccountStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3;	// IMP=0x0000000000181ff0

@end
